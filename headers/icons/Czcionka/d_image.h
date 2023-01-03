#ifndef D_IMAGE_H
#define D_IMAGE_H
#include <types.h>
uint8_t d_width = 20;
uint8_t d_height = 33;
uint8_t d_bitmap[33 * 20 * 3] = {0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xf3,0xff,0xff,0xeb,0xee,0xe5,0xfe,0xf5,0xe1,0xff,0xff,0xe5,0xff,0xf5,0xdf,0xfd,0xfa,0xf2,0xf4,0xfd,0xff,0xdf,0xf0,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xe3,0xef,0xf3,0xf8,0xfb,0xf2,0xff,0xff,0xed,0xff,0xff,0xe3,0xff,0xfd,0xe7,0xff,0xff,0xf8,0xf4,0xfd,0xff,0xe7,0xf8,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xf3,0xff,0xff,0xff,0xff,0xf9,0xf7,0xee,0xda,0xf3,0xe5,0xc9,0xff,0xf8,0xe2,0xff,0xff,0xf8,0xef,0xf8,0xff,0xea,0xfb,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xe8,0xf4,0xf8,0xfd,0xff,0xf7,0xff,0xff,0xee,0xff,0xff,0xe4,0xff,0xfd,0xe7,0xf7,0xf4,0xec,0xe8,0xf1,0xfb,0xea,0xfb,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xf3,0xff,0xff,0xfa,0xfd,0xf4,0xff,0xf6,0xe2,0xff,0xf3,0xd7,0xff,0xf4,0xde,0xff,0xff,0xf8,0xf4,0xfd,0xff,0xda,0xeb,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xe7,0xf3,0xf7,0xfa,0xfd,0xf4,0xff,0xfc,0xe8,0xff,0xfa,0xde,0xff,0xfd,0xe7,0xff,0xff,0xf9,0xf4,0xfd,0xff,0xea,0xfb,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xf3,0xff,0xff,0xff,0xff,0xf9,0xe2,0xd9,0xc5,0xa5,0x97,0x7b,0x57,0x4a,0x34,0x05,0x02,0x00,0x17,0x20,0x2a,0xa7,0xb8,0xcd,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfc,0xfe,0xfe,0xff,0xfd,0xf4,0xff,0xfc,0xed,0xff,0xfe,0xf0,0xfc,0xff,0xfa,0xf2,0xfe,0xff,0xeb,0xfb,0xff,0xef,0xfb,0xff,0xff,0xff,0xf9,0xf7,0xee,0xda,0xff,0xfa,0xde,0xdb,0xce,0xb8,0x23,0x20,0x18,0x0a,0x13,0x1d,0xd5,0xe6,0xfb,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf1,0xf7,0xfe,0xfd,0xff,0xff,0xf7,0xf2,0xe9,0xff,0xff,0xf4,0xfe,0xfb,0xed,0xef,0xf3,0xed,0xf3,0xff,0xff,0xea,0xfa,0xff,0xef,0xfb,0xff,0xff,0xff,0xf9,0xff,0xfe,0xea,0xff,0xf6,0xda,0xe7,0xda,0xc4,0x11,0x0e,0x06,0x13,0x1c,0x26,0xd2,0xe3,0xf8,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf8,0xfe,0xff,0xfa,0xfc,0xfc,0xfc,0xf7,0xee,0xff,0xfa,0xeb,0xff,0xff,0xf1,0xf5,0xf9,0xf3,0xe4,0xf0,0xf4,0xe5,0xf5,0xfc,0xe9,0xf5,0xf9,0xfd,0xff,0xf7,0xff,0xfa,0xe6,0xfb,0xed,0xd1,0xe0,0xd3,0xbd,0x19,0x16,0x0e,0x17,0x20,0x2a,0xcf,0xe0,0xf5,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xfc,0xff,0xfd,0xff,0xff,0xfb,0xf6,0xed,0xec,0xe5,0xd6,0xff,0xff,0xf5,0xf3,0xf7,0xf1,0xf3,0xff,0xff,0xec,0xfc,0xff,0xf3,0xff,0xff,0xfa,0xfd,0xf4,0xff,0xfa,0xe6,0xff,0xff,0xe5,0xe6,0xd9,0xc3,0x07,0x04,0x00,0x06,0x0f,0x19,0xe4,0xf5,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xe3,0xe9,0xf0,0xfd,0xff,0xff,0xf0,0xeb,0xe2,0xff,0xff,0xf4,0xeb,0xe8,0xda,0xf2,0xf6,0xf0,0xec,0xf8,0xfc,0xe9,0xf9,0xff,0xe1,0xed,0xf1,0xf0,0xf3,0xea,0xfd,0xf4,0xe0,0xff,0xf3,0xd7,0xe1,0xd4,0xbe,0x22,0x1f,0x17,0x0b,0x14,0x1e,0xcd,0xde,0xf3,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf8,0xfe,0xff,0xd5,0xd7,0xd7,0xff,0xff,0xf8,0xf8,0xf1,0xe2,0xee,0xeb,0xdd,0xfd,0xff,0xfb,0xea,0xf6,0xfa,0xef,0xff,0xff,0xf3,0xff,0xff,0xfc,0xff,0xf6,0xff,0xff,0xeb,0xff,0xff,0xe5,0xe2,0xd5,0xbf,0x1f,0x1c,0x14,0x00,0x09,0x13,0xd1,0xe2,0xf7,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf2,0xf8,0xff,0xfd,0xff,0xff,0xf0,0xeb,0xe2,0xe7,0xe0,0xd1,0xff,0xff,0xf5,0xec,0xf0,0xea,0xe8,0xf4,0xf8,0x6a,0x7a,0x81,0x09,0x15,0x19,0x00,0x03,0x00,0x0e,0x05,0x00,0x34,0x26,0x0a,0x62,0x55,0x3f,0x0d,0x0a,0x02,0x10,0x19,0x23,0xe1,0xf2,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xea,0xf0,0xf7,0xfd,0xff,0xff,0xff,0xff,0xf6,0xff,0xff,0xf1,0xe8,0xe5,0xd7,0xde,0xe2,0xdc,0x0e,0x1a,0x1e,0x22,0x32,0x39,0xb9,0xc5,0xc9,0xff,0xff,0xf9,0xff,0xff,0xf0,0xb6,0xa8,0x8c,0x67,0x5a,0x44,0x05,0x02,0x00,0x0b,0x14,0x1e,0xd3,0xe4,0xf9,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf8,0xfe,0xff,0xfd,0xff,0xff,0xf3,0xee,0xe5,0xfd,0xf6,0xe7,0xfa,0xf7,0xe9,0x1c,0x20,0x1a,0x00,0x06,0x0a,0xbd,0xcd,0xd4,0xf2,0xfe,0xff,0xf5,0xf8,0xef,0xff,0xfb,0xe7,0xff,0xff,0xe3,0xd5,0xc8,0xb2,0x28,0x25,0x1d,0x00,0x02,0x0c,0xd8,0xe9,0xfe,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xe5,0xff,0xf6,0xf2,0xff,0xef,0xf7,0xe7,0xdb,0xff,0xea,0xe6,0x91,0x6c,0x74,0x0e,0x00,0x0f,0x47,0x56,0x69,0xd0,0xf4,0xff,0xd7,0xfd,0xff,0xef,0xff,0xee,0xff,0xf5,0xd8,0xff,0xec,0xcb,0xf6,0xd6,0xbf,0x18,0x0c,0x0a,0x00,0x11,0x26,0xc1,0xe7,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xe0,0xff,0xf1,0xf4,0xff,0xf1,0xff,0xef,0xe3,0xff,0xe7,0xe3,0x41,0x1f,0x25,0x18,0x0b,0x1b,0x8f,0x9e,0xb1,0xd7,0xfa,0xff,0xda,0xfd,0xff,0xf0,0xff,0xef,0xff,0xf7,0xd9,0xff,0xed,0xcc,0xf7,0xd7,0xc0,0x18,0x0c,0x0a,0x01,0x12,0x25,0xc2,0xe8,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xe0,0xff,0xef,0xf9,0xff,0xf4,0xfe,0xf0,0xe4,0xe7,0xc4,0xc0,0x1c,0x00,0x00,0x1d,0x10,0x1e,0xd2,0xe0,0xf3,0xdb,0xfc,0xff,0xdd,0xfe,0xff,0xf1,0xff,0xf2,0xff,0xf7,0xdb,0xff,0xef,0xd0,0xf7,0xd8,0xc3,0x1a,0x0e,0x0c,0x01,0x12,0x25,0xc3,0xe8,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xe6,0xff,0xf2,0xfa,0xff,0xf7,0xf7,0xe9,0xdd,0xb5,0x98,0x91,0x20,0x03,0x06,0x17,0x0b,0x17,0xe6,0xf4,0xff,0xdc,0xfb,0xff,0xe0,0xff,0xff,0xf5,0xff,0xf5,0xff,0xf8,0xde,0xff,0xf1,0xd2,0xf7,0xda,0xc5,0x19,0x10,0x0d,0x04,0x13,0x26,0xc5,0xe8,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xe8,0xff,0xf4,0xfb,0xff,0xf8,0xf7,0xeb,0xdf,0xb5,0x99,0x92,0x1e,0x04,0x04,0x14,0x0b,0x15,0xe8,0xf5,0xff,0xde,0xfb,0xff,0xe4,0xff,0xff,0xf5,0xff,0xf5,0xff,0xf9,0xe1,0xff,0xf2,0xd4,0xf4,0xdc,0xc6,0x19,0x10,0x0d,0x03,0x13,0x24,0xc8,0xe7,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xe9,0xfb,0xf4,0xfd,0xff,0xf9,0xff,0xf6,0xe9,0xe1,0xcb,0xc0,0x13,0x00,0x00,0x17,0x10,0x17,0xd5,0xe0,0xee,0xe4,0xfe,0xff,0xe5,0xfd,0xff,0xf7,0xff,0xf6,0xff,0xf8,0xe2,0xff,0xf2,0xd8,0xf1,0xdc,0xc7,0x17,0x10,0x0d,0x03,0x12,0x22,0xca,0xe7,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xee,0xfc,0xf8,0xfd,0xff,0xfb,0xff,0xf7,0xea,0xff,0xf0,0xe5,0x34,0x24,0x1e,0x0f,0x0c,0x0e,0x93,0x9f,0xab,0xe6,0xfb,0xff,0xea,0xfc,0xff,0xf8,0xfe,0xf9,0xff,0xf7,0xe5,0xff,0xf1,0xd8,0xed,0xdc,0xc9,0x14,0x0f,0x0c,0x04,0x11,0x1f,0xcc,0xe5,0xff,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xf8,0xff,0xff,0xff,0xff,0xfc,0xf8,0xef,0xe5,0xff,0xf5,0xe7,0x7e,0x74,0x6a,0x01,0x01,0x01,0x4d,0x57,0x61,0xe6,0xf6,0xff,0xed,0xf9,0xff,0xf9,0xfc,0xfa,0xff,0xf7,0xe6,0xff,0xf1,0xda,0xe9,0xdb,0xc9,0x12,0x0f,0x0a,0x05,0x11,0x1d,0xce,0xe5,0xfb,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xfd,0xfe,0xff,0xff,0xff,0xfe,0xf0,0xea,0xdf,0xff,0xfb,0xea,0xf5,0xf2,0xe4,0x26,0x2a,0x25,0x00,0x01,0x08,0xc2,0xcd,0xdb,0xe7,0xf0,0xfa,0xf1,0xf1,0xf1,0xf3,0xeb,0xde,0xff,0xfb,0xe8,0xe9,0xdf,0xcd,0x14,0x14,0x0e,0x06,0x10,0x1a,0xdd,0xf0,0xff,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xf0,0xeb,0xf4,0xff,0xfd,0xfe,0xff,0xff,0xf6,0xfa,0xf9,0xe5,0xf3,0xf5,0xe2,0xcf,0xd3,0xcd,0x1e,0x27,0x2b,0x21,0x29,0x36,0xc7,0xca,0xd8,0xff,0xfe,0xff,0xff,0xfe,0xf3,0xc1,0xb7,0xa5,0x4b,0x44,0x33,0x00,0x02,0x00,0x12,0x1b,0x24,0xd8,0xe6,0xf8,0xef,0xef,0xef,0xf8,0xf8,0xf8,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xf9,0xff,0xff,0xfd,0xff,0xf8,0xf6,0xeb,0xe0,0xe2,0xce,0xff,0xff,0xf1,0xf7,0xff,0xf4,0xe1,0xe8,0xeb,0x77,0x7a,0x88,0x0e,0x0e,0x1c,0x04,0x00,0x03,0x09,0x01,0x00,0x4e,0x4a,0x38,0x78,0x75,0x66,0x14,0x18,0x12,0x04,0x0c,0x13,0x76,0x80,0x91,0xe5,0xe5,0xe5,0xf0,0xf0,0xf0,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xf9,0xff,0xf4,0xeb,0xee,0xff,0xff,0xf4,0xff,0xff,0xf0,0xe1,0xee,0xd6,0xfa,0xff,0xf7,0xf8,0xfd,0xfe,0xfb,0xfb,0xff,0xff,0xfa,0xff,0xff,0xfc,0xff,0xff,0xff,0xfb,0xf1,0xee,0xe0,0xff,0xff,0xf4,0xdc,0xe0,0xda,0xd2,0xdb,0xdf,0xd3,0xdc,0xea,0xe7,0xe7,0xe7,0xf2,0xf2,0xf2,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xfc,0xea,0xfb,0xfe,0xf2,0xf8,0xff,0xff,0xf7,0xfb,0xff,0xee,0xe1,0xf2,0xd7,0xee,0xfb,0xeb,0xeb,0xf0,0xef,0xfa,0xf6,0xff,0xf4,0xea,0xfb,0xfd,0xf4,0xfe,0xf3,0xee,0xeb,0xff,0xff,0xf7,0xf3,0xf8,0xe9,0xfb,0xff,0xfb,0xed,0xf4,0xf7,0xec,0xf2,0xff,0xf2,0xf2,0xf2,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xec,0xff,0xff,0xfb,0xff,0xef,0xf1,0xe5,0xdd,0xec,0xd1,0xf6,0xff,0xed,0xda,0xe8,0xd6,0xfb,0xff,0xfe,0xf4,0xed,0xfa,0xff,0xf3,0xff,0xff,0xfa,0xff,0xff,0xff,0xfe,0xf8,0xfa,0xee,0xdf,0xe6,0xd7,0xee,0xf6,0xef,0xfa,0xff,0xff,0xf8,0xfc,0xff,0xfb,0xfb,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xff,0xf0,0xff,0xff,0xf5,0xfd,0xf4,0xf6,0xea,0xf6,0xff,0xec,0xdc,0xf3,0xd3,0xf6,0xff,0xf2,0xd8,0xdd,0xdb,0xfa,0xf1,0xfe,0xff,0xf8,0xff,0xee,0xe1,0xef,0xff,0xfa,0xfb,0xf3,0xf7,0xec,0xfb,0xff,0xf7,0xed,0xf5,0xee,0xfa,0xff,0xff,0xea,0xec,0xf6,0xfb,0xfb,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xe9,0xff,0xff,0xfb,0xff,0xf5,0xf9,0xed,0xf4,0xff,0xea,0xef,0xff,0xe6,0xda,0xeb,0xd6,0xfd,0xff,0xfe,0xfc,0xf3,0xff,0xfe,0xf0,0xff,0xff,0xf7,0xff,0xff,0xfa,0xfb,0xfd,0xff,0xf8,0xe6,0xf0,0xe3,0xf6,0xfe,0xf7,0xf5,0xfa,0xfb,0xf6,0xf7,0xff,0xf7,0xf7,0xf7,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xfd,0xff,0xff,0xfb,0xff,0xfd,0xfa,0xfc,0xfb,0xfa,0xfc,0xfd,0xfc,0xfe,0xfc,0xfe,0xff,0xfa,0xff,0xfe,0xf9,0xfe,0xfd,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfc,0xff,0xfd,0xfd,0xfe,0xfc,0xfc,0xfd,0xfb,0xfd,0xfb,0xfa,0xff,0xfd,0xf9,0xff,0xfd,0xf9,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif