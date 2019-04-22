
/*******************************************************************************
* image
* filename: unsaved
* name: Rapido
*
* preset name: Color R8G8B8
* data block size: 32 bit(s), uint32_t
* RLE compression enabled: no
* conversion type: Color, not_used not_used
* bits per pixel: 24
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint32_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <stdint.h>



static const uint32_t image_data_Rapido[1900] = {
    0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfefefefe, 0xfefefefe, 0xfefefefe, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfefefefe, 0xfefefefe, 0xfefefefe, 0xfbfbfbff, 0xfffffafa, 0xfafafafa, 0xffffffff, 0xffffffff, 0xfffdfdfd, 0xfffffffc, 0xfcfcffff, 0xfffcfcfc, 0xfcfcfcff, 0xfffffdfd, 0xfdfbfbfb, 0xfdfdfdff, 0xfffffefe, 0xfefbfbfb, 0xfffffffe, 0xfefefefe, 0xfefdfdfd, 0xfefefefe, 0xfefe0000, 
    0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfefefefb, 0xfbfbffff, 0xfffdfdfd, 0xfcfcfcfb, 0xfbfbfbfb, 0xfbfcfcfc, 0xfffffffc, 0xfcfcfcfc, 0xfcfafafa, 0xfffffff8, 0xf8f8fdfd, 0xfdfbfbfb, 0xfdfdfdf5, 0xf5f5ffff, 0xfff9f9f9, 0xfbfbfbfd, 0xfdfde3e3, 0xe3f4f4f4, 0xfefefefd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfbfbfbfb, 0xfbfbfbfb, 0xfbfbfbfb, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfefefef6, 0xf6f6fdfd, 0xfdfbfbfb, 0xfcfcfcfa, 0xfafaffff, 0xfffcfcfc, 0xf8f8f8ff, 0xfffffefe, 0xfefbfbfb, 0xfffffff9, 0xf9f9fefe, 0xfefafafa, 0xfcfcfcff, 0xfffffafa, 0xfaf7f7f7, 0xfdfdfdec, 0xecec6262, 0x62e7e7e7, 0xfefefefd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xffffffff, 0xfffffbfb, 0xfbfdfdfd, 0xfefefef9, 0xf9f9ffff, 0xfffafafa, 0xfafafaff, 0xfffffafa, 0xfaf9f9f9, 0xf9f9f9fd, 0xfdfdfcfc, 0xfcfefefe, 0xf5f5f5fc, 0xfcfcf8f8, 0xf8ffffff, 0xf0f0f06b, 0x6b6b1c1c, 0x1cf3f3f3, 0xfffffffe, 0xfefe0000, 
    0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xf4f4f4fe, 0xfefefbfb, 0xfbfbfbfb, 0xfcfcfcfd, 0xfdfdf8f8, 0xf8fafafa, 0xfefefef9, 0xf9f9ffff, 0xfffefefe, 0xfffffffc, 0xfcfcf4f4, 0xf4f9f9f9, 0xffffffff, 0xfffffdfd, 0xfdcfcfcf, 0x5b5b5b0c, 0x0c0c5252, 0x52efefef, 0xfffffffe, 0xfefe0000, 
    0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcf8, 0xf8f8fcfc, 0xfcf5f5f5, 0xfbfbfbff, 0xfffff9f9, 0xf9ffffff, 0xfafafaf8, 0xf8f8ffff, 0xfff5f5f5, 0xfafafafb, 0xfbfbffff, 0xffffffff, 0xffffffdf, 0xdfdfa0a0, 0xa01c1c1c, 0x3b3b3b48, 0x48486161, 0x61eeeeee, 0xfefefefd, 0xfdfd0000, 
    0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfbfbfbfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfffffffa, 0xfafaffff, 0xffffffff, 0xfffffff2, 0xf2f2fdfd, 0xfdf9f9f9, 0xffffffff, 0xfffffafa, 0xfaffffff, 0xfefefef7, 0xf7f7ecec, 0xecc7c7c7, 0x97979747, 0x47470000, 0x00454545, 0x5a5a5a05, 0x05058181, 0x81ffffff, 0xfdfdfdfc, 0xfcfc0000, 
    0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xeaeaead4, 0xd4d4b9b9, 0xb9a5a5a5, 0x9797978c, 0x8c8ceded, 0xedffffff, 0xfdfdfdcf, 0xcfcf8989, 0x89a4a4a4, 0x8f8f8f7a, 0x7a7a5353, 0x53212121, 0x02020239, 0x39394e4e, 0x4e4a4a4a, 0x53535300, 0x0000b5b5, 0xb5fdfdfd, 0xfdfdfdfd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfafa, 0xfafdfdfd, 0xfefefeff, 0xfffff7f7, 0xf7ffffff, 0xfbfbfbf9, 0xf9f9ffff, 0xffffffff, 0xfafafae6, 0xe6e6b6b6, 0xb6808080, 0x5454542a, 0x2a2a0e0e, 0x0e2e2e2e, 0x000000b0, 0xb0b0fbfb, 0xfbf9f9f9, 0xffffffa5, 0xa5a50000, 0x00343434, 0x0606061c, 0x1c1c3333, 0x33454545, 0x4f4f4f4f, 0x4f4f4040, 0x40484848, 0x48484822, 0x2222dede, 0xdeffffff, 0xfbfbfbfe, 0xfefe0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfffffff7, 0xf7f7fdfd, 0xfdfefefe, 0xfafafafd, 0xfdfdffff, 0xfff9f9f9, 0xffffffff, 0xfffff7f7, 0xf7d2d2d2, 0x89898920, 0x20200101, 0x01232323, 0x3939394a, 0x4a4a4d4d, 0x4d3d3d3d, 0x5c5c5ced, 0xededffff, 0xffffffff, 0xededed63, 0x63633d3d, 0x3d505050, 0x4747474f, 0x4f4f4f4f, 0x4f494949, 0x44444442, 0x42424747, 0x47505050, 0x02020296, 0x9696fefe, 0xfefdfdfd, 0xfbfbfbfe, 0xfefe0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfbfbfbff, 0xfffffefe, 0xfefdfdfd, 0xfdfdfdfc, 0xfcfcfcfc, 0xfcfafafa, 0xfbfbfbe0, 0xe0e09595, 0x954a4a4a, 0x56565663, 0x63635252, 0x52303030, 0x04040400, 0x00003c3c, 0x3c3c3c3c, 0x5e5e5eea, 0xeaeafafa, 0xfae9e9e9, 0x87878713, 0x13135252, 0x52444444, 0x43434345, 0x45454343, 0x43444444, 0x42424245, 0x45454e4e, 0x4e404040, 0x454545dc, 0xdcdcfdfd, 0xfdfefefe, 0xfcfcfcfd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xf8f8f8ff, 0xfffff8f8, 0xf8fbfbfb, 0xfafafafc, 0xfcfcfafa, 0xfaffffff, 0xffffffe6, 0xe6e6f5f5, 0xf5ffffff, 0xfdfdfdf7, 0xf7f7fbfb, 0xfbeaeaea, 0xcccccca5, 0xa5a56565, 0x650c0c0c, 0x00000064, 0x64648b8b, 0x8b4a4a4a, 0x1111114c, 0x4c4c4242, 0x42464646, 0x4b4b4b45, 0x45454242, 0x42484848, 0x41414150, 0x50504444, 0x44000000, 0xbcbcbcff, 0xfffffdfd, 0xfdeaeaea, 0xfdfdfdfd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfffffffb, 0xfbfbf8f8, 0xf8fdfdfd, 0xfbfbfbff, 0xffffffff, 0xfff5f5f5, 0xeaeaeae5, 0xe5e5cbcb, 0xcbbfbfbf, 0xc1c1c1c8, 0xc8c8cfcf, 0xcfe7e7e7, 0xf7f7f7ff, 0xfffffefe, 0xfedbdbdb, 0x89898900, 0x00000303, 0x034d4d4d, 0x55555541, 0x41414848, 0x483f3f3f, 0x46464643, 0x43434444, 0x44444444, 0x58585842, 0x42420202, 0x02b1b1b1, 0xf9f9f9ff, 0xffffadad, 0xada4a4a4, 0xfefefefd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xf7f7f7f6, 0xf6f6ffff, 0xfffcfcfc, 0xfdfdfde5, 0xe5e5b8b8, 0xb88c8c8c, 0x5959592d, 0x2d2d0101, 0x01040404, 0x00000002, 0x02021010, 0x10383838, 0x61616199, 0x9999cdcd, 0xcdfafafa, 0xffffffd9, 0xd9d97f7f, 0x7f000000, 0x4747474b, 0x4b4b4444, 0x44494949, 0x44444448, 0x48484747, 0x47464646, 0x1f1f1f03, 0x0303aaaa, 0xaafcfcfc, 0xffffffbf, 0xbfbf0000, 0x00a2a2a2, 0xfffffffd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfffffffc, 0xfcfcfefe, 0xfee7e7e7, 0xa3a3a34e, 0x4e4e1515, 0x15292929, 0x31313125, 0x25251212, 0x12141414, 0x13131316, 0x16161919, 0x192b2b2b, 0x32323223, 0x23230000, 0x00646464, 0xc0c0c0ff, 0xfffffbfb, 0xfbb1b1b1, 0x0606063c, 0x3c3c4c4c, 0x4c424242, 0x42424245, 0x45454747, 0x47363636, 0x5d5d5dd3, 0xd3d3ffff, 0xfff3f3f3, 0x9999992e, 0x2e2e0101, 0x01a7a7a7, 0xfffffffd, 0xfdfd0000, 
    0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcff, 0xffffb8b8, 0xb84b4b4b, 0x06060645, 0x45452d2d, 0x2d080808, 0x49494976, 0x76769e9e, 0x9ea8a8a8, 0xa8a8a8a5, 0xa5a58d8d, 0x8d6d6d6d, 0x39393903, 0x03034141, 0x413d3d3d, 0x0000006b, 0x6b6be4e4, 0xe4fdfdfd, 0xd1d1d135, 0x35353b3b, 0x3b4e4e4e, 0x42424249, 0x49493737, 0x37686868, 0xdededef3, 0xf3f3c0c0, 0xc0676767, 0x01010154, 0x54540000, 0x00bcbcbc, 0xfffffffd, 0xfdfd0000, 
    0xfafafaff, 0xfffffefe, 0xfef9f9f9, 0xffffffff, 0xfffff7f7, 0xf7fdfdfd, 0xf6f6f689, 0x89890202, 0x02454545, 0x3d3d3d15, 0x15157e7e, 0x7ec4c4c4, 0xeaeaeaf5, 0xf5f5fefe, 0xfeffffff, 0xffffffff, 0xfffffafa, 0xfaf3f3f3, 0xdcdcdcaf, 0xafaf5a5a, 0x5a131313, 0x4949492e, 0x2e2e0303, 0x03c3c3c3, 0xffffffda, 0xdada3c3c, 0x3c3c3c3c, 0x4e4e4e3e, 0x3e3e3f3f, 0x3f555555, 0x76767656, 0x56560000, 0x002f2f2f, 0x4d4d4d4f, 0x4f4f0202, 0x02d4d4d4, 0xfefefefe, 0xfefe0000, 
    0xfffffff8, 0xf8f8f7f7, 0xf7ffffff, 0xfafafaf6, 0xf6f6ffff, 0xfff2f2f2, 0x72727200, 0x00005252, 0x52121212, 0x717171cd, 0xcdcdffff, 0xffffffff, 0xfafafafe, 0xfefeffff, 0xfffcfcfc, 0xfbfbfbfe, 0xfefeffff, 0xfffefefe, 0xfefefeff, 0xfffff0f0, 0xf0b2b2b2, 0x3d3d3d38, 0x38385050, 0x50000000, 0xa9a9a9ff, 0xffffd5d5, 0xd51c1c1c, 0x41414155, 0x55554141, 0x413f3f3f, 0x2626262e, 0x2e2e4a4a, 0x4a464646, 0x4c4c4c31, 0x31316464, 0x64f3f3f3, 0xfefefefd, 0xfdfd0000, 
    0xfdfdfdfa, 0xfafaffff, 0xfffdfdfd, 0xfafafafc, 0xfcfcf6f6, 0xf6727272, 0x0f0f0f4f, 0x4f4f0505, 0x05aaaaaa, 0xf4f4f4fe, 0xfefef5f5, 0xf5ffffff, 0xfcfcfcfc, 0xfcfcfbfb, 0xfbf9f9f9, 0xf9f9f9fb, 0xfbfbfbfb, 0xfbfbfbfb, 0xfcfcfcfd, 0xfdfdfbfb, 0xfbffffff, 0xdedede70, 0x70701a1a, 0x1a535353, 0x020202b0, 0xb0b0ffff, 0xffbcbcbc, 0x0404044d, 0x4d4d4848, 0x48444444, 0x4747474a, 0x4a4a4949, 0x49494949, 0x56565600, 0x0000bdbd, 0xbdffffff, 0xfdfdfdfd, 0xfdfd0000, 
    0xfffffff8, 0xf8f8fbfb, 0xfbf6f6f6, 0xfdfdfdff, 0xffff9090, 0x90010101, 0x5252520f, 0x0f0fbdbd, 0xbdffffff, 0xffffffff, 0xffffffff, 0xfff8f8f8, 0xfbfbfbfa, 0xfafafbfb, 0xfbfdfdfd, 0xfefefefd, 0xfdfdfcfc, 0xfcfbfbfb, 0xfbfbfbfa, 0xfafaffff, 0xfffafafa, 0xfffffff4, 0xf4f47e7e, 0x7e141414, 0x4e4e4e00, 0x0000d4d4, 0xd4ffffff, 0x86868601, 0x01014d4d, 0x4d444444, 0x5353534e, 0x4e4e4c4c, 0x4c454545, 0x03030396, 0x9696f7f7, 0xf7ffffff, 0xfdfdfdfd, 0xfdfd0000, 
    0xfdfdfdfa, 0xfafaffff, 0xfff4f4f4, 0xfefefec1, 0xc1c10000, 0x004f4f4f, 0x060606b6, 0xb6b6ffff, 0xfff8f8f8, 0xfafafafc, 0xfcfcf1f1, 0xf1ffffff, 0xfefefefb, 0xfbfbfafa, 0xfafcfcfc, 0xfdfdfdfd, 0xfdfdfefe, 0xfeffffff, 0xfefefeff, 0xfffff5f5, 0xf5fafafa, 0xfdfdfdff, 0xfffff5f5, 0xf5828282, 0x2f2f2f41, 0x41414a4a, 0x4af2f2f2, 0xeeeeee41, 0x41413e3e, 0x3e535353, 0x2a2a2a01, 0x01010202, 0x02313131, 0x9b9b9bf6, 0xf6f6ffff, 0xfff4f4f4, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcff, 0xfffff4f4, 0xf4ffffff, 0xf7f7f75e, 0x5e5e3737, 0x37232323, 0x979797ff, 0xfffffefe, 0xfefafafa, 0xfefefefa, 0xfafafefe, 0xfefdfdfd, 0xfdfdfdfb, 0xfbfbfafa, 0xfafbfbfb, 0xfbfbfbfb, 0xfbfbfbfb, 0xfbfbfbfb, 0xf9f9f9fe, 0xfefeffff, 0xfff8f8f8, 0xf6f6f6f8, 0xf8f8ffff, 0xffe4e4e4, 0x52525247, 0x47470000, 0x00a2a2a2, 0xffffffab, 0xabab0000, 0x00232323, 0x5f5f5f8e, 0x8e8eabab, 0xabdfdfdf, 0xffffffff, 0xfffffcfc, 0xfcffffff, 0xfcfcfcfd, 0xfdfd0000, 
    0xfdfdfdf9, 0xf9f9fafa, 0xfaffffff, 0xadadad02, 0x02024444, 0x445a5a5a, 0xf2f2f2fe, 0xfefefafa, 0xfafcfcfc, 0xfcfcfcff, 0xfffff9f9, 0xf9fafafa, 0xfcfcfcfd, 0xfdfdfefe, 0xfefefefe, 0xfffffffe, 0xfefefcfc, 0xfcfafafa, 0xfdfdfdf7, 0xf7f7fafa, 0xfafcfcfc, 0xfffffffc, 0xfcfcf8f8, 0xf8ffffff, 0xcdcdcd0e, 0x0e0e4c4c, 0x4c2c2c2c, 0xe7e7e7f5, 0xf5f51919, 0x19a0a0a0, 0xf8f8f8f7, 0xf7f7ffff, 0xfffefefe, 0xf6f6f6ff, 0xfffffafa, 0xfafcfcfc, 0xfdfdfdfd, 0xfdfd0000, 
    0xfdfdfdf9, 0xf9f9ffff, 0xffededed, 0x6d6d6d37, 0x37370000, 0x00c4c4c4, 0xfefefeff, 0xffffeeee, 0xee717171, 0xb1b1b1fe, 0xfefefefe, 0xfefcfcfc, 0xfbfbfbfd, 0xfdfdfcfc, 0xfcfbfbfb, 0xfafafafc, 0xfcfcfdfd, 0xfdfcfcfc, 0xf8f8f8ff, 0xfffffdfd, 0xfde8e8e8, 0xeaeaeafb, 0xfbfbfefe, 0xfefcfcfc, 0xfdfdfd84, 0x84843131, 0x31030303, 0xacacacfe, 0xfefe9999, 0x99ebebeb, 0xfcfcfcff, 0xfffff8f8, 0xf8fbfbfb, 0xfffffffb, 0xfbfbfefe, 0xfefcfcfc, 0xfdfdfdfd, 0xfdfd0000, 
    0xfbfbfbfd, 0xfdfdffff, 0xffcacaca, 0x29292937, 0x37376464, 0x64f5f5f5, 0xfbfbfbfc, 0xfcfcffff, 0xffa6a6a6, 0x00000090, 0x9090f3f3, 0xf3fefefe, 0xfbfbfbfa, 0xfafafbfb, 0xfbfbfbfb, 0xfffffffc, 0xfcfcfbfb, 0xfbfbfbfb, 0xfcfcfcff, 0xffffb8b8, 0xb8494949, 0x575757dc, 0xdcdcffff, 0xfff8f8f8, 0xfdfdfdd3, 0xd3d31010, 0x103c3c3c, 0x5e5e5eff, 0xffffcccc, 0xccd9d9d9, 0xfffffff9, 0xf9f9ffff, 0xfff3f3f3, 0xf0f0f0ff, 0xfffff7f7, 0xf7fdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffffc, 0xfcfcffff, 0xffa8a8a8, 0x1a1a1a0a, 0x0a0aafaf, 0xafffffff, 0xfffffff8, 0xf8f8f9f9, 0xf9fbfbfb, 0xcfcfcf00, 0x00005252, 0x52e4e4e4, 0xfdfdfdff, 0xfffffdfd, 0xfdf9f9f9, 0xfdfdfdfa, 0xfafafbfb, 0xfbfdfdfd, 0xf4f4f489, 0x89890000, 0x00525252, 0x020202ba, 0xbabafbfb, 0xfbfcfcfc, 0xfffffff5, 0xf5f56666, 0x66353535, 0x1d1d1ddc, 0xdcdcebeb, 0xeb747474, 0xdadadaf9, 0xf9f9d7d7, 0xd78c8c8c, 0xe0e0e0ff, 0xfffffefe, 0xfef8f8f8, 0xfcfcfcfc, 0xfcfc0000, 
    0xfbfbfbfd, 0xfdfdf5f5, 0xf5808080, 0x25252526, 0x2626d8d8, 0xd8fefefe, 0xf8f8f8fa, 0xfafaffff, 0xfffdfdfd, 0xfdfdfde0, 0xe0e05959, 0x59000000, 0xc2c2c2ff, 0xffffffff, 0xfffbfbfb, 0xfbfbfbfc, 0xfcfcffff, 0xffd3d3d3, 0x4c4c4c1d, 0x1d1d4f4f, 0x4f010101, 0x777777ec, 0xececffff, 0xfffcfcfc, 0xfbfbfbff, 0xffffa1a1, 0xa1202020, 0x050505b9, 0xb9b9ffff, 0xff686868, 0x00000063, 0x63630000, 0x00717171, 0xf8f8f8fb, 0xfbfbfbfb, 0xfbffffff, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcff, 0xffffe9e9, 0xe9595959, 0x2a2a2a5e, 0x5e5ee5e5, 0xe5ffffff, 0xfffffffc, 0xfcfcf6f6, 0xf6ffffff, 0xf8f8f8ff, 0xfffff8f8, 0xf8919191, 0x07070798, 0x9898fafa, 0xfafdfdfd, 0xfffffff5, 0xf5f5a1a1, 0xa1010101, 0x47474740, 0x40401717, 0x17a8a8a8, 0xfdfdfdff, 0xfffff8f8, 0xf8fafafa, 0xfdfdfdfd, 0xfdfdbdbd, 0xbd1a1a1a, 0x1515159e, 0x9e9effff, 0xff999999, 0x1212124c, 0x4c4c0101, 0x01b5b5b5, 0xffffffff, 0xfffff3f3, 0xf3fcfcfc, 0xfcfcfcfc, 0xfcfc0000, 
    0xfafafaff, 0xffffe4e4, 0xe4464646, 0x1f1f1f6d, 0x6d6df8f8, 0xf8ffffff, 0xf5f5f5ff, 0xfffff9f9, 0xf9ffffff, 0xfffffff4, 0xf4f4ffff, 0xffffffff, 0xb3b3b301, 0x01017979, 0x79d2d2d2, 0xb2b2b270, 0x70700000, 0x004f4f4f, 0x0707075c, 0x5c5ccfcf, 0xcffefefe, 0xf7f7f7fb, 0xfbfbffff, 0xfffcfcfc, 0xfdfdfdff, 0xffffd7d7, 0xd72f2f2f, 0x18181889, 0x8989fdfd, 0xfda9a9a9, 0x00000049, 0x49493838, 0x38d4d4d4, 0xfffffffa, 0xfafafcfc, 0xfcfefefe, 0xfcfcfcfc, 0xfcfc0000, 
    0xfafafafd, 0xfdfddcdc, 0xdc404040, 0x1919197e, 0x7e7efafa, 0xfafcfcfc, 0xfefefef9, 0xf9f9ffff, 0xfff9f9f9, 0xfafafaff, 0xfffff4f4, 0xf4fdfdfd, 0xffffffdb, 0xdbdb4f4f, 0x4f000000, 0x08080821, 0x21215656, 0x56030303, 0x8f8f8fe5, 0xe5e5ffff, 0xfffcfcfc, 0xfdfdfdfc, 0xfcfcf8f8, 0xf8fbfbfb, 0xf8f8f8ff, 0xffffdcdc, 0xdc454545, 0x1a1a1a78, 0x7878ffff, 0xffb2b2b2, 0x0a0a0a24, 0x24248383, 0x83ffffff, 0xf6f6f6fa, 0xfafafdfd, 0xfdfcfcfc, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffffd, 0xfdfdd8d8, 0xd83b3b3b, 0x16161688, 0x8888f2f2, 0xf2ffffff, 0xfbfbfbfc, 0xfcfcfdfd, 0xfdfcfcfc, 0xfffffffa, 0xfafaffff, 0xfff7f7f7, 0xfdfdfdfd, 0xfdfda3a3, 0xa32a2a2a, 0x5f5f5f5b, 0x5b5b3c3c, 0x3cb4b4b4, 0xfbfbfbff, 0xfffff9f9, 0xf9fefefe, 0xfafafaff, 0xfffff7f7, 0xf7ffffff, 0xfcfcfcff, 0xffffd6d6, 0xd6414141, 0x1f1f1f76, 0x7676fefe, 0xfeb8b8b8, 0x00000033, 0x3333c7c7, 0xc7fefefe, 0xfefefefe, 0xfefefbfb, 0xfbfcfcfc, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcfb, 0xfbfbe4e4, 0xe4474747, 0x1c1c1c75, 0x7575f6f6, 0xf6ffffff, 0xfcfcfcfd, 0xfdfdfdfd, 0xfdfafafa, 0xfefefefa, 0xfafaffff, 0xfffcfcfc, 0xfafafaff, 0xffffb3b3, 0xb3000000, 0x5c5c5c00, 0x00007b7b, 0x7bffffff, 0xfffffff6, 0xf6f6ffff, 0xfffdfdfd, 0xf9f9f9fc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfafafaff, 0xffffdada, 0xda2f2f2f, 0x1a1a1a86, 0x8686ffff, 0xffb0b0b0, 0x00000085, 0x8585f9f9, 0xf9fcfcfc, 0xfafafafb, 0xfbfbfefe, 0xfefcfcfc, 0xfcfcfcfc, 0xfcfc0000, 
    0xf9f9f9ff, 0xffffe9e9, 0xe9595959, 0x2424245f, 0x5f5fe9e9, 0xe9ffffff, 0xfbfbfbfe, 0xfefef9f9, 0xf9fdfdfd, 0xfcfcfcff, 0xfffffcfc, 0xfcfdfdfd, 0xfbfbfbfd, 0xfdfdf1f1, 0xf1969696, 0x3b3b3b74, 0x7474e3e3, 0xe3ffffff, 0xfcfcfcf9, 0xf9f9fcfc, 0xfcffffff, 0xf9f9f9fd, 0xfdfdf9f9, 0xf9fafafa, 0xfffffffb, 0xfbfbc3c3, 0xc3242424, 0x14141495, 0x9595ffff, 0xff9c9c9c, 0x020202d5, 0xd5d5fefe, 0xfefdfdfd, 0xfafafaf9, 0xf9f9fefe, 0xfef9f9f9, 0xfcfcfcfc, 0xfcfc0000, 
    0xfdfdfdfe, 0xfefef2f2, 0xf2777777, 0x28282830, 0x3030e0e0, 0xe0ffffff, 0xfcfcfcff, 0xfffffefe, 0xfefefefe, 0xfffffffd, 0xfdfdf9f9, 0xf9ffffff, 0xfbfbfbfd, 0xfdfdffff, 0xfffdfdfd, 0xeeeeeef5, 0xf5f5ffff, 0xfffbfbfb, 0xfbfbfbff, 0xfffffafa, 0xfaf9f9f9, 0xf9f9f9ff, 0xfffffefe, 0xfeffffff, 0xfafafaff, 0xffffa8a8, 0xa80a0a0a, 0x040404b9, 0xb9b9fefe, 0xfe606060, 0x9a9a9afe, 0xfefeffff, 0xfffbfbfb, 0xfdfdfdfe, 0xfefefbfb, 0xfbfbfbfb, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffff6, 0xf6f6ffff, 0xff999999, 0x24242404, 0x0404b4b4, 0xb4fcfcfc, 0xfbfbfbfb, 0xfbfbfcfc, 0xfcfafafa, 0xfdfdfdfd, 0xfdfdfafa, 0xfafdfdfd, 0xfbfbfbfc, 0xfcfcf9f9, 0xf9fbfbfb, 0xfffffffe, 0xfefefafa, 0xfafdfdfd, 0xf9f9f9ff, 0xfffffafa, 0xfafefefe, 0xfdfdfdf9, 0xf9f9f8f8, 0xf8f9f9f9, 0xfbfbfbf7, 0xf7f77373, 0x73373737, 0x090909e0, 0xe0e0f2f2, 0xf2717171, 0xf8f8f8ff, 0xfffff7f7, 0xf7f8f8f8, 0xfbfbfbfe, 0xfefef8f8, 0xf8ffffff, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcfe, 0xfefef9f9, 0xf9cccccc, 0x20202033, 0x33337575, 0x75fcfcfc, 0xfffffffb, 0xfbfbffff, 0xfffdfdfd, 0xfcfcfcfd, 0xfdfdfdfd, 0xfdf9f9f9, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfbfbfb, 0xf9f9f9fb, 0xfbfbfdfd, 0xfdfbfbfb, 0xfffffff9, 0xf9f9fafa, 0xfafefefe, 0xfbfbfbfd, 0xfdfdffff, 0xfffcfcfc, 0xffffffd5, 0xd5d52626, 0x26343434, 0x606060f3, 0xf3f3d4d4, 0xd4e3e3e3, 0xfffffff7, 0xf7f7fdfd, 0xfdfdfdfd, 0xfcfcfcfe, 0xfefef8f8, 0xf8fdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xf8f8f8fd, 0xfdfdffff, 0xffe9e9e9, 0x5e5e5e3d, 0x3d3d0202, 0x02cecece, 0xfffffffa, 0xfafaf9f9, 0xf9ffffff, 0xfcfcfcfa, 0xfafaffff, 0xfffdfdfd, 0xfffffff7, 0xf7f7fafa, 0xfaffffff, 0xfcfcfcfc, 0xfcfcffff, 0xfffcfcfc, 0xfefefefb, 0xfbfbfefe, 0xfef8f8f8, 0xfbfbfbff, 0xfffffbfb, 0xfbf9f9f9, 0xfbfbfb94, 0x94942929, 0x291c1c1c, 0xa1a1a1fb, 0xfbfbfbfb, 0xfbfbfbfb, 0xfcfcfcfa, 0xfafaffff, 0xfffdfdfd, 0xfdfdfdff, 0xfffffdfd, 0xfdfafafa, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffff7, 0xf7f7fbfb, 0xfbfefefe, 0xacacac09, 0x09093e3e, 0x3e6e6e6e, 0xf9f9f9ff, 0xfffff5f5, 0xf5fdfdfd, 0xfdfdfdfb, 0xfbfbffff, 0xfffdfdfd, 0xfcfcfcfd, 0xfdfdfefe, 0xfefefefe, 0xfbfbfbf6, 0xf6f6f7f7, 0xf7fcfcfc, 0xfafafafe, 0xfefeffff, 0xfffafafa, 0xfffffff9, 0xf9f9f7f7, 0xf7ffffff, 0xdfdfdf15, 0x15154e4e, 0x4e363636, 0xdadadaff, 0xfffff8f8, 0xf8fafafa, 0xf8f8f8fe, 0xfefefcfc, 0xfcf9f9f9, 0xfcfcfcfc, 0xfcfcfefe, 0xfefdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfafafafc, 0xfcfcfbfb, 0xfbffffff, 0xe3e3e34f, 0x4f4f4343, 0x43171717, 0xa9a9a9fe, 0xfefefdfd, 0xfdffffff, 0xfefefefe, 0xfefefbfb, 0xfbf9f9f9, 0xfdfdfdff, 0xfffffcfc, 0xfcf8f8f8, 0xfafafafe, 0xfefeffff, 0xfffefefe, 0xfefefefc, 0xfcfcfafa, 0xfafcfcfc, 0xfcfcfcfa, 0xfafaffff, 0xffefefef, 0x61616141, 0x41410a0a, 0x0a919191, 0xfffffffc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfcfcfcff, 0xfffffefe, 0xfeffffff, 0xfcfcfcfa, 0xfafafbfb, 0xfbfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffff7, 0xf7f7ffff, 0xfffbfbfb, 0xfdfdfdb6, 0xb6b60101, 0x01505050, 0x1c1c1cce, 0xcecefafa, 0xfafcfcfc, 0xf9f9f9fe, 0xfefefbfb, 0xfbfefefe, 0xfdfdfdf8, 0xf8f8fcfc, 0xfcffffff, 0xfbfbfbfb, 0xfbfbfefe, 0xfefafafa, 0xfdfdfdfb, 0xfbfbfafa, 0xfaffffff, 0xf7f7f7ff, 0xfffffcfc, 0xfc939393, 0x21212144, 0x44444949, 0x49e3e3e3, 0xfffffffc, 0xfcfcfafa, 0xfafcfcfc, 0xfbfbfbfb, 0xfbfbf9f9, 0xf9fefefe, 0xfcfcfcfe, 0xfefefcfc, 0xfcfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcfe, 0xfefefcfc, 0xfcfcfcfc, 0xfdfdfdf8, 0xf8f88484, 0x84151515, 0x46464634, 0x3434d0d0, 0xd0fdfdfd, 0xfcfcfcf9, 0xf9f9fcfc, 0xfcfbfbfb, 0xfdfdfdfb, 0xfbfbffff, 0xfff9f9f9, 0xfafafaff, 0xfffffbfb, 0xfbfdfdfd, 0xfcfcfcfa, 0xfafafdfd, 0xfdf9f9f9, 0xfefefeff, 0xffff9595, 0x95030303, 0x53535300, 0x0000c2c2, 0xc2ffffff, 0xfbfbfbfd, 0xfdfdfcfc, 0xfcfbfbfb, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfd0000, 
    0xfdfdfdfc, 0xfcfcf9f9, 0xf9ffffff, 0xf9f9f9ff, 0xffffeeee, 0xee5c5c5c, 0x30303043, 0x43432a2a, 0x2abababa, 0xffffffff, 0xfffffbfb, 0xfbfefefe, 0xfffffff8, 0xf8f8f9f9, 0xf9fdfdfd, 0xfffffffd, 0xfdfdf9f9, 0xf9fcfcfc, 0xf8f8f8ff, 0xfffffbfb, 0xfbfefefe, 0xf0f0f086, 0x86860b0b, 0x0b505050, 0x010101a7, 0xa7a7ffff, 0xfff9f9f9, 0xfcfcfcf5, 0xf5f5f9f9, 0xf9ffffff, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfd, 0xfdfd0000, 
    0xfcfcfcff, 0xfffffafa, 0xfaf8f8f8, 0xfffffff5, 0xf5f5ffff, 0xffe0e0e0, 0x5555551d, 0x1d1d5454, 0x54070707, 0x888888e3, 0xe3e3fefe, 0xfefcfcfc, 0xfdfdfdff, 0xfffffdfd, 0xfdfbfbfb, 0xfbfbfbfc, 0xfcfcffff, 0xfffbfbfb, 0xfffffffe, 0xfefef8f8, 0xf8d0d0d0, 0x57575727, 0x27274c4c, 0x4c000000, 0x949494ff, 0xfffff9f9, 0xf9fdfdfd, 0xfefefeff, 0xffffffff, 0xfff3f3f3, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfbfbfbfc, 0xfcfcffff, 0xfffcfcfc, 0xfdfdfdfe, 0xfefef6f6, 0xf6ffffff, 0xe9e9e973, 0x73730000, 0x004b4b4b, 0x35353530, 0x3030a1a1, 0xa1d8d8d8, 0xf5f5f5fd, 0xfdfdfdfd, 0xfdffffff, 0xfffffffa, 0xfafaffff, 0xfffdfdfd, 0xe8e8e8c7, 0xc7c77979, 0x79090909, 0x4646463c, 0x3c3c0000, 0x00a8a8a8, 0xfffffffe, 0xfefef9f9, 0xf9ffffff, 0xf7f7f7f8, 0xf8f8fcfc, 0xfcffffff, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfcfcfcfc, 0xfcfcf9f9, 0xf9ffffff, 0xf7f7f7ff, 0xfffffdfd, 0xfdf5f5f5, 0xf8f8f8ff, 0xffffa3a3, 0xa3292929, 0x2828284d, 0x4d4d1919, 0x192a2a2a, 0x69696995, 0x9595b2b2, 0xb2bbbbbb, 0xbfbfbfbf, 0xbfbfadad, 0xad878787, 0x5454540c, 0x0c0c3737, 0x37454545, 0x00000058, 0x5858caca, 0xcaffffff, 0xfbfbfbfb, 0xfbfbfbfb, 0xfbf7f7f7, 0xfffffffd, 0xfdfdfcfc, 0xfcfefefe, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfffffffe, 0xfefefbfb, 0xfbfbfbfb, 0xfafafaf9, 0xf9f9fcfc, 0xfcffffff, 0xfefefef9, 0xf9f9ffff, 0xffd4d4d4, 0x8383832e, 0x2e2e1d1d, 0x1d323232, 0x2c2c2c19, 0x19190e0e, 0x0e181818, 0x1919190e, 0x0e0e1010, 0x101a1a1a, 0x3333332f, 0x2f2f1616, 0x164c4c4c, 0xa5a5a5f2, 0xf2f2fdfd, 0xfdf6f6f6, 0xfbfbfbfe, 0xfefefefe, 0xfefcfcfc, 0xfffffff9, 0xf9f9fefe, 0xfefefefe, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfd, 0xfdfd0000, 
    0xfffffff7, 0xf7f7ffff, 0xfffbfbfb, 0xfafafaff, 0xffffffff, 0xfff6f6f6, 0xf9f9f9fd, 0xfdfdf9f9, 0xf9ffffff, 0xf9f9f9d4, 0xd4d4a1a1, 0xa16e6e6e, 0x4040401f, 0x1f1f0d0d, 0x0d0f0f0f, 0x1111110d, 0x0d0d1717, 0x172f2f2f, 0x4c4c4c7f, 0x7f7fbaba, 0xbae6e6e6, 0xffffffff, 0xfffffefe, 0xfefcfcfc, 0xfafafafe, 0xfefeffff, 0xfffafafa, 0xfdfdfdfd, 0xfdfdf9f9, 0xf9fdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfd, 0xfdfd0000, 
    0xfbfbfbfe, 0xfefefafa, 0xfafdfdfd, 0xfefefef7, 0xf7f7f9f9, 0xf9ffffff, 0xfefefef9, 0xf9f9fefe, 0xfef7f7f7, 0xfdfdfdff, 0xffffffff, 0xffeeeeee, 0xdbdbdbc4, 0xc4c4b6b6, 0xb6aaaaaa, 0xa7a7a7ae, 0xaeaeb9b9, 0xb9cfcfcf, 0xe4e4e4f8, 0xf8f8ffff, 0xffffffff, 0xf8f8f8fa, 0xfafaf8f8, 0xf8ffffff, 0xfdfdfdfa, 0xfafafefe, 0xfefdfdfd, 0xfcfcfcfb, 0xfbfbffff, 0xfff9f9f9, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfdfdfdfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfdfdfdfc, 0xfcfcfcfc, 0xfcfbfbfb, 0xfbfbfbfb, 0xfbfbfdfd, 0xfdfdfdfd, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffe, 0xfefefdfd, 0xfdfcfcfc, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfdfdfd, 0xfcfcfcfc, 0xfcfc0000, 
    0xfdfdfdfd, 0xfdfdfdfd, 0xfdfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfdfdfdfd, 0xfdfdfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfefefefe, 0xfefefefe, 0xfefefefe, 0xfefefefd, 0xfdfdfdfd, 0xfdfcfcfc, 0xfcfcfcfc, 0xfcfcfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfc, 0xfcfcfcfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfdfdfd, 0xfdfd0000
};
const tImage Rapido = { image_data_Rapido, 50, 50,
    32 };
