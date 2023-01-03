#ifndef NINE_IMAGE_H
#define NINE_IMAGE_H
#include <types.h>
uint8_t nine_width = 16;
uint8_t nine_height = 33;
uint8_t nine_bitmap[33 * 16 * 3] = {0xfb,0xf7,0xff,0xf3,0xf2,0xfc,0xf6,0xf8,0xec,0xff,0xff,0xe8,0xfb,0xfb,0xdd,0xfc,0xf7,0xe8,0xff,0xfb,0xff,0xf7,0xec,0xff,0xfa,0xf2,0xff,0xed,0xef,0xff,0xf4,0xff,0xfc,0xf6,0xff,0xf2,0xf3,0xff,0xe7,0xee,0xf7,0xe3,0xf1,0xf1,0xeb,0xff,0xfd,0xff,0xee,0xeb,0xff,0xf1,0xf0,0xf9,0xff,0xff,0xf7,0xfb,0xff,0xe2,0xff,0xff,0xe4,0xff,0xfe,0xf0,0xee,0xe5,0xef,0xff,0xf6,0xff,0xf7,0xef,0xff,0xfa,0xfa,0xff,0xf2,0xfb,0xf8,0xe8,0xf7,0xe2,0xeb,0xfa,0xdf,0xfc,0xff,0xf1,0xff,0xff,0xfc,0xf2,0xec,0xf1,0xfd,0xf8,0xff,0xff,0xfd,0xff,0xf2,0xf4,0xe8,0xef,0xf2,0xd8,0xfa,0xfb,0xe1,0xfa,0xf6,0xeb,0xff,0xf9,0xff,0xfc,0xf2,0xff,0xf9,0xf2,0xff,0xfa,0xfa,0xff,0xef,0xf8,0xf5,0xf8,0xff,0xf2,0xf2,0xff,0xe8,0xe5,0xed,0xdc,0xfd,0xfe,0xfa,0xff,0xfd,0xff,0xf7,0xf1,0xff,0xfd,0xfc,0xff,0xfc,0xfe,0xf2,0xff,0xff,0xed,0xff,0xff,0xf0,0xff,0xff,0xf8,0xff,0xf9,0xff,0xef,0xe6,0xfb,0xf3,0xed,0xff,0xfb,0xfb,0xff,0xf4,0xfb,0xf6,0xec,0xf8,0xe6,0xf9,0xff,0xef,0xfc,0xff,0xf4,0xf7,0xf8,0xf6,0xfd,0xfb,0xff,0xff,0xfb,0xff,0xdf,0xdc,0xde,0xfc,0xfd,0xf3,0xfe,0xff,0xed,0xf5,0xf7,0xe4,0xff,0xfd,0xf5,0xf2,0xee,0xf4,0xff,0xf9,0xff,0xff,0xf9,0xff,0xf5,0xf4,0xfd,0xfb,0xff,0xfc,0xf4,0xfe,0xee,0xe9,0xf3,0xe2,0xfd,0xff,0xf7,0xfc,0xff,0xfd,0xfa,0xfa,0xff,0xf2,0xec,0xf1,0xff,0xff,0xfe,0xe2,0xe3,0xd9,0xec,0xef,0xe0,0xea,0xec,0xe0,0x6e,0x6f,0x6b,0x0e,0x0c,0x12,0x00,0x00,0x08,0x00,0x00,0x08,0x74,0x73,0x77,0xd9,0xdb,0xd5,0xee,0xf5,0xe8,0xfb,0xff,0xf3,0xf8,0xfd,0xf4,0xe7,0xec,0xeb,0xfb,0xfe,0xff,0xfd,0xf8,0xf7,0xfb,0xf6,0xf3,0xff,0xff,0xf9,0xc0,0xc3,0xba,0x18,0x1c,0x16,0x4a,0x4d,0x4b,0xfd,0xfe,0xff,0xfe,0xfb,0xff,0xf0,0xee,0xf4,0x28,0x26,0x26,0x0b,0x0b,0x05,0xca,0xcb,0xc1,0xff,0xff,0xf8,0xec,0xf2,0xed,0xfa,0xff,0xff,0xe4,0xe7,0xef,0xff,0xff,0xf8,0xe8,0xe2,0xdb,0xe3,0xe0,0xdb,0x12,0x13,0x0f,0x1b,0x20,0x1f,0xf9,0xfe,0xff,0xf3,0xf6,0xfa,0xfc,0xfe,0xff,0xef,0xed,0xec,0xea,0xe7,0xe2,0x0b,0x08,0x00,0x1d,0x1b,0x13,0xdf,0xe1,0xdb,0xf0,0xf5,0xf4,0xef,0xf5,0xfa,0xf6,0xfe,0xff,0xfd,0xf6,0xe5,0xf7,0xf1,0xe6,0x59,0x56,0x51,0x00,0x00,0x01,0xac,0xb0,0xb5,0xec,0xf2,0xf7,0xf5,0xfa,0xfb,0xf4,0xf7,0xf5,0xfb,0xfc,0xf3,0xf2,0xf0,0xe6,0x82,0x7d,0x74,0x1a,0x16,0x11,0x6e,0x6c,0x6b,0xfb,0xfe,0xff,0xf5,0xfd,0xff,0xf2,0xfb,0xff,0xff,0xfd,0xe6,0xec,0xe5,0xd6,0x1e,0x1b,0x17,0x0a,0x0c,0x14,0xe2,0xe8,0xf3,0xeb,0xf4,0xfd,0xee,0xf8,0xf8,0xf9,0xff,0xf7,0xf8,0xf8,0xea,0xff,0xff,0xf4,0xb8,0xaf,0xa5,0x12,0x09,0x06,0x41,0x3c,0x3e,0xed,0xef,0xf7,0xf4,0xfd,0xff,0xee,0xfb,0xff,0xff,0xff,0xe6,0xcd,0xc6,0xb3,0x06,0x02,0x01,0x25,0x27,0x32,0xf4,0xfb,0xff,0xec,0xf5,0xff,0xea,0xf6,0xf6,0xfb,0xff,0xf7,0xf6,0xf8,0xe4,0xff,0xff,0xf1,0xe3,0xd9,0xcf,0x13,0x07,0x07,0x21,0x19,0x20,0xe6,0xe7,0xf1,0xf1,0xfb,0xff,0xee,0xfd,0xff,0xff,0xff,0xdf,0xb4,0xac,0x95,0x16,0x12,0x11,0x34,0x34,0x44,0xe0,0xe6,0xfd,0xea,0xf7,0xff,0xeb,0xf9,0xf7,0xf7,0xff,0xf1,0xfd,0xff,0xe6,0xff,0xfa,0xe3,0xee,0xe0,0xd4,0x21,0x13,0x15,0x21,0x17,0x23,0xed,0xed,0xfb,0xec,0xf8,0xff,0xec,0xff,0xff,0xff,0xfd,0xd5,0xc5,0xbe,0xa5,0x09,0x04,0x05,0x1f,0x20,0x34,0xd5,0xdc,0xf7,0xeb,0xf9,0xff,0xed,0xfe,0xfb,0xf4,0xff,0xeb,0xff,0xff,0xe7,0xff,0xf8,0xdd,0xe0,0xd0,0xc3,0x2a,0x19,0x1c,0x21,0x14,0x22,0xf0,0xef,0xff,0xee,0xf9,0xff,0xe8,0xfd,0xff,0xff,0xfa,0xcb,0xf1,0xe8,0xcd,0x05,0x00,0x00,0x00,0x00,0x18,0xc7,0xcf,0xed,0xe9,0xf8,0xff,0xee,0xff,0xfc,0xf5,0xff,0xeb,0xff,0xff,0xe2,0xff,0xff,0xe2,0xb5,0xa4,0x97,0x24,0x10,0x15,0x16,0x09,0x19,0xea,0xea,0xfc,0xef,0xfc,0xff,0xe2,0xf8,0xff,0xff,0xfb,0xcb,0xff,0xfa,0xdd,0x65,0x5f,0x60,0x00,0x00,0x19,0x6f,0x78,0x99,0xe2,0xf0,0xff,0xea,0xfd,0xfa,0xf6,0xff,0xea,0xfb,0xff,0xdd,0xf2,0xea,0xcc,0x62,0x51,0x44,0x1d,0x07,0x0c,0x22,0x14,0x26,0xea,0xe9,0xfd,0xef,0xfc,0xff,0xe2,0xf8,0xff,0xff,0xff,0xcd,0xf6,0xee,0xd1,0xe9,0xe3,0xe4,0x13,0x14,0x30,0x03,0x0c,0x2e,0xd7,0xe8,0xfd,0xe8,0xfb,0xf8,0xf4,0xff,0xe7,0xfa,0xff,0xda,0xcf,0xc8,0xa7,0x15,0x02,0x00,0x1b,0x05,0x0a,0x40,0x30,0x42,0xf1,0xf0,0xff,0xef,0xfc,0xff,0xe2,0xfb,0xff,0xef,0xff,0xf9,0xf2,0xff,0xfa,0xe8,0xf6,0xf0,0xb7,0xc1,0xbb,0x16,0x1b,0x19,0x30,0x30,0x30,0xd9,0xd4,0xd5,0xff,0xfb,0xfe,0xca,0xc3,0xc8,0x20,0x19,0x20,0x01,0x00,0x07,0x00,0x00,0x06,0x4a,0x4f,0x58,0xf4,0xfd,0xff,0xec,0xf6,0xff,0xf1,0xfd,0xff,0xeb,0xfe,0xf5,0xf2,0xff,0xfa,0xf4,0xff,0xfc,0xf7,0xff,0xfb,0xd7,0xdc,0xda,0x59,0x59,0x59,0x0d,0x08,0x09,0x04,0x00,0x01,0x04,0x00,0x03,0x54,0x4d,0x54,0x51,0x4e,0x57,0x14,0x16,0x1e,0x77,0x7c,0x85,0xf0,0xf9,0xff,0xf1,0xfb,0xff,0xe8,0xf4,0xfe,0xec,0xfd,0xf4,0xe1,0xf1,0xea,0xf4,0xff,0xfa,0xea,0xf4,0xee,0xee,0xf3,0xf1,0xff,0xff,0xff,0xff,0xfe,0xff,0xfa,0xf5,0xf7,0xff,0xfd,0xff,0xff,0xf8,0xff,0x26,0x24,0x2a,0x00,0x00,0x06,0xcd,0xd2,0xdb,0xf5,0xfc,0xff,0xf1,0xfc,0xff,0xf3,0xfe,0xff,0xd8,0xe8,0xe1,0xf4,0xff,0xfc,0xed,0xf9,0xf3,0xe6,0xed,0xe8,0xfd,0xff,0xfe,0xfa,0xfb,0xf9,0xe4,0xdf,0xe0,0xff,0xfe,0xff,0xf8,0xf2,0xf7,0xc9,0xc3,0xc8,0x00,0x00,0x04,0x31,0x30,0x39,0xf9,0xfc,0xff,0xf6,0xfe,0xff,0xf4,0xfd,0xff,0xe5,0xf0,0xf8,0xf4,0xff,0xfc,0xd8,0xe6,0xe0,0x6b,0x75,0x6f,0x20,0x27,0x22,0xea,0xed,0xeb,0xd7,0xd8,0xd6,0xfc,0xfa,0xfa,0xff,0xfe,0xff,0xfd,0xf8,0xfa,0x77,0x73,0x78,0x0b,0x09,0x0f,0x8d,0x8d,0x93,0xe8,0xeb,0xf3,0xeb,0xf1,0xf8,0xf4,0xfe,0xff,0xf2,0xfc,0xff,0xf1,0xfd,0xf7,0xe9,0xf5,0xef,0x27,0x31,0x2b,0x0e,0x15,0x12,0xb6,0xb9,0xb7,0xff,0xff,0xfe,0xf4,0xf2,0xf2,0xe2,0xdd,0xde,0xe6,0xe1,0xe3,0x09,0x05,0x0a,0x05,0x04,0x08,0xd5,0xd5,0xdb,0xfa,0xfe,0xff,0xf8,0xfe,0xff,0xf6,0xff,0xff,0xf3,0xfb,0xff,0xf3,0xff,0xf9,0xef,0xf9,0xf3,0x8b,0x92,0x8d,0x06,0x0b,0x09,0xf2,0xf5,0xf3,0xe4,0xe5,0xe3,0xff,0xff,0xff,0xff,0xfd,0xfd,0x48,0x45,0x47,0x1e,0x1b,0x1d,0x99,0x98,0x9c,0xfd,0xfe,0xff,0xed,0xf0,0xf4,0xf1,0xf5,0xfa,0xf3,0xf9,0xfe,0xf6,0xff,0xff,0xf0,0xfa,0xf4,0xfa,0xff,0xfc,0xf4,0xfb,0xf8,0x6f,0x74,0x72,0x9f,0xa2,0xa0,0xfc,0xfd,0xfb,0xff,0xff,0xff,0x70,0x6e,0x6e,0x06,0x04,0x04,0x5f,0x5c,0x5e,0xfe,0xfd,0xff,0xfd,0xff,0xff,0xf7,0xfa,0xfe,0xfa,0xff,0xff,0xef,0xf4,0xf7,0xf5,0xfc,0xff,0xfa,0xff,0xfe,0xf8,0xfd,0xfb,0xfb,0xff,0xfe,0xea,0xed,0xeb,0x9e,0xa1,0x9f,0x3b,0x3c,0x3a,0x09,0x07,0x06,0x09,0x07,0x07,0x9e,0x9c,0x9c,0xdb,0xd9,0xd9,0xff,0xff,0xff,0xfb,0xfd,0xfe,0xf0,0xf2,0xf3,0xf9,0xfd,0xfe,0xfb,0xff,0xff,0xf9,0xfe,0xff,0xf2,0xf7,0xf5,0xef,0xf4,0xf2,0xf7,0xfa,0xf8,0xfd,0xff,0xfe,0xff,0xff,0xfe,0xf7,0xf8,0xf6,0xf7,0xf8,0xf6,0xff,0xff,0xfe,0xea,0xe8,0xe8,0xf7,0xf7,0xf7,0xff,0xff,0xff,0xfc,0xfc,0xfc,0xf8,0xfa,0xfa,0xfc,0xfe,0xfe,0xfa,0xff,0xfe,0xf3,0xf8,0xf7,0xfd,0xff,0xfe,0xfd,0xff,0xfe,0xf9,0xfc,0xfa,0xf3,0xf4,0xf2,0xf5,0xf6,0xf4,0xfc,0xfd,0xfb,0xfa,0xfb,0xf9,0xf0,0xf1,0xef,0xff,0xff,0xfe,0xfe,0xff,0xfd,0xf5,0xf6,0xf4,0xfa,0xfb,0xf9,0xff,0xff,0xfe,0xfa,0xfc,0xfc,0xf9,0xfb,0xfb,0xfb,0xfd,0xfd,0xeb,0xec,0xea,0xfa,0xfb,0xf9,0xff,0xff,0xfe,0xfd,0xfe,0xfc,0xfb,0xfc,0xfa,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xfd,0xfe,0xfc,0xf6,0xf7,0xf5,0xf7,0xf8,0xf6,0xfe,0xff,0xfd,0xff,0xff,0xfe,0xf8,0xf9,0xf7,0xfb,0xfc,0xfa,0xff,0xff,0xfe,0xfb,0xfc,0xfa,0xfe,0xff,0xfd,0xff,0xff,0xfe,0xfb,0xfc,0xfa,0xf2,0xf3,0xf1,0xef,0xf0,0xee,0xf5,0xf6,0xf4,0xfc,0xfd,0xfb,0xf8,0xf9,0xf7,0xfd,0xfe,0xfc,0xff,0xff,0xfe,0xff,0xff,0xfc,0xfd,0xfe,0xfa,0xfb,0xfc,0xf8,0xfc,0xfd,0xf9,0xfd,0xfe,0xfa,0xff,0xff,0xfe,0xfb,0xf9,0xf8,0xf9,0xf7,0xf6,0xfe,0xff,0xfd,0xff,0xff,0xfe,0xfd,0xfe,0xfc,0xfc,0xfd,0xfb,0xff,0xff,0xfe,0xfe,0xff,0xfd,0xff,0xff,0xfc,0xfc,0xfd,0xf9,0xf5,0xf6,0xf2,0xf9,0xfa,0xf6,0xff,0xff,0xfc,0xff,0xff,0xfc,0xf7,0xf6,0xf2,0xff,0xfd,0xfd,0xf9,0xf7,0xf6,0xf8,0xf6,0xf5,0xff,0xfe,0xfd,0xff,0xff,0xfe,0xff,0xff,0xfe,0xf9,0xfa,0xf8,0xf5,0xf8,0xf6,0xfb,0xff,0xfa,0xfc,0xfd,0xf9,0xf7,0xf8,0xf4,0xf4,0xf5,0xf1,0xfa,0xf9,0xf5,0xff,0xff,0xfc,0xff,0xff,0xfb,0xfc,0xfc,0xf6,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xfe,0xfd,0xf8,0xf6,0xf5,0xf3,0xf4,0xf2,0xf7,0xf8,0xf6,0xfd,0xfe,0xfc,0xfd,0xff,0xfe,0xfb,0xff,0xfa,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xfe,0xfd,0xf9,0xf8,0xf8,0xf2,0xfc,0xfc,0xf6,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif