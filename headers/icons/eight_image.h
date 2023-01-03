#ifndef EIGHT_IMAGE_H
#define EIGHT_IMAGE_H
#include <types.h>
uint8_t eight_width = 16;
uint8_t eight_height = 33;
uint8_t eight_bitmap[33 * 16 * 3] = {0xf5,0xf7,0xf8,0xfd,0xff,0xff,0xf2,0xf4,0xf5,0xec,0xee,0xee,0xfd,0xff,0xfe,0xfd,0xff,0xfe,0xf6,0xf7,0xf3,0xfe,0xff,0xfb,0xf7,0xf8,0xf4,0xf2,0xf3,0xef,0xff,0xff,0xfc,0xfd,0xfc,0xf8,0xf4,0xf3,0xef,0xf6,0xf5,0xf1,0xff,0xff,0xfe,0xf8,0xf6,0xf5,0xfd,0xff,0xff,0xdd,0xdf,0xe0,0xfd,0xff,0xff,0xfd,0xff,0xff,0xea,0xed,0xeb,0xec,0xed,0xeb,0xeb,0xec,0xe8,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfc,0xfd,0xf9,0xe4,0xe5,0xe1,0xff,0xff,0xfc,0xff,0xfe,0xfa,0xee,0xed,0xe9,0xf6,0xf4,0xf3,0xfd,0xfb,0xfa,0xf0,0xf2,0xf2,0xfd,0xff,0xff,0xfc,0xfe,0xfe,0xfb,0xfd,0xfd,0xf4,0xf7,0xf5,0xfb,0xfc,0xfa,0xff,0xff,0xfc,0xf1,0xf2,0xee,0xef,0xf0,0xec,0xf5,0xf6,0xf2,0xff,0xff,0xfc,0xef,0xee,0xea,0xfa,0xf9,0xf5,0xff,0xff,0xfe,0xf1,0xef,0xee,0xff,0xff,0xfe,0xfd,0xff,0xff,0xfd,0xff,0xff,0xeb,0xeb,0xeb,0xf0,0xf1,0xef,0xfa,0xfb,0xf9,0xef,0xf0,0xee,0xf5,0xf6,0xf4,0xfd,0xfe,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfc,0xfd,0xf9,0xed,0xee,0xea,0xff,0xff,0xfe,0xed,0xee,0xec,0xfe,0xfc,0xfb,0xfe,0xfc,0xfb,0xf6,0xf7,0xf5,0xd9,0xda,0xd8,0xfa,0xfb,0xf9,0xff,0xff,0xfe,0xfb,0xfc,0xfa,0xff,0xff,0xfe,0xff,0xff,0xfe,0xfd,0xfe,0xfc,0xea,0xeb,0xe9,0xe2,0xe3,0xe1,0xff,0xff,0xfe,0xf9,0xfa,0xf8,0xfb,0xfc,0xfa,0xff,0xff,0xfe,0xf7,0xf8,0xf6,0xf7,0xf8,0xf6,0xe2,0xe3,0xdf,0xff,0xff,0xfc,0xda,0xdb,0xd7,0xed,0xee,0xec,0xf7,0xf8,0xf6,0x69,0x6a,0x68,0x11,0x12,0x10,0x00,0x01,0x00,0x0a,0x0b,0x09,0x50,0x51,0x4f,0x9c,0x9d,0x9b,0xf8,0xf9,0xf7,0xfe,0xff,0xfd,0xf8,0xf9,0xf7,0xee,0xef,0xed,0xff,0xff,0xfe,0xff,0xff,0xfa,0xfe,0xfe,0xf8,0xff,0xff,0xfb,0xf2,0xf1,0xed,0x44,0x42,0x41,0x02,0x03,0x01,0xb5,0xb5,0xb5,0xfc,0xfc,0xfc,0xf7,0xf7,0xf7,0xbc,0xbc,0xbc,0x0e,0x0e,0x0e,0x64,0x66,0x66,0xfb,0xfe,0xfc,0xdd,0xe0,0xde,0xfd,0xff,0xfe,0xea,0xee,0xe9,0xff,0xff,0xf9,0xf3,0xf4,0xeb,0xff,0xff,0xfb,0x44,0x44,0x3e,0x09,0x08,0x04,0xc8,0xc6,0xc5,0xfd,0xfd,0xfd,0xff,0xfe,0xff,0xf8,0xf7,0xf9,0xf8,0xf7,0xf9,0xe6,0xe8,0xe9,0x09,0x0b,0x0b,0xa7,0xa9,0xa9,0xfd,0xff,0xfe,0xf0,0xf3,0xf1,0xfd,0xff,0xfc,0xfb,0xfa,0xf0,0xff,0xff,0xf8,0xb5,0xb3,0xab,0x02,0x02,0x00,0x52,0x51,0x4d,0xee,0xec,0xeb,0xff,0xfe,0xfe,0xff,0xfe,0xff,0xff,0xfe,0xff,0xf6,0xf8,0xf9,0xfd,0xff,0xff,0x66,0x68,0x69,0x52,0x54,0x54,0xee,0xf3,0xf1,0xfb,0xff,0xfe,0xf0,0xf6,0xf1,0xf6,0xf6,0xea,0xf4,0xf4,0xe8,0x9e,0x9d,0x93,0x04,0x02,0x00,0x57,0x54,0x50,0xff,0xff,0xfe,0xed,0xea,0xec,0xeb,0xea,0xee,0xf6,0xf5,0xf9,0xfa,0xfb,0xff,0xfa,0xfb,0xff,0x76,0x7a,0x7b,0x58,0x5d,0x5c,0xf7,0xfc,0xfa,0xf5,0xfa,0xf8,0xf7,0xfd,0xf8,0xfd,0xfd,0xed,0xff,0xff,0xf1,0xbe,0xbc,0xb1,0x0c,0x0a,0x02,0x16,0x13,0x0f,0xab,0xa9,0xa9,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfe,0xfc,0xff,0xfd,0xfd,0xff,0xf1,0xf2,0xf6,0x17,0x1b,0x1c,0x71,0x76,0x75,0xe4,0xeb,0xe8,0xfa,0xff,0xfe,0xf6,0xfd,0xf8,0xff,0xff,0xf2,0xe3,0xe3,0xd3,0xff,0xff,0xf7,0x45,0x43,0x39,0x11,0x0e,0x0a,0x0d,0x08,0x09,0xd6,0xd3,0xd5,0xe6,0xe4,0xea,0xfa,0xf8,0xfe,0xe7,0xe7,0xed,0x9c,0x9f,0xa4,0x20,0x23,0x27,0xd4,0xd9,0xda,0xf6,0xfd,0xfa,0xfa,0xff,0xfe,0xed,0xf4,0xef,0xfd,0xfb,0xe9,0xf2,0xf0,0xde,0xf8,0xf7,0xe9,0xf1,0xef,0xe5,0x04,0x01,0x00,0x0c,0x07,0x08,0x08,0x04,0x09,0xad,0xab,0xb1,0xff,0xfc,0xff,0xae,0xad,0xb6,0x00,0x02,0x07,0xc0,0xc3,0xc7,0xf1,0xf6,0xf7,0xef,0xf5,0xf4,0xdd,0xe6,0xe3,0xf4,0xfe,0xf8,0xf4,0xf3,0xdf,0xff,0xff,0xf2,0xfd,0xfa,0xec,0xee,0xec,0xe2,0xf2,0xee,0xe9,0x10,0x0b,0x0c,0x1a,0x16,0x1b,0x00,0x00,0x04,0x00,0x00,0x06,0x00,0x00,0x06,0xd1,0xd3,0xdb,0xfa,0xff,0xff,0xf3,0xf8,0xf9,0xf8,0xff,0xff,0xef,0xf8,0xf5,0xf8,0xff,0xfc,0xff,0xff,0xed,0xf6,0xf5,0xe1,0xf0,0xed,0xde,0xff,0xff,0xf7,0xfb,0xf7,0xf2,0xbc,0xb7,0xb8,0x12,0x0e,0x13,0x00,0x00,0x06,0x09,0x06,0x0f,0x14,0x13,0x1c,0x58,0x5a,0x62,0xef,0xf3,0xf8,0xfa,0xff,0xff,0xe5,0xed,0xec,0xf2,0xfb,0xf8,0xe5,0xef,0xe9,0xfb,0xfa,0xe5,0xfc,0xfb,0xe7,0xff,0xff,0xf4,0xec,0xea,0xdf,0x93,0x8f,0x8a,0x0e,0x09,0x0a,0x80,0x7c,0x81,0xbd,0xba,0xc3,0x19,0x15,0x20,0x05,0x04,0x0e,0x04,0x06,0x0e,0x23,0x27,0x2c,0xe7,0xec,0xed,0xf8,0xff,0xff,0xf2,0xfb,0xf8,0xf4,0xfe,0xf8,0xff,0xf4,0xed,0xff,0xff,0xdd,0xfc,0xff,0xdd,0xab,0xb1,0xb8,0x00,0x00,0x1c,0x37,0x49,0x60,0xec,0xff,0xf9,0xe4,0xf6,0xe5,0xe1,0xdd,0xe2,0x7c,0x6e,0x70,0x12,0x09,0x00,0x21,0x1d,0x00,0x2f,0x2a,0x1b,0xec,0xe6,0xff,0xef,0xf6,0xff,0xec,0xff,0xff,0xff,0xfe,0xf7,0xdf,0xd4,0xb4,0xc4,0xc7,0xa7,0x00,0x04,0x09,0x2b,0x33,0x58,0xe8,0xfa,0xff,0xe5,0xff,0xf2,0xf5,0xff,0xf6,0xf4,0xf0,0xf5,0xff,0xf7,0xf8,0xd3,0xca,0xa9,0x14,0x12,0x00,0x09,0x04,0x00,0xb0,0xaa,0xc3,0xf3,0xf8,0xff,0xe6,0xfb,0xfc,0xff,0xed,0xe6,0xff,0xfc,0xde,0x49,0x4b,0x2d,0x0b,0x11,0x16,0xa0,0xa9,0xcb,0xe7,0xf8,0xff,0xe0,0xf8,0xec,0xee,0xfd,0xef,0xf3,0xef,0xf4,0xff,0xf7,0xf8,0xf9,0xef,0xd1,0xe6,0xe3,0xb7,0x1f,0x1a,0x0b,0x83,0x7d,0x94,0xec,0xf2,0xff,0xec,0xff,0xff,0xff,0xf4,0xea,0xf1,0xe6,0xca,0x12,0x14,0x00,0x04,0x09,0x0c,0xc3,0xcb,0xe9,0xe4,0xf4,0xff,0xed,0xff,0xfb,0xee,0xfc,0xf0,0xf6,0xf3,0xf5,0xff,0xfe,0xfe,0xf2,0xea,0xcd,0xf1,0xef,0xc7,0x95,0x92,0x84,0x3e,0x3a,0x4d,0xed,0xf2,0xff,0xe9,0xfd,0xfe,0xff,0xff,0xf5,0xb0,0xa7,0x8c,0x15,0x15,0x00,0x00,0x01,0x04,0xdb,0xe2,0xfb,0xed,0xfc,0xff,0xe6,0xfb,0xf3,0xf1,0xff,0xf3,0xff,0xff,0xff,0xfd,0xf4,0xf1,0xf6,0xf1,0xd8,0xf2,0xf0,0xce,0x99,0x95,0x8a,0x3f,0x3c,0x4c,0xf4,0xfb,0xff,0xdd,0xef,0xf0,0xff,0xf3,0xe8,0xc9,0xc1,0xaa,0x09,0x0a,0x00,0x21,0x25,0x26,0xca,0xd1,0xe4,0xef,0xfd,0xff,0xdc,0xee,0xe7,0xf2,0xfd,0xf3,0xf2,0xf3,0xf1,0xec,0xe6,0xe1,0xff,0xff,0xea,0xfd,0xfa,0xde,0x81,0x7f,0x75,0x87,0x85,0x91,0xe6,0xec,0xf9,0xf3,0xff,0xff,0xff,0xf6,0xea,0xf6,0xef,0xdc,0x55,0x55,0x45,0x00,0x00,0x00,0x4b,0x51,0x5c,0xe3,0xee,0xf6,0xf2,0xff,0xfc,0xf7,0xff,0xfa,0xff,0xff,0xfc,0xff,0xff,0xf8,0xe1,0xdd,0xcb,0xd7,0xd6,0xc1,0x2b,0x2a,0x20,0xf2,0xf2,0xf8,0xf4,0xf9,0xff,0xed,0xf8,0xfc,0xff,0xf4,0xe6,0xff,0xff,0xf4,0xde,0xdc,0xd2,0x16,0x19,0x17,0x0d,0x14,0x17,0x1e,0x27,0x2a,0xdb,0xe6,0xe4,0xee,0xf5,0xf0,0xee,0xf2,0xec,0xfb,0xfa,0xf0,0xc2,0xc1,0xb3,0x21,0x20,0x12,0xcb,0xc9,0xc1,0xf6,0xf8,0xf9,0xfa,0xfe,0xff,0xf7,0xfd,0xff,0xff,0xfe,0xf0,0xff,0xfd,0xf4,0xff,0xff,0xfb,0xe9,0xea,0xe6,0x98,0x9d,0x9b,0x35,0x3d,0x3c,0x03,0x0b,0x0b,0x04,0x0b,0x08,0x00,0x03,0x00,0x2e,0x32,0x26,0x8a,0x89,0x7f,0xe1,0xde,0xd9,0xff,0xff,0xfb,0xf9,0xfd,0xf8,0xf3,0xf7,0xf8,0xfa,0xfd,0xff,0xfa,0xf5,0xe6,0xfa,0xf4,0xef,0xff,0xf9,0xfa,0xff,0xff,0xfb,0xfc,0xff,0xf7,0xf3,0xf9,0xf4,0xf4,0xf9,0xfc,0xfb,0xff,0xff,0xfb,0xff,0xf8,0xf8,0xff,0xf2,0xfd,0xfe,0xfa,0xff,0xfe,0xff,0xff,0xff,0xfc,0xf5,0xf8,0xef,0xf6,0xf9,0xf7,0xfd,0xfc,0xff,0xff,0xff,0xf1,0xff,0xfe,0xfe,0xff,0xfa,0xff,0xf2,0xf3,0xea,0xf1,0xf7,0xe4,0xfa,0xff,0xf6,0xf8,0xfb,0xff,0xed,0xf1,0xf2,0xf2,0xfb,0xee,0xed,0xf7,0xe7,0xed,0xf2,0xf1,0xf4,0xf3,0xfc,0xf7,0xfa,0xf8,0xf7,0xfb,0xef,0xf6,0xf8,0xf2,0xf7,0xf4,0xfd,0xec,0xec,0xda,0xff,0xf8,0xfb,0xff,0xfb,0xff,0xfe,0xfd,0xf3,0xf9,0xff,0xe6,0xff,0xff,0xf7,0xfd,0xfc,0xff,0xfb,0xfe,0xff,0xfa,0xff,0xf5,0xfa,0xff,0xf4,0xf7,0xfc,0xff,0xf5,0xf5,0xff,0xf9,0xfb,0xfb,0xff,0xff,0xf2,0xff,0xff,0xf6,0xf9,0xf3,0xfe,0xfb,0xfd,0xea,0xff,0xfd,0xff,0xff,0xfa,0xff,0xfd,0xfb,0xf1,0xf2,0xf8,0xd9,0xf2,0xf3,0xe3,0xf6,0xf3,0xfc,0xfb,0xfb,0xff,0xee,0xfa,0xe8,0xf0,0xff,0xea,0xef,0xf5,0xfa,0xed,0xec,0xff,0xf0,0xf4,0xf5,0xfc,0xff,0xee,0xff,0xff,0xf5,0xff,0xf9,0xff,0xff,0xff,0xf2,0xfc,0xf8,0xfe,0xfc,0xf2,0xff,0xff,0xff,0xf4,0xff,0xff,0xe5,0xff,0xff,0xef,0xff,0xf9,0xff,0xfd,0xfc,0xff,0xf4,0xff,0xee,0xf6,0xff,0xf2,0xf6,0xfd,0xff,0xf8,0xf8,0xff,0xfb,0xff,0xff,0xf7,0xff,0xe6,0xf3,0xf4,0xe4,0xee,0xe4,0xf0,0xfa,0xff,0xec,0xfa,0xf5,0xfe,0xfc,0xf2,0xff,0xff,0xff,0xf4,0xff,0xff,0xe6,0xff,0xff,0xf0,0xfe,0xf6,0xff,0xf4,0xf3,0xfc,0xf4,0xff,0xec,0xee,0xff,0xe9,0xeb,0xf4,0xfe,0xee,0xef,0xff,0xf2,0xf7,0xfa,0xf9,0xff,0xe7,0xff,0xff,0xf2,0xff,0xfa,0xff,0xfd,0xff,0xef,0xff,0xfb,0xff,0xff,0xf8,0xff,0xfb,0xf8,0xea,0xf6,0xfb,0xd4,0xfc,0xfb,0xe6,0xff,0xf9,0xff,0xfd,0xfc,0xff,0xfa,0xff,0xf2,0xf2,0xff,0xed,0xef,0xf8,0xff,0xf6,0xf6,0xff,0xfa,0xff,0xff,0xf8,0xff,0xe6,0xf9,0xf9,0xe7,0xfd,0xf1,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif