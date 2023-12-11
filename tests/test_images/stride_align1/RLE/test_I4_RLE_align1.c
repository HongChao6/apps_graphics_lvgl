
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#elif defined(LV_BUILD_TEST)
#include "../lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DUST
#define LV_ATTRIBUTE_IMG_DUST
#endif

static const
LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DUST
uint8_t test_I4_RLE_align1_map[] = {

    0x01,0x00,0x00,0x00,0xd8,0x09,0x00,0x00,0x81,0x0b,0x00,0x00,0xc1,0x4c,0x70,0x47,
    0x00,0x00,0x00,0x00,0xfe,0xff,0x00,0x00,0xfc,0x00,0xff,0xf7,0xf4,0x00,0xff,0xff,
    0x65,0x00,0xff,0xff,0xa9,0x41,0xa5,0xa5,0x30,0x00,0x00,0x00,0x75,0x00,0x00,0x00,
    0xc2,0xff,0x00,0x00,0x97,0x06,0xff,0x08,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0x88,
    0xff,0xcc,0xff,0x00,0xff,0x6e,0xff,0x00,0xff,0x00,0x00,0xff,0xff,0xaa,0x22,0xaa,
    0x8f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,
    0x21,0x00,0x8f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xa0,0x00,0x21,0x00,0xff,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0xff,0xff,0xff,0xff,
    0xff,0xff,0xff,0xff,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x00,0x00,0x69,
    0x22,0x22,0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x00,0x09,0x22,
    0x22,0x22,0x22,0x90,0xff,0x00,0x00,0x00,0x92,0x29,0x00,0x00,0x0f,0x0f,0xff,0xff,
    0xff,0xff,0xff,0xff,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x00,0x92,
    0x22,0x22,0x22,0x22,0x29,0x00,0x00,0x00,0x22,0x22,0x00,0x00,0x0f,0x0f,0x00,0x00,
    0x00,0x00,0x00,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x09,0x22,
    0x22,0x22,0x22,0x22,0x22,0x90,0x00,0x00,0x22,0x22,0x00,0x00,0x0f,0x0f,0x0f,0xff,
    0xff,0xff,0xff,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xa0,0xff,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x62,
    0x22,0x22,0x22,0x22,0x22,0x22,0x26,0x00,0x00,0x92,0x29,0x00,0x00,0x0f,0x0f,0x0f,
    0x00,0x00,0x00,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x92,
    0x22,0x22,0x22,0x22,0x22,0x22,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x0f,0x0f,
    0x0f,0xff,0xff,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x01,0x11,0x11,0x11,0x1b,0xbb,0xbb,0xbb,0xb0,0x00,0x22,
    0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x0f,0x0f,
    0x0f,0x00,0x0f,0x0f,0xff,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,0x10,0x00,
    0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x06,0x92,0x29,0x60,0x00,0x0f,0x0f,
    0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,0x10,0x00,
    0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x62,0x22,0x22,0x26,0x00,0x0f,0x0f,
    0x0f,0x0f,0x00,0x0f,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,0x10,0x00,
    0x22,0x22,0x22,0x22,0xff,0x22,0x22,0x22,0x22,0x00,0x92,0x22,0x22,0x29,0x00,0x0f,
    0x0f,0x0f,0x0f,0xff,0xff,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,0x10,
    0x00,0x92,0x22,0x22,0x22,0x22,0x22,0x22,0x29,0x00,0x22,0x22,0x22,0x22,0x00,0x0f,
    0x0f,0x0f,0x00,0x00,0x00,0x0f,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,0x10,
    0x00,0x62,0x22,0x22,0x22,0x22,0x22,0x22,0x26,0x00,0x22,0x22,0x22,0x22,0x00,0x0f,
    0x0f,0x0f,0xff,0xff,0xff,0xff,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xff,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,
    0x10,0x00,0x09,0x22,0x22,0x22,0x22,0x22,0x22,0x90,0x00,0x92,0x22,0x22,0x29,0x00,
    0x0f,0x0f,0x00,0x00,0x00,0x00,0x00,0x0f,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,
    0x10,0x00,0x00,0x92,0x22,0x22,0x22,0x22,0x29,0x00,0x00,0x62,0x22,0x22,0x26,0x00,
    0x0f,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0b,0xbb,0xbb,0xbb,0xb1,0x11,0x11,0x11,
    0x10,0x00,0x00,0x69,0x22,0x22,0x22,0x22,0x90,0x00,0x00,0x06,0x92,0x29,0x60,0x00,
    0x0f,0x00,0x00,0x00,0xc5,0x00,0x00,0x00,0x00,0x0f,0x00,0xa0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x69,0x22,0x22,0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x0f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xa0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x21,0x00,0x8f,0xa0,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x21,0x00,0x99,0xa0,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,
    0x06,0x66,0x00,0x00,0x00,0x00,0x01,0x11,0x16,0x11,0x97,0x00,0xa0,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x06,0x78,0x11,0x11,0x18,
    0x70,0x00,0x1a,0x00,0x96,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x00,0x81,0x11,0x11,0x11,0x11,0x18,0x00,0x1a,0x00,0x97,0xa0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x11,0x11,0x11,
    0x11,0x11,0x11,0x80,0x00,0x19,0x00,0x97,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x11,0x11,0x60,0x06,0x81,0x11,0x16,0x00,0x19,
    0x00,0x9f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,
    0x00,0x81,0x18,0x00,0x00,0x71,0x11,0x17,0x00,0x00,0x00,0x00,0x07,0x88,0x18,0x86,
    0x00,0x11,0x00,0xff,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xa0,0x00,0x88,0x87,0x00,0x00,0x01,0x11,0x17,0x00,0x00,0x00,0x07,0x11,0x11,
    0x11,0x11,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x01,0x11,0x17,0x00,0x00,0x00,0x07,0x11,0x17,
    0x78,0x11,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0xa0,0x00,0x00,0x78,0x11,0x11,0x11,0x11,0x17,0x00,0x00,0x00,0x07,0x11,0x60,
    0x00,0x11,0x17,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,
    0x00,0x10,0x00,0x10,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x00,0x68,0x11,0x11,0x11,0x11,0x11,0x17,0x00,0x00,0x00,0x06,0x88,
    0x00,0x00,0x81,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0x00,0x11,0x11,0x11,0x88,0x81,0x11,0x17,0x00,0x00,0x00,0x00,0x00,
    0x77,0x77,0x11,0x18,0x00,0x00,0x00,0x00,0x07,0x77,0x60,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xa0,0xff,0x07,0x11,0x11,0x70,0x00,0x01,0x11,0x17,0x00,0x00,0x00,0x00,
    0x71,0x11,0x11,0x11,0x18,0x00,0x00,0x00,0x00,0x11,0x11,0x16,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xa0,0x08,0x11,0x18,0x00,0x00,0x01,0x11,0x17,0x00,0x00,0x00,0x07,
    0x11,0x18,0x77,0x11,0x18,0x00,0x00,0x00,0x00,0x17,0x07,0x18,0x00,0x00,0x00,0x01,
    0x01,0x00,0x10,0x00,0x10,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xa0,0x08,0x11,0x18,0x00,0x00,0x61,0x11,0x17,0x00,0x00,0x00,0x01,
    0x11,0x70,0x00,0x81,0x18,0x00,0x00,0x00,0x00,0x67,0x77,0x18,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0xff,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x08,0x11,0x11,0x70,0x67,0x11,0x11,0x17,0x00,0x00,0x00,
    0x61,0x11,0x70,0x00,0x81,0x18,0x00,0x00,0x00,0x00,0x81,0x88,0x18,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x07,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x87,0x00,0x00,
    0x01,0x11,0x87,0x78,0x11,0x18,0x60,0x00,0x00,0x07,0x18,0x06,0x18,0x00,0x00,0x00,
    0x01,0x01,0x00,0x10,0x00,0x10,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0xa0,0x00,0x81,0x11,0x11,0x11,0x88,0x11,0x11,0x17,0x00,0x00,
    0x07,0x11,0x11,0xe1,0x11,0x11,0x11,0x10,0x00,0x00,0x07,0x18,0x78,0x18,0x60,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x07,0x11,0x11,0x17,0x07,0x11,0x11,0x17,0x00,
    0x00,0x00,0x71,0x11,0x17,0x71,0x11,0x10,0x00,0x00,0x00,0x81,0x17,0x11,0x80,0x00,
    0x00,0x01,0x01,0x00,0x10,0x00,0x10,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x06,0x76,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x66,0x00,0x13,0x00,0x8f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x21,0x00,0xff,0xa0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xee,0xee,0xee,0xaa,0xaa,
    0xaa,0xaa,0xcc,0xcc,0xcc,0xc3,0x33,0x33,0x33,0x33,0x33,0x35,0x35,0x55,0x55,0x54,
    0x54,0x44,0x44,0x46,0x46,0x66,0x60,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xdd,0xee,0xea,0xea,0xaa,
    0xaa,0xca,0xca,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x35,0x35,0x55,0x55,0x54,
    0x54,0x44,0x44,0x44,0x64,0x66,0x06,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xde,0xee,0xee,0xee,0xae,0xaa,
    0xaa,0xaa,0xcc,0xcc,0xc3,0xc3,0x33,0x33,0x33,0xff,0x33,0x35,0x35,0x35,0x55,0x55,
    0x45,0x45,0x44,0x44,0x64,0x66,0x40,0x60,0x60,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xdd,0xee,0xea,0xea,
    0xaa,0xaa,0xca,0xca,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x53,0x53,0x55,0x55,
    0x54,0x54,0x44,0x44,0x44,0x64,0x66,0x06,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xee,0xee,0xee,0xaa,
    0xaa,0xaa,0xaa,0xcc,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x35,0x35,0x55,0x55,
    0x54,0x54,0x44,0x44,0x64,0x64,0x04,0x06,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0xff,0x0d,0xdd,0xdd,0xed,0xee,0xee,
    0xae,0xaa,0xaa,0xca,0xca,0xcc,0xcc,0xc3,0x33,0x33,0x33,0x33,0x33,0x53,0x55,0x55,
    0x54,0x55,0x45,0x44,0x44,0x44,0x64,0x66,0x60,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xee,0xee,0xea,
    0xea,0xaa,0xaa,0xaa,0xcc,0xcc,0xc3,0xc3,0x33,0x33,0x33,0x33,0x33,0x35,0x35,0x35,
    0x55,0x54,0x44,0x44,0x44,0x64,0x64,0x06,0x06,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xdd,0xee,0xee,
    0xaa,0xaa,0xaa,0xca,0xca,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x35,0x35,0x35,0x55,
    0x55,0x45,0x55,0x44,0x44,0x46,0x46,0x46,0x06,0xff,0x00,0x00,0x00,0xa0,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xde,0xee,0xee,
    0xea,0xea,0xaa,0xaa,0xaa,0xcc,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x35,0x35,
    0x55,0x55,0x54,0x44,0x44,0x44,0x64,0x64,0x06,0x60,0x00,0x00,0x00,0xa0,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xdd,0xee,
    0xee,0xea,0xaa,0xaa,0xca,0xca,0xcc,0xcc,0xc3,0x33,0x33,0x33,0x33,0x33,0x35,0x35,
    0x55,0x55,0x55,0x45,0x44,0x44,0x44,0x46,0x64,0x60,0x60,0x00,0x00,0xa0,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xee,0xee,
    0xea,0xaa,0xaa,0xaa,0xaa,0xcc,0xcc,0xc3,0xc3,0xff,0x33,0x33,0x33,0x33,0x35,0x35,
    0x53,0x55,0x55,0x45,0x44,0x44,0x44,0x64,0x64,0x06,0x00,0x00,0x00,0x00,0xa0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xed,
    0xee,0xee,0xae,0xaa,0xaa,0xca,0xca,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x53,
    0x35,0x55,0x55,0x55,0x45,0x44,0x44,0x46,0x46,0x46,0x66,0x00,0x00,0x00,0xa0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x0d,0xdd,0xdd,0xee,
    0xee,0xea,0xea,0xaa,0xaa,0xaa,0xcc,0xcc,0xcc,0x3c,0x33,0x33,0x33,0x33,0x33,0x35,
    0x55,0x55,0x55,0x45,0x44,0x44,0x44,0x64,0x64,0x06,0x00,0x60,0x00,0x00,0xa0,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb4,0x00,0x00,0xa0,0x0d,0xdd,0xdd,
    0xde,0xee,0xee,0xaa,0xaa,0xaa,0xaa,0xac,0xcc,0xcc,0xc3,0x33,0x33,0x33,0x33,0x33,
    0x33,0x35,0x55,0x55,0x55,0x45,0x44,0x44,0x46,0x46,0x66,0x66,0x00,0x00,0x00,0xa0,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x21,0x00,
    0x8f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,
    0x21,0x00,0x8f,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0xa0,0x00,0x21,0x00,0x8e,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0xaa,0x22,0xaa,0x8e,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,

};

const lv_img_dsc_t test_I4_RLE_align1 = {
  .header.cf = LV_COLOR_FORMAT_I4,
  .header.flags = 0 | LV_IMAGE_FLAGS_COMPRESSED,
  .header.w = 71,
  .header.h = 60,
  .header.stride = 48,
  .data_size = 2532,
  .data = test_I4_RLE_align1_map,
};

