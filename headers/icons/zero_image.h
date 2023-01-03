#ifndef ZERO_IMAGE_H
#define ZERO_IMAGE_H
#include <types.h>
uint8_t zero_width = 16;
uint8_t zero_height = 33;
uint8_t zero_bitmap[33 * 16 * 3] = {0xf9,0xff,0xfa,0xf2,0xf6,0xea,0xf1,0xf5,0xe9,0xec,0xf9,0xf7,0xed,0xff,0xff,0xdf,0xee,0xf1,0xf8,0xff,0xfa,0xec,0xf0,0xeb,0xe2,0xe8,0xe7,0xea,0xef,0xed,0xff,0xff,0xf7,0xff,0xff,0xf5,0xee,0xed,0xe9,0xea,0xf2,0xf9,0xf6,0xfe,0xff,0xe5,0xe9,0xea,0xda,0xe2,0xdb,0xff,0xff,0xf7,0xf2,0xf6,0xeb,0xea,0xf7,0xf5,0xd7,0xe9,0xf0,0xf1,0xff,0xff,0xef,0xf6,0xf3,0xfd,0xff,0xfc,0xfa,0xff,0xff,0xef,0xf4,0xf2,0xf0,0xee,0xe4,0xff,0xfa,0xed,0xfd,0xfc,0xf8,0xea,0xf0,0xf5,0xe8,0xf0,0xf7,0xf9,0xfd,0xfe,0xfa,0xff,0xfb,0xe0,0xe6,0xdb,0xef,0xf4,0xeb,0xf6,0xff,0xff,0xed,0xfc,0xff,0xee,0xfb,0xfd,0xfa,0xff,0xfe,0xfb,0xff,0xfc,0xe2,0xe9,0xe6,0xea,0xed,0xeb,0xff,0xfe,0xf6,0xee,0xe9,0xe0,0xf8,0xf7,0xf3,0xfa,0xff,0xff,0xe3,0xe9,0xee,0xf6,0xfa,0xfb,0xf6,0xfd,0xf6,0xf1,0xf8,0xf1,0xfa,0xff,0xfb,0xe4,0xef,0xed,0xf4,0xff,0xff,0xe9,0xf3,0xf3,0xeb,0xf3,0xf2,0xfb,0xff,0xfe,0xf8,0xfd,0xfb,0xfd,0xff,0xfc,0xe7,0xe7,0xe1,0xff,0xff,0xf9,0xff,0xff,0xfc,0xe2,0xe7,0xe6,0xfb,0xff,0xff,0xf3,0xf7,0xf8,0xfb,0xff,0xfb,0xf1,0xfa,0xf7,0xec,0xf4,0xf3,0xf8,0xff,0xfe,0xe0,0xe7,0xe4,0xf8,0xff,0xff,0xf2,0xfa,0xf9,0xf4,0xfa,0xf9,0xeb,0xef,0xea,0xe8,0xea,0xe4,0xfd,0xff,0xfc,0xf9,0xfc,0xfa,0xf0,0xf3,0xf1,0xfa,0xfb,0xf7,0xf4,0xf7,0xf5,0xfa,0xfe,0xff,0xf8,0xff,0xf8,0xf6,0xff,0xff,0xdf,0xec,0xee,0xf5,0xfc,0xf9,0xfe,0xff,0xf8,0xd5,0xdb,0xd6,0x6c,0x76,0x76,0x00,0x03,0x03,0x0e,0x10,0x0a,0x35,0x36,0x2d,0xad,0xb3,0xb2,0xe7,0xee,0xf1,0xfd,0xff,0xfe,0xff,0xfe,0xf6,0xda,0xda,0xd4,0xfa,0xff,0xff,0xec,0xf3,0xec,0xf3,0xff,0xff,0xe9,0xf9,0xff,0xfb,0xff,0xfc,0xdf,0xdc,0xce,0x14,0x17,0x0e,0x3f,0x4b,0x4d,0xea,0xf3,0xf6,0xfb,0xfc,0xf3,0xae,0xaf,0xa5,0x03,0x0c,0x0f,0x5e,0x6b,0x73,0xf9,0xfe,0xfd,0xf8,0xf5,0xe7,0xff,0xff,0xf6,0xea,0xf0,0xef,0xfd,0xff,0xfc,0xe2,0xf3,0xfc,0xdf,0xf0,0xfd,0xd6,0xda,0xd5,0x25,0x1e,0x0a,0x34,0x32,0x27,0xe4,0xf0,0xf4,0xee,0xf9,0xfd,0xf3,0xf2,0xe8,0xff,0xff,0xf7,0x84,0x90,0x96,0x00,0x06,0x15,0x6e,0x74,0x73,0xff,0xfd,0xea,0xef,0xea,0xdb,0xfa,0xff,0xff,0xf9,0xfd,0xf8,0xd8,0xeb,0xfa,0xe6,0xfc,0xff,0x56,0x58,0x52,0x20,0x13,0x00,0xca,0xc5,0xb6,0xf1,0xff,0xff,0xf0,0xfc,0xff,0xff,0xfe,0xf3,0xfb,0xfa,0xec,0xef,0xfe,0xff,0x35,0x4e,0x62,0x00,0x01,0x01,0xd2,0xc8,0xb0,0xff,0xff,0xee,0xe6,0xee,0xed,0xfd,0xff,0xfc,0xd5,0xeb,0xfd,0xa6,0xbe,0xd6,0x2f,0x30,0x27,0x57,0x44,0x23,0xed,0xe6,0xd3,0xec,0xfc,0xff,0xec,0xf9,0xff,0xff,0xff,0xf4,0xf9,0xf6,0xe7,0xe8,0xfb,0xff,0x72,0x8f,0xaa,0x00,0x05,0x05,0x7c,0x6e,0x51,0xf9,0xef,0xd7,0xf6,0xfe,0xfd,0xff,0xff,0xfc,0xd4,0xec,0xff,0x54,0x71,0x8c,0x09,0x07,0x00,0x99,0x7f,0x5a,0xff,0xfe,0xe8,0xe5,0xf4,0xfd,0xec,0xfb,0xff,0xff,0xff,0xf2,0xfc,0xf8,0xe6,0xdd,0xf4,0xff,0xac,0xcf,0xf0,0x06,0x12,0x14,0x2c,0x1c,0x00,0xe6,0xdb,0xbd,0xf8,0xff,0xff,0xfa,0xfb,0xf7,0xcc,0xe7,0xff,0x22,0x41,0x62,0x05,0x03,0x00,0xc9,0xac,0x80,0xff,0xfe,0xe4,0xdf,0xef,0xfb,0xec,0xfc,0xff,0xff,0xf9,0xe8,0xff,0xff,0xec,0xd3,0xec,0xff,0xbc,0xe3,0xff,0x22,0x2f,0x31,0x1c,0x09,0x00,0xce,0xbf,0x9e,0xea,0xf5,0xf2,0xfa,0xfb,0xf7,0xb9,0xd5,0xf4,0x04,0x24,0x48,0x0c,0x0a,0x00,0xea,0xc9,0x98,0xff,0xfa,0xdf,0xe3,0xf4,0xff,0xe7,0xf8,0xff,0xfe,0xf7,0xe4,0xff,0xff,0xef,0xd1,0xec,0xff,0xb8,0xe4,0xff,0x45,0x54,0x57,0x29,0x13,0x00,0xa2,0x90,0x6b,0xe7,0xf2,0xef,0xfd,0xfe,0xfc,0xa6,0xc2,0xe4,0x00,0x0e,0x36,0x14,0x0f,0x06,0xff,0xe0,0xae,0xff,0xfe,0xe1,0xe8,0xf8,0xff,0xe1,0xf4,0xff,0xff,0xfa,0xe6,0xff,0xff,0xec,0xd3,0xf2,0xff,0xb9,0xe8,0xff,0x60,0x6f,0x72,0x2b,0x14,0x00,0x74,0x62,0x39,0xf3,0xfe,0xfb,0xfd,0xfb,0xfa,0xa1,0xbf,0xe2,0x00,0x09,0x34,0x13,0x0f,0x04,0xff,0xed,0xb7,0xff,0xfc,0xdd,0xdc,0xef,0xfe,0xe5,0xf8,0xff,0xff,0xfa,0xe6,0xff,0xfd,0xe9,0xd4,0xf3,0xff,0xb6,0xe7,0xff,0x63,0x74,0x77,0x2d,0x16,0x00,0x6c,0x59,0x2e,0xf6,0xff,0xfe,0xf7,0xf5,0xf4,0xa6,0xc6,0xea,0x00,0x11,0x3c,0x11,0x0d,0x02,0xff,0xf0,0xb9,0xff,0xf1,0xd1,0xcc,0xdf,0xee,0xea,0xfd,0xff,0xff,0xf7,0xe3,0xff,0xfd,0xe9,0xd1,0xf0,0xff,0xaf,0xe0,0xff,0x5c,0x6d,0x70,0x38,0x1f,0x00,0x7c,0x69,0x3e,0xed,0xf8,0xf5,0xf5,0xf0,0xf9,0xbb,0xe7,0xff,0x00,0x14,0x29,0x1d,0x1b,0x10,0xff,0xe0,0xba,0xff,0xea,0xce,0xdf,0xff,0xfb,0xd9,0xf8,0xf7,0xff,0xf8,0xec,0xff,0xf8,0xf1,0xd0,0xf1,0xff,0xb9,0xf6,0xff,0x51,0x5f,0x5e,0x3e,0x15,0x00,0x82,0x64,0x41,0xec,0xfd,0xe8,0xfd,0xfc,0xff,0xa8,0xd2,0xe9,0x00,0x20,0x34,0x06,0x06,0x00,0xda,0xae,0x89,0xff,0xff,0xe5,0xca,0xe8,0xe3,0xe1,0xfb,0xfb,0xff,0xff,0xf3,0xfd,0xed,0xe6,0xd1,0xf2,0xff,0xc1,0xfa,0xff,0x42,0x50,0x4f,0x36,0x10,0x00,0x95,0x79,0x56,0xf4,0xff,0xee,0xe3,0xe6,0xee,0xd6,0xfb,0xff,0x1b,0x45,0x58,0x0e,0x0e,0x02,0xd9,0xb7,0x93,0xff,0xfd,0xe2,0xcb,0xe0,0xdd,0xec,0xff,0xff,0xff,0xff,0xf5,0xff,0xfa,0xf3,0xd2,0xee,0xff,0xb8,0xe8,0xff,0x1c,0x28,0x28,0x28,0x0a,0x00,0xce,0xb8,0x95,0xfd,0xff,0xf2,0xf0,0xfc,0xff,0xcd,0xea,0xff,0x5f,0x7d,0x8e,0x0d,0x0e,0x04,0x87,0x71,0x4e,0xf6,0xeb,0xd0,0xf4,0xff,0xfe,0xef,0xfd,0xfc,0xfa,0xf8,0xed,0xff,0xff,0xf9,0xd4,0xee,0xfc,0xb2,0xd4,0xeb,0x09,0x15,0x15,0x2a,0x18,0x00,0xf7,0xe5,0xc6,0xff,0xff,0xf1,0xe9,0xfc,0xff,0xc8,0xde,0xf0,0xc0,0xd0,0xe0,0x19,0x1d,0x12,0x3b,0x33,0x15,0xff,0xff,0xee,0xec,0xf0,0xeb,0xf3,0xf9,0xf8,0xf4,0xfa,0xef,0xf3,0xfe,0xf6,0xea,0xfd,0xff,0x89,0x9e,0xb3,0x06,0x11,0x0f,0x62,0x5e,0x42,0xf6,0xeb,0xcf,0xff,0xfc,0xed,0xd0,0xeb,0xef,0xe7,0xf7,0xff,0xf6,0xfc,0xff,0x75,0x7a,0x71,0x05,0x0a,0x00,0xca,0xc9,0xb4,0xfb,0xf5,0xf0,0xff,0xff,0xfe,0xf2,0xff,0xf5,0xef,0xff,0xfc,0xe9,0xf8,0xff,0x2e,0x36,0x47,0x07,0x0f,0x0e,0xc5,0xcd,0xb6,0xfb,0xfa,0xe0,0xff,0xf5,0xe7,0xe3,0xff,0xff,0xdf,0xe8,0xf2,0xf9,0xf4,0xfd,0xd7,0xdf,0xd5,0x09,0x1b,0x04,0x2b,0x2f,0x1c,0xf8,0xe9,0xe6,0xfc,0xf5,0xf2,0xed,0xff,0xf7,0xda,0xf6,0xf0,0x8b,0x95,0x9c,0x16,0x12,0x1e,0x64,0x6b,0x68,0xf4,0xff,0xf4,0xff,0xff,0xef,0xff,0xf5,0xe8,0xd4,0xf6,0xf6,0xfb,0xfe,0xff,0xff,0xf5,0xf9,0xf1,0xf8,0xf1,0xcf,0xe9,0xd7,0x0d,0x14,0x05,0x69,0x56,0x4f,0xfd,0xf2,0xee,0xe3,0xfb,0xf3,0xa7,0xc7,0xc2,0x0f,0x14,0x17,0x5c,0x50,0x56,0xfb,0xff,0xfe,0xe1,0xfc,0xec,0xe7,0xf1,0xe0,0xff,0xfc,0xf0,0xe1,0xff,0xff,0xfc,0xf9,0xfb,0xff,0xf1,0xf0,0xf4,0xfc,0xf5,0xe8,0xff,0xfb,0xd5,0xdf,0xd3,0x81,0x6c,0x64,0x0d,0x01,0x00,0x00,0x07,0x01,0x2a,0x4b,0x47,0xa2,0xa4,0xa4,0xf9,0xe7,0xe8,0xfb,0xff,0xfc,0xe6,0xff,0xfb,0xf0,0xfe,0xf2,0xff,0xf6,0xea,0xe0,0xff,0xff,0xff,0xff,0xfc,0xff,0xfb,0xf4,0xed,0xf4,0xef,0xdb,0xfb,0xf6,0xf6,0xff,0xfb,0xff,0xfc,0xf1,0xf8,0xed,0xe5,0xea,0xff,0xff,0xe3,0xff,0xff,0xfe,0xff,0xfb,0xff,0xfb,0xf4,0xf7,0xfb,0xf6,0xdd,0xfd,0xf8,0xec,0xfc,0xf5,0xff,0xf9,0xec,0xde,0xf7,0xf9,0xff,0xfd,0xf3,0xff,0xfe,0xf1,0xf3,0xfd,0xf7,0xde,0xfc,0xfd,0xf2,0xff,0xfc,0xff,0xff,0xf4,0xff,0xff,0xf6,0xec,0xff,0xff,0xdd,0xf9,0xfa,0xf2,0xf3,0xea,0xff,0xf4,0xe7,0xf8,0xfc,0xf6,0xe6,0xff,0xff,0xed,0xfe,0xfb,0xff,0xf7,0xeb,0xef,0xff,0xff,0xfb,0xfa,0xec,0xfe,0xf4,0xe2,0xef,0xf8,0xf5,0xe6,0xfd,0xff,0xee,0xfa,0xfa,0xf9,0xf2,0xe1,0xec,0xe9,0xdb,0xea,0xfc,0xfd,0xe9,0xfd,0xff,0xff,0xff,0xf7,0xff,0xff,0xee,0xf9,0xfd,0xf7,0xe3,0xf8,0xff,0xe8,0xf7,0xf9,0xfe,0xf8,0xeb,0xf2,0xfb,0xff,0xfd,0xfd,0xeb,0xff,0xff,0xe8,0xf8,0xff,0xfe,0xec,0xfc,0xff,0xf0,0xfc,0xfe,0xff,0xff,0xef,0xff,0xff,0xf4,0xe2,0xed,0xf1,0xe5,0xf0,0xf8,0xf8,0xf8,0xea,0xff,0xfc,0xe3,0xf2,0xf7,0xee,0xe3,0xf3,0xff,0xef,0xfb,0xff,0xff,0xff,0xf5,0xf4,0xf7,0xfc,0xfd,0xff,0xeb,0xff,0xff,0xe8,0xfa,0xff,0xff,0xee,0xf7,0xff,0xea,0xf4,0xfb,0xef,0xf8,0xe3,0xf1,0xf7,0xe6,0xf8,0xfe,0xff,0xf6,0xfb,0xff,0xfe,0xff,0xef,0xff,0xff,0xe7,0xfd,0xff,0xf9,0xf3,0xfb,0xff,0xeb,0xf5,0xff,0xea,0xf5,0xe5,0xff,0xfd,0xff,0xfe,0xff,0xeb,0xf0,0xf8,0xd9,0xe5,0xeb,0xea,0xe6,0xea,0xff,0xf1,0xfb,0xff,0xf9,0xff,0xf0,0xf7,0xff,0xee,0xf4,0xf6,0xfe,0xea,0xe8,0xf4,0xe2,0xe6,0xd3,0xe4,0xeb,0xc8,0xea,0xef,0xe6,0xf0,0xf3,0xff,0xf4,0xfc,0xff,0xf4,0xff,0xf5,0xf5,0xee,0xf3,0xf9,0xff,0xe6,0xf8,0xff,0xe4,0xf2,0xf8,0xf7,0xee,0xef,0xff,0xf0,0xf9,0xff,0xf0,0xff,0xeb,0xed,0xf9,0xe5,0xfa,0xf9,0xff,0xfc,0xf8,0xff,0xfe,0xff,0xef,0xfd,0xff,0xe3,0xf7,0xfc,0xf3,0xf0,0xf1,0xff,0xe9,0xf1,0xfe,0xe7,0xfa,0xe9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif