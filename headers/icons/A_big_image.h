#ifndef A_BIG_IMAGE_H
#define A_BIG_IMAGE_H
#include <types.h>
uint8_t A_big_width = 20;
uint8_t A_big_height = 33;
uint8_t A_big_bitmap[33 * 20 * 3] = {0xff,0xf0,0xff,0xf6,0xf8,0xec,0xf1,0xff,0xcd,0xf7,0xff,0xe2,0xfd,0xfa,0xff,0xfb,0xf6,0xff,0xfb,0xfc,0xf8,0xff,0xff,0xfb,0xff,0xfc,0xff,0xfd,0xf9,0xfe,0xfa,0xfe,0xeb,0xff,0xff,0xf0,0xff,0xf8,0xff,0xff,0xf0,0xff,0xfb,0xf9,0xef,0xf7,0xff,0xc7,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xf4,0xe5,0xff,0xfc,0xfe,0xf2,0xfc,0xff,0xda,0xfa,0xff,0xe8,0xfe,0xfb,0xff,0xfa,0xf6,0xff,0xf5,0xf7,0xf1,0xf9,0xfb,0xf5,0xfd,0xfa,0xff,0xff,0xfd,0xff,0xfc,0xff,0xf0,0xf1,0xf2,0xe2,0xf9,0xef,0xff,0xff,0xf4,0xff,0xff,0xfd,0xf5,0xfb,0xff,0xcd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xf8,0xec,0xff,0xff,0xff,0xf7,0xf9,0xff,0xdc,0xf0,0xf5,0xe0,0xfd,0xfa,0xff,0xff,0xfd,0xff,0xfb,0xff,0xf3,0xff,0xff,0xf8,0xef,0xeb,0xf6,0xff,0xfa,0xff,0xfe,0xff,0xf5,0xfd,0xfe,0xee,0xff,0xfb,0xff,0xff,0xf6,0xff,0xf5,0xf2,0xea,0xf3,0xff,0xcb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xf7,0xff,0xff,0xff,0xf7,0xf1,0xf9,0xdb,0xed,0xef,0xe3,0xff,0xfc,0xff,0xff,0xff,0xfe,0xf8,0xfc,0xe9,0xff,0xff,0xf7,0xfa,0xf3,0xff,0xfb,0xf2,0xff,0xee,0xec,0xeb,0xf1,0xf4,0xe5,0xff,0xfe,0xff,0xfa,0xf0,0xff,0xf2,0xef,0xea,0xff,0xff,0xe4,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfa,0xf5,0xfe,0xfd,0xfe,0xf4,0xfa,0xfd,0xed,0xff,0xfd,0xfc,0xff,0xfd,0xff,0xf9,0xfa,0xf1,0xed,0xf4,0xd9,0xf8,0xfb,0xec,0xff,0xfa,0xff,0xff,0xf6,0xff,0xff,0xfb,0xff,0xfb,0xfe,0xef,0xff,0xff,0xf9,0xfc,0xf8,0xfd,0xf4,0xf4,0xee,0xfc,0xff,0xe9,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfa,0xf8,0xf7,0xfc,0xfd,0xf4,0xff,0xff,0xfb,0xff,0xfd,0xff,0xfa,0xf6,0xfb,0xf6,0xf7,0xe7,0xfe,0xff,0xe4,0xff,0xff,0xf2,0xeb,0xe1,0xf2,0xf7,0xe8,0xff,0xfa,0xf3,0xff,0xf2,0xf3,0xe9,0xf4,0xf7,0xe8,0xff,0xff,0xfb,0xff,0xff,0xfc,0xf9,0xfd,0xf1,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xf6,0xfb,0xfb,0xf5,0xff,0xfd,0xff,0xff,0xf6,0xff,0xf2,0xed,0xef,0xfe,0xff,0xeb,0xff,0xff,0xe2,0xdd,0xdf,0xcc,0xff,0xf9,0xff,0xf8,0xe8,0xff,0xff,0xf7,0xff,0xff,0xff,0xf9,0xf4,0xfa,0xe7,0xf5,0xf9,0xed,0xfd,0xff,0xfc,0xf3,0xf5,0xf6,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xf0,0xf6,0xf5,0xf1,0xff,0xfa,0xff,0xff,0xf8,0xff,0xf8,0xf4,0xf3,0xff,0xff,0xed,0xde,0xe5,0xc0,0x7c,0x7c,0x6a,0x09,0x00,0x0e,0x06,0x00,0x18,0x6a,0x5d,0x75,0xe4,0xe2,0xe1,0xfe,0xff,0xf0,0xf1,0xfa,0xe6,0xf7,0xfc,0xfa,0xf9,0xf9,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xf3,0xf8,0xe3,0xff,0xff,0xff,0xff,0xf8,0xff,0xf0,0xe6,0xf6,0xff,0xfc,0xf4,0xff,0xff,0xeb,0xe7,0xea,0xca,0x54,0x51,0x42,0x07,0x00,0x09,0x1d,0x0d,0x2c,0x30,0x23,0x3d,0xf4,0xf3,0xf7,0xf3,0xfc,0xe8,0xea,0xf6,0xe0,0xfa,0xff,0xfe,0xf3,0xf3,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xf0,0xf8,0xf5,0xf7,0xff,0xf3,0xff,0xf4,0xec,0xf7,0xff,0xff,0xf4,0xf9,0xfb,0xde,0xd1,0xd2,0xb8,0x21,0x1d,0x12,0x22,0x18,0x1e,0x05,0x00,0x0e,0x1f,0x12,0x2c,0xc7,0xc3,0xce,0xfd,0xff,0xf7,0xef,0xfc,0xe6,0xf8,0xff,0xfe,0xea,0xeb,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xf4,0xef,0xeb,0xf1,0xfb,0xf0,0xff,0xfd,0xf6,0xfb,0xff,0xff,0xf1,0xf9,0xf8,0xde,0xbd,0xb7,0xaa,0x21,0x18,0x14,0x88,0x80,0x80,0x05,0x00,0x06,0x15,0x09,0x1f,0x7a,0x74,0x87,0xf9,0xff,0xfa,0xf0,0xfc,0xea,0xf6,0xff,0xfe,0xf4,0xf7,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xff,0xf6,0xf4,0xee,0xf9,0xff,0xf7,0xff,0xff,0xfd,0xf8,0xff,0xff,0xe6,0xfc,0xf9,0xe4,0x8f,0x83,0x81,0x55,0x48,0x4a,0xe4,0xdc,0xd5,0x18,0x11,0x0e,0x0e,0x04,0x15,0x33,0x2a,0x44,0xe8,0xeb,0xf0,0xf0,0xfd,0xef,0xf4,0xff,0xfe,0xf4,0xfb,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xfc,0xff,0xf8,0xff,0xff,0xfa,0xff,0xfd,0xfd,0xed,0xf9,0xfd,0xda,0xfa,0xf6,0xe4,0x45,0x34,0x41,0x85,0x76,0x7e,0xef,0xea,0xdb,0x2a,0x28,0x16,0x08,0x00,0x0c,0x12,0x07,0x28,0xd0,0xd0,0xe2,0xf5,0xff,0xfa,0xed,0xfb,0xf5,0xea,0xf3,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfd,0xff,0xff,0xfa,0xff,0xfc,0xf4,0xfe,0xfb,0xfe,0xe5,0xff,0xff,0xdc,0xee,0xe5,0xdb,0x1f,0x0b,0x22,0xb5,0xa4,0xb2,0xf7,0xf2,0xdd,0x6a,0x6c,0x4f,0x10,0x08,0x12,0x0a,0x00,0x25,0x9d,0x99,0xb6,0xf6,0xff,0xff,0xee,0xfe,0xf7,0xe8,0xf5,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfc,0xfa,0xff,0xfe,0xf6,0xff,0xfa,0xf4,0xf9,0xfd,0xff,0xe3,0xff,0xff,0xd7,0xbe,0xb4,0xad,0x29,0x11,0x31,0xe9,0xd5,0xe8,0xff,0xfe,0xe5,0xbd,0xc2,0x9b,0x1a,0x14,0x19,0x05,0x00,0x24,0x54,0x4e,0x71,0xe8,0xf4,0xf6,0xf1,0xff,0xfa,0xf1,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfa,0xff,0xff,0xf7,0xff,0xff,0xfb,0xfd,0xfe,0xff,0xe1,0xee,0xf4,0xc5,0x81,0x76,0x72,0x36,0x1c,0x40,0xff,0xf1,0xff,0xee,0xec,0xce,0xe2,0xe9,0xbe,0x15,0x10,0x12,0x02,0x00,0x23,0x21,0x19,0x41,0xda,0xe5,0xe9,0xec,0xfc,0xf5,0xf1,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xf7,0xed,0xec,0xe8,0xff,0xf4,0xf3,0xff,0xfe,0xfb,0xf7,0xf7,0xef,0xac,0x72,0x6f,0x1e,0x37,0x41,0x23,0xdf,0xf2,0xff,0xe6,0xf1,0xff,0xf0,0xe6,0xec,0x6a,0x50,0x2c,0x25,0x0a,0x00,0x0c,0x04,0x23,0x97,0xa3,0xd9,0xda,0xf1,0xff,0xe9,0xff,0xee,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xf6,0xec,0xfd,0xf8,0xff,0xe4,0xe1,0xff,0xf4,0xf0,0xeb,0xf6,0xf1,0xb4,0x19,0x19,0x00,0xac,0xb7,0x9d,0xe1,0xf4,0xff,0xd8,0xe3,0xff,0xfd,0xf6,0xf9,0xbe,0xa6,0x82,0x1c,0x04,0x00,0x10,0x05,0x1f,0x44,0x4e,0x7e,0xe4,0xfb,0xff,0xea,0xff,0xf5,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xf5,0xfd,0xfb,0xff,0xf5,0xef,0xff,0xff,0xfc,0xf5,0xcb,0xc7,0x94,0x1c,0x1e,0x00,0xc0,0xcb,0xb7,0xe5,0xf3,0xff,0xea,0xf3,0xff,0xff,0xff,0xfc,0xd3,0xc3,0x9e,0x2a,0x16,0x00,0x14,0x09,0x19,0x27,0x2b,0x54,0xdf,0xf3,0xff,0xd3,0xee,0xea,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xff,0xf3,0xec,0xeb,0xef,0xf5,0xec,0xf6,0xfa,0xf0,0xe6,0x82,0x7c,0x57,0x0f,0x13,0x00,0x06,0x10,0x04,0x00,0x00,0x15,0x0c,0x12,0x29,0x02,0x03,0x00,0x12,0x0a,0x00,0x13,0x08,0x00,0x13,0x08,0x0b,0x0b,0x09,0x26,0xa0,0xaf,0xc9,0xe3,0xff,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xee,0xfd,0xef,0xfd,0xfe,0xf5,0xff,0xfe,0xfb,0xff,0xf7,0xea,0x4e,0x4a,0x32,0x53,0x5c,0x48,0xe2,0xea,0xe9,0xf6,0xfc,0xff,0xfa,0xfd,0xff,0xf5,0xfb,0xea,0xff,0xff,0xdf,0x79,0x72,0x51,0x17,0x08,0x00,0x15,0x0e,0x1d,0x83,0x8e,0xa9,0xd3,0xf1,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xef,0xff,0xf7,0xe7,0xe9,0xd6,0xf3,0xe2,0xcf,0xf3,0xe1,0xd0,0x05,0x03,0x00,0x91,0x9b,0x9b,0xf4,0xfe,0xff,0xef,0xf2,0xf7,0xf8,0xfa,0xf4,0xe9,0xf2,0xdd,0xfe,0xff,0xe6,0xcc,0xcb,0xa5,0x1d,0x0f,0x00,0x0b,0x00,0x00,0x24,0x2d,0x48,0xce,0xeb,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xe2,0xfc,0xee,0xec,0xef,0xd6,0xff,0xfe,0xdf,0xe4,0xcf,0xba,0x0a,0x09,0x0b,0xdf,0xeb,0xfd,0xf1,0xfa,0xff,0xfa,0xfb,0xf9,0xfb,0xfc,0xec,0xf7,0xff,0xea,0xe9,0xfa,0xd9,0xea,0xed,0xc6,0x34,0x24,0x00,0x1f,0x0d,0x02,0x0e,0x12,0x2e,0xb2,0xcf,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xe5,0xff,0xf6,0xff,0xff,0xea,0xff,0xf1,0xc8,0x78,0x63,0x4d,0x31,0x2f,0x3b,0xdc,0xe9,0xff,0xec,0xf5,0xff,0xff,0xff,0xf9,0xff,0xff,0xeb,0xea,0xf9,0xdd,0xf3,0xff,0xea,0xf7,0xfc,0xd5,0x81,0x71,0x46,0x17,0x05,0x00,0x03,0x07,0x20,0x82,0x9e,0xdf,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xdc,0xf9,0xf0,0xff,0xff,0xea,0xff,0xf0,0xc3,0x54,0x40,0x27,0x77,0x77,0x85,0xe0,0xeb,0xff,0xef,0xfa,0xff,0xf4,0xf5,0xeb,0xff,0xff,0xe6,0xf6,0xff,0xea,0xf0,0xff,0xea,0xeb,0xef,0xcb,0xe1,0xd1,0xa2,0x19,0x07,0x00,0x00,0x03,0x18,0x2a,0x42,0x84,0xfe,0xfe,0xfe,0xf8,0xf8,0xf8,0xf9,0xf9,0xf9,0xff,0xff,0xff,0xec,0xff,0xff,0xed,0xf1,0xd4,0xfb,0xec,0xbe,0x43,0x32,0x17,0xa4,0xa1,0xb0,0xc2,0xcb,0xf0,0xef,0xfa,0xff,0xf2,0xfa,0xef,0xeb,0xf2,0xd7,0xf0,0xfc,0xe8,0xfa,0xff,0xf4,0xff,0xff,0xe3,0xed,0xdd,0xae,0x33,0x24,0x04,0x06,0x08,0x1a,0x0f,0x24,0x62,0xe9,0xe9,0xe9,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xf4,0xf4,0xf4,0xee,0xfd,0xff,0xa6,0xa9,0x93,0x5b,0x52,0x27,0x13,0x07,0x00,0x86,0x83,0x8c,0xd2,0xd7,0xf6,0xef,0xfb,0xff,0xe9,0xf6,0xee,0xfa,0xff,0xf1,0xf8,0xff,0xf5,0xee,0xf2,0xe7,0xe8,0xe1,0xc8,0xb7,0xa9,0x7f,0x2a,0x20,0x02,0x00,0x00,0x0a,0x00,0x00,0x30,0x3a,0x3a,0x3a,0xa1,0xa1,0xa1,0xfb,0xfb,0xfb,0xff,0xff,0xff,0xed,0xf1,0xfc,0xff,0xff,0xf5,0xf7,0xf5,0xd2,0xff,0xff,0xe6,0xee,0xe8,0xe9,0xf8,0xf9,0xff,0xda,0xe8,0xf4,0xef,0xff,0xfe,0xe6,0xf8,0xeb,0xf0,0xf6,0xf1,0xf7,0xf0,0xed,0xff,0xff,0xf1,0xff,0xff,0xdb,0xef,0xeb,0xcf,0xf6,0xfc,0xff,0xea,0xf3,0xff,0xff,0xff,0xff,0xfa,0xfa,0xfa,0xf1,0xf1,0xf1,0xf3,0xf3,0xf3,0xf0,0xea,0xfd,0xff,0xff,0xfc,0xf2,0xf7,0xda,0xff,0xfe,0xe2,0xff,0xff,0xf8,0xfd,0xfb,0xff,0xf0,0xfe,0xff,0xe6,0xff,0xff,0xec,0xff,0xff,0xfb,0xfe,0xff,0xff,0xf4,0xf9,0xff,0xfc,0xf1,0xfd,0xf2,0xd7,0xf4,0xf7,0xe1,0xf3,0xfa,0xfd,0xe5,0xe9,0xff,0xf8,0xf8,0xf8,0xf3,0xf3,0xf3,0xf9,0xf9,0xf9,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,0xfe,0xff,0xf4,0xff,0xeb,0xf1,0xf6,0xdb,0xff,0xff,0xed,0xfb,0xf5,0xf0,0xef,0xff,0xfe,0xd7,0xfa,0xfd,0xdd,0xfa,0xff,0xf4,0xf2,0xfe,0xff,0xed,0xf8,0xff,0xf1,0xee,0xff,0xf5,0xe3,0xf9,0xff,0xf2,0xf8,0xff,0xff,0xef,0xef,0xff,0xf9,0xf9,0xf9,0xf8,0xf8,0xf8,0xf6,0xf6,0xf6,0xf5,0xf5,0xf5,0xff,0xef,0xff,0xfd,0xfc,0xff,0xe6,0xf7,0xe9,0xf3,0xfc,0xe1,0xf6,0xec,0xd4,0xff,0xff,0xf4,0xea,0xfb,0xf7,0xda,0xff,0xff,0xdf,0xff,0xff,0xfb,0xf5,0xff,0xff,0xf2,0xff,0xff,0xeb,0xed,0xff,0xfa,0xf0,0xf4,0xff,0xf5,0xf6,0xff,0xfc,0xfd,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xff,0xe6,0xff,0xf5,0xf2,0xff,0xf3,0xff,0xf9,0xfb,0xff,0xeb,0xff,0xf7,0xdb,0xff,0xfc,0xe8,0xe2,0xf2,0xeb,0xd3,0xff,0xff,0xd5,0xf7,0xff,0xf5,0xee,0xff,0xff,0xf2,0xff,0xff,0xe7,0xec,0xff,0xff,0xf8,0xee,0xff,0xf2,0xef,0xfb,0xf5,0xff,0xfb,0xfc,0xf9,0xf9,0xf9,0xf7,0xf7,0xf7,0xf9,0xf9,0xf9,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif