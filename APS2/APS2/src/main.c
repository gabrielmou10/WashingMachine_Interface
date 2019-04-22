/**
 * \file
 *
 * \brief Example of usage of the maXTouch component with USART
 *
 * This example shows how to receive touch data from a maXTouch device
 * using the maXTouch component, and display them in a terminal window by using
 * the USART driver.
 *
 * Copyright (c) 2014-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */

/**
 * \mainpage
 *
 * \section intro Introduction
 * This simple example reads data from the maXTouch device and sends it over
 * USART as ASCII formatted text.
 *
 * \section files Main files:
 * - example_usart.c: maXTouch component USART example file
 * - conf_mxt.h: configuration of the maXTouch component
 * - conf_board.h: configuration of board
 * - conf_clock.h: configuration of system clock
 * - conf_example.h: configuration of example
 * - conf_sleepmgr.h: configuration of sleep manager
 * - conf_twim.h: configuration of TWI driver
 * - conf_usart_serial.h: configuration of USART driver
 *
 * \section apiinfo maXTouch low level component API
 * The maXTouch component API can be found \ref mxt_group "here".
 *
 * \section deviceinfo Device Info
 * All UC3 and Xmega devices with a TWI module can be used with this component
 *
 * \section exampledescription Description of the example
 * This example will read data from the connected maXTouch explained board
 * over TWI. This data is then processed and sent over a USART data line
 * to the board controller. The board controller will create a USB CDC class
 * object on the host computer and repeat the incoming USART data from the
 * main controller to the host. On the host this object should appear as a
 * serial port object (COMx on windows, /dev/ttyxxx on your chosen Linux flavour).
 *
 * Connect a terminal application to the serial port object with the settings
 * Baud: 57600
 * Data bits: 8-bit
 * Stop bits: 1 bit
 * Parity: None
 *
 * \section compinfo Compilation Info
 * This software was written for the GNU GCC and IAR for AVR.
 * Other compilers may or may not work.
 *
 * \section contactinfo Contact Information
 * For further information, visit
 * <A href="http://www.atmel.com/">Atmel</A>.\n
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

//Includes
#include <asf.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "maquina1.h"
#include "conf_board.h"
#include "conf_example.h"
#include "conf_uart_serial.h"

//PA4 - BOTAO LOCK
#define BUTLOCK_PIO         PIOA
#define BUTLOCK_PIO_ID        10
#define BUTLOCK_PIO_IDX       4u
#define BUTLOCK_PIO_IDX_MASK  (1u << BUTLOCK_PIO_IDX)

/**
 * Inicializa ordem do menu
 * retorna o primeiro ciclo que
 * deve ser exibido.
 */
t_ciclo *initMenuOrder(){
  c_rapido.previous = &c_enxague;
  c_rapido.next = &c_diario;

  c_diario.previous = &c_rapido;
  c_diario.next = &c_pesado;

  c_pesado.previous = &c_diario;
  c_pesado.next = &c_enxague;

  c_enxague.previous = &c_pesado;
  c_enxague.next = &c_centrifuga;

  c_centrifuga.previous = &c_enxague;
  c_centrifuga.next = &c_rapido;

  return(&c_diario);
}

// Configuração do botão externo
void _pio_set(Pio *p_pio, const uint32_t ul_mask){
}

void init(void){
	// Initialize the board clock
	sysclk_init();
	
	// Desativa WatchDog Timer
	WDT->WDT_MR = WDT_MR_WDDIS;
		
	// Inicializa PIO do botao
	pmc_enable_periph_clk(BUTLOCK_PIO_ID);
	
	// configura pino ligado ao botão como entrada com um pull-up.
	pio_configure(BUTLOCK_PIO, PIO_INPUT,BUTLOCK_PIO_IDX_MASK, PIO_PULLUP);
	pio_enable_interrupt(BUTLOCK_PIO, BUTLOCK_PIO_IDX_MASK);
	NVIC_EnableIRQ(BUTLOCK_PIO_ID);
	//pio_set_input(BUTLOCK_PIO,BUTLOCK_PIO_IDX_MASK,PIO_DEFAULT);
	//pio_pull_up(BUTLOCK_PIO,BUTLOCK_PIO_IDX_MASK,1);


}


//Defines
#define MAX_ENTRIES        3
#define STRING_LENGTH     70
#define USART_TX_MAX_LENGTH     0xff
struct ili9488_opt_t g_ili9488_display_opt;

//Struct Icons
typedef struct {
	    const uint8_t *data;
	    uint16_t width;
	    uint16_t height;
	    uint8_t dataSize;
    } tImage;

// Icons
#include "icones/powerbutton.h"
#include "icones/valve.h"
#include "icones/gear.h"
#include "icones/next.h"	
#include "icones/Rapido.h"
#include "icones/Diario.h"
#include "icones/enxague.h"
#include "icones/Pesado.h"
#include "icones/Centrifugacao.h"

//Struct Buttons
typedef struct{
	void (*call_back)(int);
	uint32_t axe_x;
	uint32_t axe_y;
	uint32_t width;
	uint32_t height;
	ili9488_color_t *imagens_icons;
} button;

// MODO ATUAL
int count_mode = 0;

// FLAGS
volatile t_ciclo *statusCiclo;
volatile Bool locked; // melhor inicialiazar na main
volatile Bool started;
volatile Bool nextmode;
volatile uint8_t tempo = 0;
volatile uint8_t minuto = 0;
volatile Bool start;

void TC_init(Tc * TC, int ID_TC, int TC_CHANNEL, int freq);

	
static void configure_lcd(void){
	/* Initialize display parameter */
	g_ili9488_display_opt.ul_width = ILI9488_LCD_WIDTH;
	g_ili9488_display_opt.ul_height = ILI9488_LCD_HEIGHT;
	g_ili9488_display_opt.foreground_color = COLOR_CONVERT(COLOR_WHITE);
	g_ili9488_display_opt.background_color = COLOR_CONVERT(COLOR_WHITE);

	/* Initialize LCD */
	ili9488_init(&g_ili9488_display_opt);
}
/**
 * \brief Set maXTouch configuration
 *
 * This function writes a set of predefined, optimal maXTouch configuration data
 * to the maXTouch Xplained Pro.
 *
 * \param device Pointer to mxt_device struct
 */
static void mxt_init(struct mxt_device *device)
{
	enum status_code status;

	/* T8 configuration object data */
	uint8_t t8_object[] = {
		0x0d, 0x00, 0x05, 0x0a, 0x4b, 0x00, 0x00,
		0x00, 0x32, 0x19
	};

	/* T9 configuration object data */
	uint8_t t9_object[] = {
		0x8B, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x80,
		0x32, 0x05, 0x02, 0x0A, 0x03, 0x03, 0x20,
		0x02, 0x0F, 0x0F, 0x0A, 0x00, 0x00, 0x00,
		0x00, 0x18, 0x18, 0x20, 0x20, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x02,
		0x02
	};

	/* T46 configuration object data */
	uint8_t t46_object[] = {
		0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x03,
		0x00, 0x00
	};
	
	/* T56 configuration object data */
	uint8_t t56_object[] = {
		0x02, 0x00, 0x01, 0x18, 0x1E, 0x1E, 0x1E,
		0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E,
		0x1E, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00
	};

	/* TWI configuration */
	twihs_master_options_t twi_opt = {
		.speed = MXT_TWI_SPEED,
		.chip  = MAXTOUCH_TWI_ADDRESS,
	};

	status = (enum status_code)twihs_master_setup(MAXTOUCH_TWI_INTERFACE, &twi_opt);
	Assert(status == STATUS_OK);

	/* Initialize the maXTouch device */
	status = mxt_init_device(device, MAXTOUCH_TWI_INTERFACE,
			MAXTOUCH_TWI_ADDRESS, MAXTOUCH_XPRO_CHG_PIO);
	Assert(status == STATUS_OK);

	/* Issue soft reset of maXTouch device by writing a non-zero value to
	 * the reset register */
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_COMMANDPROCESSOR_T6, 0)
			+ MXT_GEN_COMMANDPROCESSOR_RESET, 0x01);

	/* Wait for the reset of the device to complete */
	delay_ms(MXT_RESET_TIME);

	/* Write data to configuration registers in T7 configuration object */
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_POWERCONFIG_T7, 0) + 0, 0x20);
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_POWERCONFIG_T7, 0) + 1, 0x10);
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_POWERCONFIG_T7, 0) + 2, 0x4b);
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_POWERCONFIG_T7, 0) + 3, 0x84);

	/* Write predefined configuration data to configuration objects */
	mxt_write_config_object(device, mxt_get_object_address(device,
			MXT_GEN_ACQUISITIONCONFIG_T8, 0), &t8_object);
	mxt_write_config_object(device, mxt_get_object_address(device,
			MXT_TOUCH_MULTITOUCHSCREEN_T9, 0), &t9_object);
	mxt_write_config_object(device, mxt_get_object_address(device,
			MXT_SPT_CTE_CONFIGURATION_T46, 0), &t46_object);
	mxt_write_config_object(device, mxt_get_object_address(device,
			MXT_PROCI_SHIELDLESS_T56, 0), &t56_object);

	/* Issue recalibration command to maXTouch device by writing a non-zero
	 * value to the calibrate register */
	mxt_write_config_reg(device, mxt_get_object_address(device,
			MXT_GEN_COMMANDPROCESSOR_T6, 0)
			+ MXT_GEN_COMMANDPROCESSOR_CALIBRATE, 0x01);
}

void draw_screen(void) {
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_WHITE));
	ili9488_draw_filled_rectangle(0, 0, ILI9488_LCD_WIDTH-1, ILI9488_LCD_HEIGHT-1);
}

uint32_t convert_axis_system_x(uint32_t touch_y) {
	// entrada: 4096 - 0 (sistema de coordenadas atual)
	// saida: 0 - 320
	return ILI9488_LCD_WIDTH - ILI9488_LCD_WIDTH*touch_y/4096;
}

uint32_t convert_axis_system_y(uint32_t touch_x) {
	// entrada: 0 - 4096 (sistema de coordenadas atual)
	// saida: 0 - 320
	return ILI9488_LCD_HEIGHT*touch_x/4096;
}

void draw_mode(){
	
	//Pegar os ciclos
	
	char bufferCiclos[32];
	sprintf(bufferCiclos, statusCiclo);
	
	// Cada ciclo no lcd
	char nome[32];
	char enxagueTempo[15];
	char enxagueQnt[15];
	char centrifugacaoRPM[15];
	char centrifugacaoTempo[15];
	char centrifugaString[32];
	char stringEnxague[32];
	
	sprintf(bufferCiclos,"%s",statusCiclo->nome);
	ili9488_draw_string(200, 10, bufferCiclos);
	
	sprintf(bufferCiclos,"%d minutos",statusCiclo->enxagueTempo);
	ili9488_draw_string(200,380, bufferCiclos);
	
	sprintf(bufferCiclos,"%d enxagues",statusCiclo->enxagueQnt);
	ili9488_draw_string(170,280, bufferCiclos);
	
	sprintf(bufferCiclos,"%d RPM",statusCiclo->centrifugacaoRPM);
	ili9488_draw_string(10,280, bufferCiclos);
	
	sprintf(bufferCiclos,"%d minutos",statusCiclo->centrifugacaoTempo);
	ili9488_draw_string(10,380, bufferCiclos);
	
	//centrifugaString=printf("%s" ,"Centrifuga:");
	ili9488_draw_string(10,360, "Centrifuga");
	
	//sprintf(bufferCiclos,"Enxague:");
	//ili9488_draw_string(200,360, stringEnxague);
	
	

	
	if (statusCiclo->heavy == 1){
		ili9488_draw_string(200, 450, "HEAVY");
		sprintf(bufferCiclos, "Pesado ligado");
	}
	
	if (statusCiclo->bubblesOn == 1){
		ili9488_draw_string(200, 420, "BUBBLES ON");
		sprintf(bufferCiclos,"Bolhas ligadas");
	}	
	
}

void draw_lines(void){
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	ili9488_draw_filled_rectangle(0,160,320,165);
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	ili9488_draw_filled_rectangle(0,320,320,325);
}

void fim(){
	char Final[32];
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_WHITE));
	ili9488_draw_filled_rectangle(210,370,400,500);
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	sprintf(Final, "%s %d", "Fim da Lavagem");
	ili9488_draw_string(10, 420, Final);
}
void draw_strings(){
	ili9488_draw_string(225, 340,"LOCK");
}


void draw_icons(void){
	ili9488_draw_pixmap(10,10,powerbutton.width, powerbutton.width, powerbutton.data);
	ili9488_draw_pixmap(170,170,valve.width, valve.width, valve.data);
	ili9488_draw_pixmap(10,170,gear.width, gear.width, gear.data);
	ili9488_draw_pixmap(170,30,next.width,next.width,next.data);
}

void timePrint(){
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_WHITE));
	ili9488_draw_filled_rectangle(5,420,150,460);
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	char remainingTime[32];
	int lastTime = (statusCiclo->centrifugacaoTempo+statusCiclo->enxagueTempo)-minuto;
	sprintf(remainingTime, "%s\n %d\n", "Tempo restante:",lastTime);
	ili9488_draw_string(10, 420, remainingTime);
}

// Botão NEXT MODE
void draw_button_Next(uint32_t clicked){
	static uint32_t last_state = 255; // undefined
	if(clicked == last_state) return;
	if(clicked) {
		nextmode = 1;
	}else{}	
	last_state = clicked;
}

/*
void draw_button_lock(uint32_t clicked, button *buttons) {
	static uint32_t last_state = 255; // undefined
	if(clicked == last_state) return;
	
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	ili9488_draw_filled_rectangle(buttons[2].axe_x,buttons[2].axe_y,buttons[2].axe_x + buttons[2].width,buttons[2].axe_y + buttons[2].height);
	if(clicked) {
		ili9488_set_foreground_color(COLOR_CONVERT(COLOR_TOMATO));
		ili9488_draw_filled_rectangle(buttons[2].axe_x,buttons[2].axe_y,buttons[2].axe_x + buttons[2].width/2,buttons[2].axe_y + buttons[2].height);
		} else {
		ili9488_set_foreground_color(COLOR_CONVERT(COLOR_GREEN));
		ili9488_draw_filled_rectangle(buttons[2].axe_x,buttons[2].axe_y,buttons[2].axe_x + buttons[2].width,buttons[2].axe_y + buttons[2].height);
	}
	last_state = clicked;
}
*/


void draw_button_isDone(uint32_t clicked) {
	static uint32_t last_state = 255; // undefined
	if(clicked == last_state) return;
	
	ili9488_set_foreground_color(COLOR_CONVERT(COLOR_BLACK));
	ili9488_draw_filled_rectangle(10,440,110,470);
	if(clicked) {
		ili9488_set_foreground_color(COLOR_CONVERT(COLOR_TOMATO));
		ili9488_draw_filled_rectangle(10,440,60,470);
		} else {
		ili9488_set_foreground_color(COLOR_CONVERT(COLOR_GREEN));
		ili9488_draw_filled_rectangle(60,440,110,470);
	}
	last_state = clicked;
}



void callback_power(void){
	TC_init(TC0,ID_TC0,0,1);
}
void callback_next(void){
}

void callback_lock(void){
}

void callback_time(void){
}

/**
*  Interrupt handler for TC1 interrupt.
*/
void TC0_Handler(void){
	volatile uint32_t ul_dummy;

	/****************************************************************
	* Devemos indicar ao TC que a interrupção foi satisfeita.
	******************************************************************/
	ul_dummy = tc_get_status(TC0, 0);

	/* Avoid compiler warning */
	UNUSED(ul_dummy);
	
	tempo+=1; //em segundos
	if (tempo == 1){
		minuto += 1;
		tempo = 0;
		timePrint();
	}
	if (((statusCiclo->centrifugacaoTempo+statusCiclo->enxagueTempo)-minuto) <= 0){
		start = false;
		minuto = 0;
		tempo = 0;
		fim();
		tc_stop(TC0, 0);
	}
	
}

/**
* Configura TimerCounter (TC) para gerar uma interrupcao no canal (ID_TC e TC_CHANNEL)
* na taxa de especificada em freq.
*/
void TC_init(Tc * TC, int ID_TC, int TC_CHANNEL, int freq){
	uint32_t ul_div;
	uint32_t ul_tcclks;
	uint32_t ul_sysclk = sysclk_get_cpu_hz();

	uint32_t channel = 1;

	/* Configura o PMC */
	/* O TimerCounter é meio confuso
	o uC possui 3 TCs, cada TC possui 3 canais
	TC0 : ID_TC0, ID_TC1, ID_TC2
	TC1 : ID_TC3, ID_TC4, ID_TC5
	TC2 : ID_TC6, ID_TC7, ID_TC8
	*/
	pmc_enable_periph_clk(ID_TC);

	/** Configura o TC para operar em  4Mhz e interrupçcão no RC compare */
	tc_find_mck_divisor(freq, ul_sysclk, &ul_div, &ul_tcclks, ul_sysclk);
	tc_init(TC, TC_CHANNEL, ul_tcclks | TC_CMR_CPCTRG);
	tc_write_rc(TC, TC_CHANNEL, (ul_sysclk / ul_div) / freq);

	/* Configura e ativa interrupçcão no TC canal 0 */
	/* Interrupção no C */
	NVIC_EnableIRQ((IRQn_Type) ID_TC);
	tc_enable_interrupt(TC, TC_CHANNEL, TC_IER_CPCS);

	/* Inicializa o canal 0 do TC */
	tc_start(TC, TC_CHANNEL);
}
void update_screen(uint32_t tx, uint32_t ty,button *buttons){
	
	/*if(ty >= buttons[2].axe_y  &&  ty <= buttons[2].axe_y + buttons[2].height ) {
		if(tx >= buttons[2].axe_x  && tx <= buttons[2].axe_x + buttons[2].width/2) {
			draw_button_lock(1,&buttons);
			locked = 1;
			} else if(tx > buttons[2].axe_x  && tx < buttons[2].axe_x + buttons[2].width) {
			draw_button_lock(0,&buttons);
			locked = 0;
		}
	}*/
	
	
	//powerButton
	if(ty >= buttons[0].axe_y  &&  ty <= buttons[0].axe_y + buttons[0].height ){
		if(tx >= buttons[0].axe_x  && tx <= buttons[0].axe_x+ buttons[0].width) {
			if(start ==false){
				start = true;
				TC_init(TC0,ID_TC0,0,1);
				timePrint();
				locked = 1;
			}
			else if(start ==true){
				start = false;
				tc_stop(TC0,0);			
			}
		}
	}
	if(locked){
		ili9488_draw_string(225, 340,"LOCK");
	}	
			
			
	
	// Ver se o botão next foi clicado
	if(ty >= buttons[1].axe_y  &&  ty <= buttons[1].axe_y + buttons[1].height ) {
		if(tx >= buttons[1].axe_x  && tx <= buttons[1].axe_x+ buttons[1].width) {
			if (count_mode < 4){
				statusCiclo = statusCiclo -> next;
				count_mode = count_mode + 1;
				nextmode = 1;
				tc_stop(TC0,0);
				minuto = 0;
				tempo = 0;
			}
			else{count_mode=0;}
		}
	}
	
}

void mxt_handler(struct mxt_device *device,button *buttons)
{
	/* USART tx buffer initialized to 0 */
	char tx_buf[STRING_LENGTH * MAX_ENTRIES] = {0};
	uint8_t i = 0; /* Iterator */

	/* Temporary touch event data struct */
	struct mxt_touch_event touch_event;

	/* Collect touch events and put the data in a string,
	 * maximum 2 events at the time */
	do {
		/* Temporary buffer for each new touch event line */
		char buf[STRING_LENGTH];
	
		/* Read next next touch event in the queue, discard if read fails */
		if (mxt_read_touch_event(device, &touch_event) != STATUS_OK) {
			continue;
		}
		uint32_t conv_x = convert_axis_system_x(touch_event.y);
		uint32_t conv_y = convert_axis_system_y(touch_event.x);

		//Format a new entry in the data string that will be sent over USART */
		sprintf(buf, "Nr: %1d, X:%4d, Y:%4d, Status:0x%2x conv X:%3d Y:%3d\n\r",
				touch_event.id, touch_event.x, touch_event.y,
				touch_event.status, conv_x, conv_y);
		
		int last_status = touch_event.status;
		if(last_status<60){
			update_screen(conv_x, conv_y,buttons);
		}				
		

		/* Add the new string to the string buffer */
		strcat(tx_buf, buf);
		i++;

		/* Check if there is still messages in the queue and
		 * if we have reached the maximum numbers of events */
	} while ((mxt_is_message_pending(device)) & (i < MAX_ENTRIES));

	/* If there is any entries in the buffer, send them over USART */
	if (i > 0) {
		usart_serial_write_packet(USART_SERIAL_EXAMPLE, (uint8_t *)tx_buf, strlen(tx_buf));
	}
}

int main(void)
{
	struct mxt_device device; /* Device data container */
	
	init();
	statusCiclo = initMenuOrder();
	/* Initialize the USART configuration struct */
	const usart_serial_options_t usart_serial_options = {
		.baudrate     = USART_SERIAL_EXAMPLE_BAUDRATE,
		.charlength   = USART_SERIAL_CHAR_LENGTH,
		.paritytype   = USART_SERIAL_PARITY,
		.stopbits     = USART_SERIAL_STOP_BIT
	};
	
     button power_button = {.call_back=callback_power,.axe_x=10,.axe_y=10, .width=powerbutton.width,.height=powerbutton.height, .imagens_icons=powerbutton.data};
     button next_button  = {.call_back=callback_next,.axe_x=170,.axe_y=30,.width=next.width,.height=next.height,.imagens_icons = next.data};
     //button safety_lock = {.call_back=callback_lock,.axe_x=210,.axe_y=370,.width=100,.height=30,.imagens_icons=NULL};
     //button time_IsDone = {.call_back=callback_time,.axe_x=10,.axe_y=440,.width=100,.height=30,.imagens_icons=NULL};	
	
	// Vetores de ciclos e botões
	t_ciclo cicles[] = {c_diario, c_pesado, c_enxague, c_centrifuga, c_rapido};
	button buttons[]= {power_button,next_button};	
		
		
	sysclk_init(); /* Initialize system clocks */
	board_init();  /* Initialize board */
	configure_lcd();
	
	/* Initialize the mXT touch device */
	mxt_init(&device);
	
	/* Initialize stdio on USART */
	stdio_serial_init(USART_SERIAL_EXAMPLE, &usart_serial_options);

	printf("\n\rmaXTouch data USART transmitter\n\r");
	
	// FLAGS
	locked = false; // melhor inicialiazar na main
	started = false;
	nextmode = false;
	start = false;
	uint32_t count_lock = 0;
	
	while (true) {
		/* Check for any pending messages and run message handler if any
		 * message is found in the queue */
		if(!(pio_get(BUTLOCK_PIO, PIO_INPUT, BUTLOCK_PIO_IDX_MASK))){
			count_lock=count_lock+1;
		}
		printf("%d \n",count_lock);
		printf("LOCEKD: %d \n",locked);
		delay_ms(60);
		if (count_lock == 3){
			locked = !locked;
			count_lock = 0;
		}
		if (!locked && mxt_is_message_pending(&device)) {
			mxt_handler(&device,&buttons);
		}
		if (!started){
			draw_screen();
			draw_lines();
			//draw_button_lock(1,&buttons);
			draw_icons();
			draw_mode(cicles,count_mode);
			started = 1;
		}
		if (locked){
			draw_strings();
		}
		if (nextmode){
			draw_screen();
			draw_lines();
			//draw_button_lock(1,&buttons);
			//draw_strings();
			draw_icons();		
			draw_mode(cicles,count_mode);
			nextmode = 0;
		}	

	}

	return 0;
}
