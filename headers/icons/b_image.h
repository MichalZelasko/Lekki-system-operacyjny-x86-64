#ifndef B_IMAGE_H
#define B_IMAGE_H
#include <types.h>
uint8_t b_width = 16;
uint8_t b_height = 33;
uint8_t b_bitmap[33 * 16 * 3] = {0xf2,0xf1,0xed,0xff,0xff,0xfe,0xf4,0xf8,0xf9,0xf6,0xfc,0xff,0xf5,0xfd,0xff,0xe8,0xf0,0xf7,0xf8,0xfe,0xff,0xf0,0xf2,0xf2,0xff,0xfe,0xfa,0xff,0xff,0xf5,0xff,0xfd,0xf4,0xff,0xfe,0xf5,0xff,0xff,0xfa,0xfd,0xff,0xff,0xf7,0xfd,0xff,0xf4,0xfc,0xff,0xff,0xff,0xfc,0xfa,0xfb,0xf9,0xeb,0xef,0xf0,0xf1,0xf7,0xfc,0xf6,0xfe,0xff,0xf5,0xfd,0xff,0xf6,0xfc,0xff,0xf0,0xf5,0xf4,0xff,0xfe,0xfa,0xff,0xfe,0xf6,0xff,0xfd,0xf4,0xff,0xff,0xf5,0xff,0xff,0xfa,0xfd,0xff,0xff,0xf7,0xfe,0xff,0xf4,0xfc,0xff,0xf9,0xf8,0xf4,0xf9,0xfa,0xf8,0xfb,0xff,0xff,0xf8,0xfe,0xff,0xee,0xf6,0xfd,0xf1,0xf9,0xff,0xee,0xf4,0xf9,0xfb,0xff,0xff,0xff,0xfe,0xfa,0xff,0xfe,0xf6,0xff,0xfd,0xf4,0xff,0xfe,0xf6,0xff,0xff,0xfa,0xfd,0xff,0xff,0xf7,0xfd,0xff,0xf4,0xfc,0xff,0xff,0xff,0xfb,0xff,0xff,0xfc,0xf3,0xf5,0xf5,0xf3,0xfa,0xfd,0xef,0xf7,0xfe,0xf6,0xfe,0xff,0xf8,0xfe,0xff,0xf5,0xf9,0xfa,0xff,0xfe,0xfa,0xff,0xfe,0xf6,0xff,0xfd,0xf4,0xff,0xfe,0xf6,0xff,0xff,0xfb,0xfd,0xff,0xff,0xf7,0xfd,0xff,0xf4,0xfc,0xff,0xef,0xec,0xe4,0xfa,0xfa,0xf4,0xe6,0xe8,0xe8,0xfa,0xff,0xff,0xe9,0xf1,0xf8,0xec,0xf4,0xfb,0xf5,0xfb,0xff,0xfb,0xff,0xff,0xfd,0xfe,0xfc,0xff,0xfd,0xf8,0xff,0xfd,0xf5,0xff,0xfe,0xf6,0xff,0xff,0xfb,0xfd,0xff,0xff,0xf7,0xfd,0xff,0xf4,0xfc,0xff,0xff,0xfb,0xf2,0xff,0xff,0xfb,0xf3,0xf4,0xf2,0xfa,0xff,0xff,0xf1,0xf9,0xff,0xf4,0xfe,0xff,0xe5,0xed,0xf4,0xe8,0xed,0xf0,0xfd,0xfe,0xfc,0xff,0xfd,0xf8,0xff,0xfd,0xf5,0xff,0xfd,0xf8,0xff,0xff,0xfb,0xfd,0xff,0xff,0xf7,0xfd,0xff,0xf4,0xfc,0xff,0xdd,0xd7,0xcc,0x94,0x91,0x89,0x3a,0x39,0x35,0x00,0x00,0x01,0x18,0x21,0x25,0xd5,0xde,0xe7,0xf1,0xf9,0xff,0xfa,0xff,0xff,0xfb,0xfd,0xfd,0xfe,0xfd,0xf9,0xff,0xfc,0xf7,0xff,0xfd,0xf8,0xfe,0xff,0xfb,0xfb,0xff,0xff,0xf7,0xfe,0xff,0xf4,0xfc,0xff,0xff,0xfe,0xf1,0xfd,0xf8,0xef,0xcf,0xcf,0xc9,0x17,0x1b,0x1c,0x07,0x0d,0x12,0xeb,0xf4,0xfd,0xe5,0xef,0xf6,0xf0,0xf6,0xfb,0xf9,0xfd,0xfe,0xfc,0xfd,0xfb,0xfd,0xfd,0xf7,0xfe,0xfe,0xf8,0xfe,0xff,0xfd,0xfb,0xff,0xff,0xf7,0xfe,0xff,0xf4,0xfc,0xff,0xfc,0xf3,0xe5,0xf7,0xf1,0xe6,0xcf,0xcc,0xc7,0x0a,0x0c,0x0c,0x06,0x0c,0x11,0xe3,0xec,0xf5,0xe8,0xf1,0xfa,0xf6,0xff,0xff,0xfb,0xff,0xff,0xfd,0xfe,0xfc,0xff,0xfe,0xfa,0xf2,0xf1,0xed,0xfc,0xfd,0xfb,0xfb,0xff,0xff,0xe1,0xe8,0xeb,0xf2,0xfa,0xff,0xff,0xff,0xef,0xff,0xfb,0xec,0xcb,0xc8,0xc0,0x00,0x00,0x00,0x00,0x02,0x07,0xf1,0xfa,0xff,0xe3,0xec,0xf5,0xe3,0xeb,0xf2,0xf7,0xfc,0xff,0xf9,0xfb,0xfb,0xf9,0xfa,0xf8,0xff,0xff,0xfc,0xfb,0xfc,0xfa,0xfb,0xff,0xff,0xf8,0xff,0xff,0xed,0xf6,0xfa,0xf3,0xe8,0xd4,0xfc,0xf3,0xe5,0xcc,0xc7,0xbe,0x09,0x0a,0x08,0x1d,0x23,0x28,0xcc,0xd5,0xde,0xf3,0xfe,0xff,0xf2,0xfb,0xff,0xf2,0xf8,0xfd,0xe8,0xec,0xed,0xff,0xff,0xfe,0xff,0xff,0xfe,0xf0,0xf2,0xf2,0xf3,0xf7,0xf8,0xe4,0xeb,0xee,0xed,0xf3,0xf8,0xff,0xff,0xec,0xff,0xf6,0xe5,0xc5,0xbf,0xb4,0x00,0x01,0x00,0x0b,0x12,0x15,0xcf,0xd8,0xe1,0xef,0xf9,0xff,0xeb,0xf4,0xfd,0xf3,0xf9,0xfe,0xfb,0xff,0xff,0xea,0xec,0xec,0xf5,0xf6,0xf4,0xf7,0xf9,0xf9,0xf2,0xf6,0xf7,0xfa,0xff,0xff,0xf8,0xfe,0xff,0xff,0xfe,0xe8,0xfd,0xf1,0xdf,0xd6,0xd0,0xc5,0x0b,0x0a,0x06,0x00,0x02,0x05,0xf4,0xfd,0xff,0xde,0xe8,0xf2,0xf3,0xfe,0xff,0xf3,0xfb,0xff,0xf9,0xfe,0xff,0xf5,0xf7,0xf7,0xf0,0xf2,0xf2,0xfd,0xff,0xff,0xfb,0xff,0xff,0xe7,0xee,0xf1,0xe4,0xea,0xef,0xff,0xff,0xea,0xf9,0xeb,0xd8,0xc2,0xba,0xad,0x11,0x10,0x0c,0x10,0x15,0x18,0x56,0x5f,0x68,0x38,0x42,0x4c,0x00,0x07,0x11,0x14,0x1c,0x23,0x14,0x19,0x1c,0x79,0x7e,0x7d,0xfb,0xfd,0xfd,0xfa,0xfc,0xfc,0xe3,0xe7,0xe8,0xf8,0xff,0xff,0xf8,0xfe,0xff,0xfb,0xeb,0xd4,0xff,0xfa,0xe7,0xd2,0xca,0xbd,0x06,0x05,0x01,0x00,0x04,0x07,0x2e,0x37,0x40,0xc8,0xd4,0xde,0xee,0xf8,0xff,0xde,0xe6,0xed,0xdd,0xe2,0xe5,0x00,0x04,0x05,0x2f,0x31,0x31,0xea,0xec,0xec,0xe9,0xed,0xee,0xf1,0xf8,0xfb,0xeb,0xf1,0xf6,0xff,0xfd,0xe3,0xff,0xf2,0xdf,0xd2,0xca,0xbd,0x04,0x03,0x00,0x07,0x0c,0x0f,0xe8,0xf1,0xfa,0xe1,0xed,0xf7,0xe8,0xf2,0xfc,0xf4,0xfe,0xff,0xd4,0xdb,0xde,0xc3,0xc7,0xc8,0x0e,0x10,0x10,0x2c,0x2e,0x2e,0xfa,0xfe,0xff,0xf3,0xfa,0xfd,0xf8,0xfe,0xff,0xfb,0xff,0xfc,0xff,0xf1,0xc7,0xe0,0xc1,0x94,0x03,0x0c,0x1a,0x00,0x17,0x54,0xce,0xe9,0xff,0xfd,0xf4,0xe7,0xff,0xfc,0xe9,0xe8,0xfe,0xff,0xd7,0xed,0xf3,0xff,0xf4,0xc9,0x73,0x4d,0x0c,0x0b,0x05,0x00,0x65,0x86,0xad,0xdd,0xf7,0xff,0xff,0xf9,0xfa,0xfb,0xff,0xfc,0xff,0xf1,0xc7,0xe0,0xc0,0x95,0x03,0x0c,0x19,0x00,0x16,0x51,0xce,0xea,0xff,0xfd,0xf4,0xe7,0xff,0xfc,0xe9,0xe0,0xf6,0xff,0xea,0xff,0xff,0xff,0xf6,0xcb,0xbc,0x98,0x58,0x17,0x11,0x00,0x16,0x35,0x5c,0xce,0xe5,0xff,0xff,0xfe,0xff,0xf9,0xff,0xfa,0xff,0xf1,0xc9,0xdf,0xc1,0x98,0x02,0x0b,0x18,0x00,0x14,0x4e,0xcf,0xe9,0xff,0xfd,0xf5,0xe8,0xff,0xfc,0xeb,0xde,0xf4,0xff,0xea,0xff,0xff,0xff,0xf8,0xce,0xf3,0xd2,0x93,0x1e,0x1a,0x08,0x00,0x04,0x29,0xb8,0xd0,0xf4,0xff,0xfe,0xff,0xf8,0xff,0xf8,0xff,0xf2,0xcc,0xdc,0xc2,0x9a,0x02,0x0b,0x15,0x00,0x15,0x49,0xd3,0xea,0xff,0xfe,0xf5,0xeb,0xff,0xfd,0xec,0xea,0xff,0xff,0xe5,0xf9,0xfe,0xff,0xf9,0xd1,0xf6,0xd8,0x9d,0x1b,0x17,0x05,0x00,0x11,0x33,0xb1,0xc5,0xe8,0xff,0xfd,0xfe,0xf8,0xfc,0xf6,0xff,0xf1,0xce,0xda,0xc2,0x9e,0x01,0x0a,0x14,0x00,0x14,0x44,0xd5,0xea,0xff,0xfe,0xf8,0xed,0xff,0xfe,0xef,0xec,0xff,0xff,0xe6,0xfa,0xff,0xff,0xfa,0xd5,0xf3,0xd9,0xa3,0x19,0x16,0x07,0x00,0x11,0x31,0xb2,0xc6,0xe5,0xff,0xfc,0xff,0xf7,0xfb,0xf5,0xff,0xf1,0xd2,0xd7,0xc2,0xa2,0x02,0x09,0x12,0x00,0x13,0x3c,0xd8,0xeb,0xff,0xfd,0xf8,0xef,0xff,0xff,0xf1,0xe1,0xf3,0xfa,0xed,0xff,0xff,0xff,0xfc,0xdb,0xea,0xd4,0xa4,0x1b,0x1a,0x0c,0x00,0x05,0x21,0xc0,0xd1,0xec,0xff,0xfd,0xff,0xf6,0xfa,0xf4,0xff,0xf2,0xd6,0xd5,0xc3,0xa6,0x03,0x09,0x10,0x00,0x13,0x37,0xdc,0xec,0xff,0xfc,0xf9,0xf1,0xff,0xff,0xf4,0xe5,0xf5,0xfb,0xef,0xff,0xff,0xff,0xfc,0xdf,0xac,0x9a,0x71,0x11,0x11,0x05,0x22,0x37,0x4d,0xd9,0xe7,0xfe,0xff,0xfd,0xff,0xf7,0xfa,0xf1,0xfd,0xf1,0xd9,0xd2,0xc2,0xab,0x05,0x09,0x0e,0x00,0x14,0x30,0xe1,0xed,0xff,0xfd,0xf9,0xf4,0xff,0xff,0xf6,0xf1,0xff,0xff,0xe2,0xf2,0xf1,0xfc,0xfb,0xe1,0x5b,0x4f,0x2d,0x02,0x03,0x00,0x78,0x87,0x9a,0xef,0xfa,0xff,0xfe,0xf8,0xfd,0xfc,0xff,0xf6,0xff,0xfb,0xe7,0xc4,0xb9,0xa5,0x0e,0x11,0x15,0x00,0x09,0x1f,0xde,0xe7,0xf5,0xfe,0xfb,0xf7,0xf7,0xf8,0xef,0xf3,0xff,0xff,0xda,0xe8,0xe6,0xd0,0xd1,0xbd,0x13,0x0c,0x00,0x27,0x2a,0x21,0xef,0xfc,0xff,0xf3,0xfb,0xff,0xf8,0xf2,0xf7,0xf1,0xf5,0xea,0xff,0xfb,0xea,0xb4,0xab,0x9d,0x0d,0x0f,0x10,0x00,0x08,0x16,0x1a,0x20,0x2b,0xe1,0xdf,0xde,0xfc,0xfe,0xf8,0xe3,0xef,0xef,0xd0,0xdf,0xdb,0x00,0x06,0x00,0x38,0x37,0x22,0xea,0xee,0xe8,0xdc,0xe6,0xf0,0xf2,0xf8,0xff,0xff,0xfd,0xff,0xfe,0xff,0xf5,0xd5,0xd2,0xc4,0x84,0x80,0x75,0x03,0x03,0x03,0x00,0x00,0x07,0x8b,0x8e,0x96,0x35,0x36,0x34,0x00,0x02,0x00,0x03,0x0e,0x0c,0x20,0x2e,0x28,0x97,0xa0,0x93,0xff,0xff,0xf5,0xf8,0xfc,0xf7,0xe7,0xed,0xf4,0xfa,0xfc,0xff,0xe7,0xe3,0xe9,0xf5,0xf6,0xec,0xd1,0xd0,0xc6,0xd9,0xd7,0xcf,0xe5,0xe3,0xe2,0xeb,0xec,0xf0,0xfd,0xfe,0xff,0xe8,0xea,0xea,0xfb,0xff,0xfe,0xee,0xf7,0xf4,0xef,0xfb,0xf5,0xec,0xf7,0xed,0xea,0xf2,0xe8,0xf7,0xfd,0xf8,0xfb,0xff,0xff,0xf7,0xf7,0xfd,0xff,0xfd,0xff,0xf8,0xf9,0xef,0xff,0xff,0xf9,0xf8,0xf9,0xf5,0xe6,0xe2,0xe1,0xfe,0xfa,0xf9,0xda,0xd8,0xd8,0xfb,0xff,0xff,0xe8,0xee,0xed,0xf3,0xfa,0xf5,0xf8,0xff,0xfb,0xeb,0xf7,0xf1,0xf6,0xff,0xfe,0xfa,0xff,0xfe,0xf0,0xf0,0xf0,0xff,0xfe,0xff,0xf1,0xed,0xf3,0xff,0xff,0xf5,0xeb,0xef,0xea,0xf3,0xf6,0xf4,0xff,0xff,0xfc,0xfe,0xf8,0xf3,0xff,0xff,0xfe,0xe4,0xe8,0xe9,0xf8,0xff,0xff,0xe9,0xf1,0xea,0xe6,0xf1,0xe9,0xf3,0xff,0xfe,0xdc,0xea,0xe9,0xd8,0xe0,0xdf,0xff,0xff,0xfc,0xff,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xf7,0xfa,0xff,0xfb,0xf7,0xfc,0xfb,0xff,0xff,0xfc,0xff,0xff,0xf6,0xf6,0xf1,0xee,0xf3,0xf6,0xfa,0xf8,0xff,0xff,0xfb,0xff,0xfb,0xed,0xf6,0xec,0xe4,0xf5,0xf2,0xef,0xff,0xff,0xf8,0xff,0xff,0xfc,0xf9,0xf4,0xff,0xfd,0xfc,0xf5,0xf3,0xf9,0xf4,0xf4,0xe8,0xfb,0xff,0xfe,0xf8,0xfc,0xfd,0xfc,0xf8,0xf3,0xff,0xf6,0xee,0xf7,0xf3,0xee,0xfa,0xff,0xff,0xf7,0xff,0xff,0xf4,0xfb,0xf4,0xf6,0xff,0xf5,0xf0,0xff,0xfe,0xda,0xed,0xf0,0xf1,0xf9,0xf8,0xff,0xff,0xfb,0xf6,0xf1,0xf0,0xff,0xfd,0xff,0xfc,0xfe,0xf8,0xfc,0xfe,0xf8,0xfc,0xfd,0xf9,0xfd,0xfe,0xfa,0xfd,0xfe,0xfc,0xfe,0xfe,0xfe,0xfe,0xfd,0xff,0xfe,0xfd,0xff,0xff,0xfe,0xff,0xfe,0xfd,0xff,0xfe,0xfe,0xfe,0xfd,0xfe,0xfc,0xfd,0xfe,0xfa,0xfe,0xff,0xfb,0xfe,0xff,0xfa,0xff,0xff,0xfb,};
#endif