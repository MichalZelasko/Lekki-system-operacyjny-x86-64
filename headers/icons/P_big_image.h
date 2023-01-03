#ifndef P_BIG_IMAGE_H
#define P_BIG_IMAGE_H
#include <types.h>
uint8_t P_big_width = 20;
uint8_t P_big_height = 33;
uint8_t P_big_bitmap[33 * 20 * 3] = {0xfa,0xfb,0xff,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xfa,0xff,0xff,0xf6,0xff,0xff,0xf7,0xfb,0xff,0xfc,0xf5,0xff,0xff,0xf7,0xfc,0xfe,0xfe,0xf6,0xfe,0xfe,0xf4,0xff,0xf9,0xf1,0xff,0xf5,0xf4,0xff,0xfc,0xf9,0xfd,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfc,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xfa,0xfc,0xff,0xfd,0xfe,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,0xf6,0xff,0xff,0xf7,0xfb,0xff,0xfc,0xf5,0xff,0xfe,0xf9,0xfc,0xfe,0xfe,0xf6,0xfe,0xfe,0xf4,0xff,0xfa,0xf1,0xff,0xf6,0xf4,0xff,0xfc,0xf9,0xfd,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfc,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xf9,0xfc,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,0xf7,0xff,0xff,0xf7,0xfb,0xff,0xfc,0xf7,0xff,0xfe,0xfa,0xfc,0xfe,0xfe,0xf6,0xfe,0xfe,0xf4,0xff,0xfa,0xf4,0xff,0xf9,0xf6,0xfe,0xfd,0xfa,0xfd,0xff,0xfd,0xfe,0xff,0xff,0xff,0xfe,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xff,0xfd,0xfd,0xf9,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfe,0xfe,0xff,0xfb,0xfc,0xff,0xf8,0xfb,0xff,0xf8,0xfa,0xff,0xfa,0xfa,0xff,0xfd,0xfc,0xfb,0xfd,0xfd,0xf6,0xfe,0xfd,0xf4,0xff,0xfc,0xf4,0xff,0xfc,0xf6,0xfe,0xfd,0xf9,0xfd,0xfe,0xfe,0xfd,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xf8,0xfe,0xf9,0xfb,0xfe,0xfc,0xff,0xfd,0xfd,0xff,0xfc,0xfb,0xff,0xfa,0xf7,0xff,0xf9,0xf9,0xff,0xf9,0xfc,0xff,0xfc,0xfe,0xfb,0xfe,0xfc,0xf6,0xff,0xfc,0xf4,0xfe,0xfe,0xf4,0xfe,0xfe,0xf8,0xfd,0xfe,0xfb,0xfd,0xfd,0xfe,0xfc,0xfc,0xff,0xfa,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xf7,0xff,0xf4,0xfa,0xfd,0xfb,0xff,0xfd,0xfd,0xff,0xfb,0xf8,0xff,0xfb,0xf4,0xff,0xf9,0xf9,0xff,0xf7,0xff,0xff,0xfb,0xff,0xf8,0xfd,0xfb,0xf6,0xff,0xfa,0xf4,0xfd,0xff,0xf6,0xfc,0xff,0xf8,0xfd,0xfe,0xfc,0xfe,0xf8,0xff,0xfb,0xfa,0xff,0xf8,0xfe,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xf9,0xff,0xee,0xfc,0xfd,0xf9,0xff,0xfb,0xfd,0xff,0xfc,0xf7,0xff,0xfd,0xf0,0xff,0xf9,0xf6,0xff,0xf6,0xff,0xff,0xf9,0xff,0xf8,0xfd,0xfb,0xf6,0xff,0xf9,0xf4,0xfd,0xff,0xf7,0xfb,0xff,0xf9,0xfd,0xfe,0xfe,0xff,0xf5,0xff,0xfc,0xf7,0xff,0xf6,0xfe,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xf8,0xff,0xe9,0xfb,0xfc,0xf8,0xff,0xf9,0xff,0xff,0xfc,0xf5,0xff,0xfe,0xec,0xff,0xf9,0xf6,0xff,0xf4,0xff,0xfd,0xf8,0xff,0xf8,0xfe,0xf9,0xf6,0xff,0xf7,0xf6,0xfc,0xff,0xf9,0xf9,0xff,0xfb,0xfd,0xfe,0xff,0xff,0xef,0xff,0xfd,0xf2,0xff,0xf4,0xfd,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xf4,0xff,0xe1,0xfc,0xfd,0xf9,0xec,0xe4,0xee,0xb0,0xaa,0xa3,0x12,0x11,0x00,0x16,0x0f,0x0c,0x0b,0x00,0x16,0x0c,0x05,0x1a,0x01,0x08,0x01,0x00,0x09,0x00,0x0e,0x13,0x1c,0x00,0x00,0x10,0x14,0x14,0x14,0x05,0x08,0x00,0x67,0x60,0x4f,0xe2,0xcf,0xd8,0xf1,0xf6,0xf7,0xfa,0xff,0xff,0xf2,0xf7,0xf8,0xf3,0xf8,0xf9,0xf5,0xff,0xdc,0xfa,0xf8,0xf7,0xfe,0xf4,0xff,0xff,0xfb,0xf4,0x66,0x67,0x4d,0x18,0x11,0x0e,0x26,0x17,0x36,0xb7,0xae,0xc8,0xe0,0xe8,0xe1,0xf8,0xff,0xf5,0xe4,0xe8,0xf3,0xf1,0xed,0xff,0xe1,0xdf,0xde,0x4c,0x50,0x2d,0x0f,0x07,0x00,0x14,0x00,0x07,0x98,0x9d,0xa0,0xef,0xf4,0xf7,0xf8,0xfd,0xff,0xfa,0xff,0xff,0xf4,0xff,0xd9,0xff,0xff,0xff,0xfc,0xf1,0xff,0xff,0xfe,0xf7,0x7a,0x7c,0x5f,0x0a,0x05,0x02,0x0f,0x00,0x23,0xd5,0xcd,0xec,0xfa,0xff,0xf9,0xd7,0xe6,0xd1,0xf8,0xfc,0xff,0xfb,0xf6,0xff,0xfa,0xf7,0xf2,0xf5,0xf9,0xcf,0x79,0x71,0x53,0x18,0x01,0x06,0x26,0x2d,0x30,0xb6,0xbd,0xc0,0xf2,0xf9,0xfc,0xf8,0xff,0xff,0xeb,0xfa,0xce,0xff,0xfe,0xff,0xf3,0xe4,0xff,0xef,0xe9,0xe4,0x73,0x75,0x57,0x15,0x10,0x0f,0x12,0x01,0x2c,0xc8,0xbe,0xe2,0xf9,0xff,0xf7,0xe9,0xf9,0xe1,0xe9,0xed,0xf8,0xf9,0xf1,0xff,0xe8,0xe6,0xde,0xff,0xff,0xd5,0xe9,0xe2,0xbb,0x1f,0x06,0x0a,0x00,0x00,0x03,0x6d,0x74,0x77,0xf3,0xfa,0xfd,0xf5,0xfc,0xff,0xf3,0xff,0xd4,0xf9,0xf5,0xfb,0xfa,0xea,0xff,0xff,0xff,0xfa,0x70,0x73,0x53,0x0a,0x05,0x04,0x19,0x06,0x37,0xd8,0xcd,0xf5,0xe3,0xed,0xe1,0xf8,0xff,0xee,0xf6,0xf8,0xff,0xfd,0xf5,0xff,0xff,0xff,0xf7,0xef,0xf5,0xba,0xfe,0xf8,0xcb,0x62,0x47,0x4a,0x04,0x0d,0x10,0x37,0x40,0x43,0xf6,0xff,0xff,0xf6,0xff,0xff,0xfa,0xff,0xd9,0xfa,0xf2,0xfc,0xfd,0xec,0xff,0xff,0xff,0xfc,0x67,0x6b,0x48,0x05,0x00,0x00,0x19,0x05,0x3a,0xc8,0xbc,0xe6,0xf2,0xfc,0xef,0xe1,0xf3,0xd6,0xfa,0xfc,0xff,0xdf,0xd7,0xf6,0xee,0xed,0xdf,0xff,0xff,0xc4,0xf8,0xf1,0xbf,0x65,0x49,0x48,0x0a,0x13,0x17,0x29,0x32,0x36,0xf5,0xfe,0xff,0xf6,0xff,0xff,0xf1,0xfe,0xd0,0xfd,0xf5,0xff,0xf6,0xe3,0xff,0xf9,0xf1,0xf1,0x71,0x75,0x52,0x20,0x1a,0x1b,0x28,0x13,0x4a,0xc9,0xbc,0xea,0xfa,0xff,0xf7,0xf1,0xff,0xe4,0xf3,0xf5,0xff,0xff,0xf4,0xff,0xfe,0xfb,0xec,0xff,0xff,0xc2,0xef,0xea,0xb3,0x1e,0x03,0x00,0x07,0x10,0x14,0x5c,0x65,0x69,0xef,0xf8,0xfc,0xf3,0xfc,0xff,0xf6,0xff,0xd5,0xff,0xfa,0xff,0xf4,0xe1,0xff,0xfc,0xf4,0xf4,0x78,0x7c,0x59,0x0b,0x04,0x07,0x0a,0x00,0x2e,0xc9,0xbe,0xec,0xf7,0xff,0xf4,0xd8,0xeb,0xca,0xfa,0xfc,0xff,0xf6,0xeb,0xff,0xfc,0xfa,0xe8,0xf9,0xff,0xb7,0x74,0x70,0x36,0x21,0x04,0x00,0x15,0x1e,0x22,0xa8,0xb1,0xb5,0xf6,0xff,0xff,0xf6,0xff,0xff,0xff,0xf8,0xf5,0xfa,0xfd,0xff,0xdb,0xe8,0xea,0xfa,0xfd,0xe7,0x79,0x70,0x4e,0x0b,0x09,0x00,0x17,0x1c,0x35,0xc2,0xc1,0xe1,0xff,0xfa,0xff,0xff,0xf9,0xfa,0xed,0xf2,0xf5,0xed,0xff,0xff,0xdb,0xe3,0xd8,0x5d,0x56,0x43,0x05,0x00,0x01,0x13,0x18,0x37,0xba,0xba,0xba,0xdd,0xdd,0xdd,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xfc,0xed,0xea,0xfa,0xfd,0xff,0xf3,0xff,0xff,0xff,0xff,0xec,0x73,0x6a,0x48,0x2b,0x29,0x1e,0x00,0x00,0x16,0x03,0x02,0x22,0x09,0x00,0x07,0x13,0x05,0x06,0x00,0x01,0x04,0x00,0x03,0x06,0x02,0x0a,0x00,0x16,0x0f,0x00,0x64,0x5e,0x5f,0xdb,0xe0,0xff,0xe8,0xe8,0xe8,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xf6,0xf3,0xf6,0xfe,0xd9,0xe6,0xe8,0xf5,0xf8,0xe2,0x73,0x6a,0x48,0x0a,0x08,0x00,0x12,0x17,0x30,0xbe,0xbd,0xdd,0xff,0xfa,0xff,0xff,0xfe,0xfc,0xfa,0xff,0xff,0xed,0xff,0xff,0xfa,0xff,0xf6,0xf9,0xf2,0xde,0xed,0xe7,0xe8,0xec,0xf1,0xff,0xfb,0xfb,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xfb,0xfb,0xff,0xfb,0xf8,0xfa,0xfd,0xff,0xea,0xf7,0xf9,0xff,0xff,0xef,0x86,0x7d,0x5b,0x08,0x06,0x00,0x01,0x07,0x1e,0xd1,0xd0,0xf0,0xff,0xf4,0xff,0xff,0xf4,0xf2,0xed,0xf2,0xf3,0xdf,0xf3,0xf4,0xf0,0xf9,0xec,0xff,0xff,0xee,0xff,0xfe,0xff,0xf1,0xf7,0xff,0xf5,0xf5,0xf5,0xfa,0xfa,0xfa,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xff,0xf9,0xf6,0xed,0xf0,0xf8,0xe8,0xf5,0xf7,0xf4,0xf7,0xe1,0x62,0x59,0x37,0x10,0x0e,0x03,0x1c,0x22,0x39,0xbd,0xbc,0xdc,0xff,0xf9,0xff,0xff,0xfc,0xfa,0xfa,0xff,0xff,0xed,0xff,0xff,0xee,0xf8,0xe8,0xfc,0xf6,0xdf,0xff,0xfb,0xfa,0xed,0xf3,0xff,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf5,0xf3,0xf8,0xfb,0xff,0xf3,0xff,0xff,0xff,0xff,0xf0,0x78,0x6f,0x4d,0x05,0x03,0x00,0x00,0x00,0x17,0xc3,0xc3,0xe1,0xff,0xf8,0xff,0xfb,0xef,0xeb,0xec,0xf1,0xf2,0xe9,0xfe,0xfc,0xf7,0xff,0xf1,0xff,0xff,0xea,0xff,0xfe,0xfb,0xef,0xf6,0xff,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xf8,0xe9,0xe7,0xfa,0xfd,0xff,0xe5,0xf1,0xf5,0xd9,0xdc,0xc6,0x7b,0x72,0x50,0x24,0x22,0x17,0x03,0x09,0x20,0xcd,0xcd,0xeb,0xfd,0xef,0xfa,0xff,0xfa,0xf6,0xfa,0xff,0xff,0xed,0xff,0xff,0xf2,0xfc,0xeb,0xfa,0xf5,0xdc,0xfb,0xf6,0xf3,0xf1,0xf8,0xff,0xfb,0xfb,0xfb,0xfa,0xfa,0xfa,0xfa,0xfa,0xfa,0xfa,0xfa,0xfa,0xff,0xf9,0xf7,0xee,0xf0,0xfa,0xf2,0xfe,0xff,0xff,0xff,0xec,0x77,0x6e,0x4c,0x12,0x10,0x05,0x00,0x06,0x1d,0xbf,0xbf,0xdd,0xff,0xf4,0xff,0xff,0xfe,0xf8,0xf6,0xfc,0xfb,0xe8,0xfd,0xfa,0xfb,0xff,0xf4,0xff,0xff,0xea,0xfe,0xfa,0xf5,0xee,0xf6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xfc,0xfa,0xf5,0xf7,0xff,0xe4,0xf0,0xf4,0xf5,0xf8,0xe2,0x92,0x89,0x67,0x16,0x14,0x09,0x00,0x06,0x1d,0xc4,0xc4,0xe2,0xff,0xfb,0xff,0xff,0xff,0xf9,0xf9,0xff,0xfd,0xed,0xff,0xff,0xf8,0xff,0xef,0xff,0xff,0xe3,0xff,0xfc,0xf4,0xf0,0xf9,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xee,0xfa,0xfc,0xff,0xf3,0xff,0xff,0xe7,0xe9,0xd5,0x68,0x5f,0x3d,0x06,0x04,0x00,0x12,0x18,0x2f,0xcc,0xcd,0xe9,0xf8,0xeb,0xf3,0xff,0xf3,0xed,0xf5,0xfc,0xf7,0xeb,0xff,0xfc,0xf5,0xff,0xeb,0xff,0xfd,0xe0,0xfd,0xfb,0xf1,0xf1,0xfa,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xf4,0xe4,0xe5,0xee,0xf0,0xfa,0xce,0xda,0xde,0xa5,0xa7,0x93,0x3d,0x34,0x12,0x05,0x03,0x00,0x00,0x00,0x14,0x5c,0x5d,0x79,0xee,0xe1,0xe9,0xfa,0xef,0xe7,0xf5,0xfc,0xf7,0xed,0xff,0xfc,0xf5,0xff,0xea,0xfe,0xfb,0xdc,0xfb,0xf9,0xee,0xf1,0xfb,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfe,0xfa,0xfc,0xff,0xed,0xf9,0xfd,0xff,0xff,0xef,0xfa,0xf1,0xcf,0xff,0xfd,0xf2,0xec,0xf3,0xff,0xf6,0xf7,0xff,0xf7,0xeb,0xf1,0xff,0xf6,0xee,0xf9,0xff,0xfa,0xed,0xff,0xfc,0xf7,0xff,0xec,0xff,0xfe,0xdc,0xfb,0xf9,0xee,0xef,0xf9,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xf2,0xec,0xee,0xf8,0xe3,0xef,0xf3,0xff,0xff,0xf0,0xff,0xfe,0xdc,0xff,0xff,0xf7,0xf3,0xfa,0xff,0xe8,0xe9,0xff,0xff,0xf8,0xfe,0xff,0xfd,0xf3,0xf8,0xff,0xf9,0xed,0xff,0xfb,0xf9,0xff,0xec,0xff,0xff,0xe0,0xfe,0xfd,0xef,0xef,0xfa,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfe,0xfa,0xfc,0xff,0xee,0xfa,0xff,0xff,0xff,0xf1,0xff,0xf8,0xd6,0xf0,0xee,0xe3,0xed,0xf4,0xff,0xee,0xef,0xff,0xff,0xfb,0xff,0xff,0xfc,0xf2,0xf4,0xfc,0xf5,0xe9,0xff,0xf7,0xf7,0xff,0xea,0xff,0xff,0xe0,0xff,0xff,0xf1,0xf1,0xfc,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xfa,0xfa,0xfc,0xff,0xe6,0xf2,0xf8,0xfa,0xfc,0xe8,0xff,0xff,0xdd,0xf4,0xf2,0xe7,0xf3,0xfa,0xff,0xf6,0xf7,0xff,0xff,0xf7,0xfd,0xff,0xfc,0xf2,0xf7,0xff,0xf6,0xea,0xff,0xf8,0xf5,0xff,0xe8,0xff,0xff,0xdc,0xff,0xff,0xef,0xf1,0xfc,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf0,0xf1,0xfa,0xfc,0xff,0xec,0xf8,0xfe,0xfe,0xff,0xec,0xff,0xff,0xe3,0xf2,0xf0,0xe5,0xee,0xf5,0xff,0xed,0xee,0xff,0xff,0xf6,0xfc,0xff,0xff,0xf5,0xfa,0xff,0xf9,0xed,0xff,0xfb,0xf4,0xff,0xe6,0xfd,0xfb,0xd8,0xfc,0xfc,0xec,0xf1,0xfd,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif