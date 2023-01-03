#ifndef VER_LINE_H
#define VER_LINE_H
#include <types.h>
uint8_t ver_width = 15;
uint8_t ver_height = 34;
uint8_t ver_bitmap[34 * 15 * 3] = {0xff,0xfa,0xff,0xff,0xfe,0xff,0xfd,0xff,0xfc,0xf6,0xfd,0xf6,0xfd,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xfd,0xff,0xfe,0xfa,0xff,0xff,0xfb,0xfe,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,0xfc,0xfe,0xfb,0xff,0xfc,0xfb,0xff,0xfb,0xfb,0xfe,0xfc,0xff,0xfe,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfe,0xff,0xff,0xfb,0xfd,0xff,0xfe,0xfb,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xfd,0xff,0xf7,0xfd,0xf8,0xfa,0xff,0xfc,0xf9,0xfe,0xfd,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfd,0xfc,0xff,0xff,0xfb,0xfd,0xff,0xfe,0xfb,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xff,0xfe,0xf7,0xfe,0xff,0xfe,0xff,0xfa,0xff,0xfe,0xf5,0xfe,0xfb,0xfa,0xff,0xff,0xfe,0xfd,0xff,0xff,0xfd,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfb,0xfd,0xff,0xfe,0xfb,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xff,0xff,0xfd,0xff,0xfd,0xff,0xff,0xf5,0xfe,0xfb,0xf4,0xff,0xff,0xf5,0xfc,0xff,0xfd,0xf9,0xfe,0xff,0xfd,0xfd,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xff,0xfa,0xf7,0xff,0xfb,0xff,0xff,0xf4,0xff,0xff,0xde,0xec,0xeb,0x75,0x7e,0x82,0x75,0x71,0x76,0xc3,0xb7,0xb5,0xff,0xff,0xf8,0xff,0xff,0xfb,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfd,0xff,0xff,0xfd,0xfc,0xff,0xfa,0xff,0xff,0xf2,0xff,0xfe,0xda,0xeb,0xee,0x53,0x5c,0x65,0x52,0x4e,0x53,0xb5,0xa6,0xa3,0xff,0xff,0xf7,0xff,0xff,0xfb,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfd,0xff,0xff,0xfc,0xfb,0xff,0xf9,0xfe,0xff,0xf1,0xff,0xff,0xd5,0xe9,0xee,0x53,0x5f,0x69,0x51,0x4d,0x52,0xb6,0xa6,0x9f,0xff,0xff,0xf5,0xff,0xff,0xf9,0xff,0xfe,0xff,0xfd,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xfd,0xff,0xfe,0xfd,0xff,0xff,0xfd,0xfd,0xff,0xf8,0xff,0xff,0xf0,0xff,0xff,0xd4,0xe9,0xf1,0x4f,0x5d,0x69,0x52,0x4e,0x53,0xbb,0xa8,0xa0,0xff,0xff,0xf2,0xff,0xff,0xf9,0xfd,0xfe,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xfd,0xff,0xfe,0xfb,0xff,0xff,0xfd,0xfd,0xff,0xfa,0xff,0xff,0xee,0xff,0xff,0xd0,0xe9,0xf3,0x4c,0x5c,0x6c,0x52,0x4e,0x53,0xbd,0xaa,0x9d,0xff,0xff,0xf1,0xff,0xff,0xf9,0xfb,0xfe,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfb,0xfb,0xff,0xfe,0xfb,0xff,0xff,0xfd,0xfd,0xff,0xfa,0xff,0xff,0xee,0xff,0xff,0xce,0xe8,0xf4,0x4a,0x5c,0x6d,0x52,0x4f,0x51,0xbf,0xaa,0x9b,0xff,0xff,0xee,0xff,0xff,0xf9,0xfa,0xfe,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xff,0xff,0xfb,0xff,0xff,0xff,0xfe,0xff,0xfb,0xff,0xff,0xee,0xff,0xff,0xcd,0xe8,0xf6,0x48,0x5c,0x6e,0x52,0x4f,0x51,0xc1,0xab,0x99,0xff,0xff,0xed,0xff,0xff,0xf9,0xf8,0xfe,0xff,0xfb,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xff,0xff,0xfb,0xff,0xff,0xff,0xfd,0xff,0xfb,0xff,0xff,0xee,0xff,0xff,0xcd,0xe8,0xf6,0x46,0x5c,0x6e,0x52,0x4f,0x51,0xc3,0xab,0x97,0xff,0xff,0xeb,0xff,0xff,0xf9,0xf8,0xfe,0xff,0xfa,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xff,0xff,0xfb,0xfe,0xff,0xff,0xfd,0xff,0xfd,0xff,0xfe,0xee,0xff,0xff,0xcb,0xe8,0xf7,0x44,0x5c,0x70,0x50,0x4f,0x51,0xc3,0xac,0x96,0xff,0xff,0xea,0xff,0xff,0xf9,0xf6,0xfe,0xff,0xfa,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xff,0xff,0xfb,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xfe,0xf0,0xff,0xff,0xcb,0xe8,0xf7,0x44,0x5c,0x70,0x50,0x4f,0x51,0xc3,0xac,0x96,0xff,0xff,0xea,0xff,0xff,0xf9,0xf4,0xfd,0xff,0xf8,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xfe,0xff,0xfb,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xfe,0xf0,0xff,0xff,0xc9,0xe8,0xf7,0x43,0x5c,0x70,0x50,0x4f,0x51,0xc4,0xac,0x94,0xff,0xff,0xe9,0xff,0xff,0xf9,0xf4,0xfd,0xff,0xf8,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfb,0xfe,0xff,0xfd,0xfd,0xff,0xff,0xff,0xfb,0xfa,0xff,0xf9,0xf0,0xff,0xff,0xd4,0xe5,0xfa,0x4d,0x58,0x74,0x50,0x4e,0x54,0xb6,0xaf,0x96,0xff,0xff,0xe9,0xff,0xff,0xf8,0xfb,0xfc,0xff,0xfb,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfa,0xff,0xfb,0xf0,0xff,0xff,0xd2,0xe5,0xfa,0x4d,0x58,0x73,0x50,0x4f,0x53,0xb8,0xae,0x96,0xff,0xff,0xe9,0xff,0xff,0xf8,0xfa,0xfc,0xff,0xfb,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfa,0xff,0xfc,0xee,0xff,0xff,0xd0,0xe5,0xfa,0x4c,0x59,0x73,0x50,0x4f,0x53,0xba,0xae,0x96,0xff,0xff,0xe9,0xff,0xff,0xf8,0xfb,0xfd,0xff,0xfb,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xfa,0xff,0xfc,0xec,0xff,0xff,0xce,0xe6,0xf8,0x4c,0x5a,0x71,0x52,0x4e,0x53,0xbb,0xad,0x97,0xff,0xff,0xea,0xff,0xff,0xf7,0xfb,0xfe,0xff,0xfa,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfd,0xff,0xfa,0xff,0xfe,0xeb,0xff,0xff,0xcb,0xe7,0xf8,0x4a,0x5b,0x70,0x52,0x4e,0x53,0xbf,0xac,0x97,0xff,0xff,0xea,0xff,0xff,0xf7,0xfb,0xfe,0xff,0xfa,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfd,0xff,0xfa,0xff,0xff,0xe9,0xff,0xff,0xc9,0xe8,0xf7,0x48,0x5c,0x6e,0x52,0x4e,0x53,0xc1,0xab,0x99,0xff,0xff,0xeb,0xff,0xff,0xf5,0xfb,0xff,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfb,0xff,0xfa,0xff,0xff,0xe7,0xff,0xff,0xc9,0xe9,0xf6,0x48,0x5c,0x6d,0x54,0x4e,0x53,0xc3,0xaa,0x9a,0xff,0xff,0xeb,0xff,0xff,0xf5,0xfb,0xff,0xff,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfb,0xff,0xfa,0xff,0xff,0xe9,0xff,0xff,0xc9,0xe9,0xf4,0x48,0x5d,0x6c,0x54,0x4e,0x53,0xc3,0xa9,0x9b,0xff,0xff,0xee,0xff,0xff,0xf5,0xfb,0xff,0xfe,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfa,0xfd,0xff,0xea,0xff,0xff,0xcb,0xeb,0xf1,0x48,0x5b,0x68,0x56,0x50,0x55,0xc2,0xa9,0x9f,0xff,0xff,0xef,0xff,0xff,0xf5,0xfb,0xff,0xfe,0xfa,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfb,0xfe,0xff,0xef,0xff,0xff,0xd3,0xed,0xf3,0x4b,0x5c,0x65,0x51,0x4d,0x52,0xbc,0xa6,0xa0,0xff,0xff,0xf2,0xff,0xff,0xf5,0xfb,0xff,0xfc,0xfa,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0xff,0xfb,0xff,0xfc,0xfe,0xff,0xf3,0xff,0xff,0xd4,0xe8,0xed,0x52,0x62,0x69,0x55,0x51,0x56,0xb9,0xa6,0xa1,0xff,0xff,0xf5,0xff,0xff,0xf7,0xfb,0xff,0xfc,0xfb,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfd,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfe,0xff,0xfd,0xff,0xff,0xf8,0xff,0xff,0xe3,0xf0,0xf2,0x93,0x9d,0xa4,0x95,0x94,0x98,0xd6,0xc9,0xc7,0xff,0xff,0xf7,0xff,0xff,0xf8,0xfb,0xff,0xfc,0xfd,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfd,0xff,0xfe,0xfd,0xff,0xfe,0xfd,0xff,0xff,0xfb,0xfb,0xfb,0xf9,0xfc,0xfa,0xf8,0xff,0xff,0xf8,0xfe,0xff,0xff,0xfd,0xff,0xff,0xfe,0xff,0xff,0xff,0xf8,0xff,0xff,0xf9,0xfb,0xff,0xfe,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xfb,0xff,0xfe,0xfd,0xff,0xfe,0xf9,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xf9,0xfb,0xfb,0xf9,0xfc,0xff,0xfb,0xfb,0xff,0xff,0xfc,0xfe,0xff,0xff,0xfc,0xfd,0xff,0xf9,0xfb,0xff,0xfe,0xff,0xfd,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xfb,0xff,0xfc,0xfd,0xff,0xfe,0xf5,0xfd,0xfc,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfe,0xfd,0xfd,0xff,0xff,0xfd,0xfd,0xff,0xfe,0xfd,0xff,0xfc,0xff,0xfd,0xfb,0xff,0xfb,0xfb,0xff,0xfe,0xff,0xfd,0xff,0xff,0xfb,0xff,0xff,0xfe,0xff,0xfb,0xff,0xfc,0xfd,0xff,0xfc,0xf8,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfd,0xfa,0xff,0xff,0xfc,0xfc,0xfb,0xfd,0xfd,0xfd,0xff,0xfb,0xfc,0xff,0xfb,0xff,0xfe,0xfa,0xff,0xfb,0xfb,0xff,0xfe,0xff,0xfc,0xff,0xff,0xfb,0xff,0xff,0xfe,0xff,0xfa,0xff,0xfc,0xfd,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif