#ifndef POWER_H
#define POWER_H
#include <types.h>
uint8_t power_width = 19;
uint8_t power_height = 33;
uint8_t power_bitmap[33 * 19 * 3] = {0xff,0xff,0xf4,0xfc,0xff,0xfb,0xfb,0xfe,0xff,0xfd,0xfd,0xff,0xff,0xff,0xfe,0xff,0xff,0xfb,0xff,0xfe,0xfd,0xff,0xfc,0xff,0xff,0xfb,0xff,0xff,0xff,0xfe,0xf4,0xff,0xf9,0xf1,0xff,0xfb,0xfa,0xfe,0xff,0xff,0xfa,0xff,0xff,0xfa,0xff,0xfb,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xfc,0xf9,0xfb,0xfc,0xfa,0xf9,0xfd,0xff,0xfe,0xff,0xfd,0xfe,0xfa,0xff,0xff,0xfc,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfd,0xff,0xf7,0xff,0xfb,0xf6,0xff,0xfc,0xff,0xfe,0xff,0xff,0xfa,0xff,0xff,0xfc,0xff,0xf7,0xfd,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xff,0xfe,0xfd,0xff,0xfe,0xff,0xff,0xff,0xff,0xfe,0xff,0xfb,0xff,0xff,0xf8,0xff,0xfe,0xfb,0xfe,0xfc,0xff,0xfd,0xff,0xff,0xfd,0xff,0xfb,0xfc,0xfa,0xfd,0xff,0xfe,0xff,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xf8,0xff,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xf9,0xfd,0xfe,0xfb,0xff,0xfe,0xff,0xff,0xfc,0xfe,0xfa,0xf9,0xf8,0xff,0xff,0xed,0xff,0xff,0xf0,0xff,0xff,0xff,0xfd,0xfc,0xff,0xfe,0xfc,0xff,0xfe,0xfc,0xff,0xfb,0xfc,0xff,0xfe,0xff,0xff,0xff,0xfe,0xfc,0xff,0xfb,0xf6,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xf7,0xfd,0xff,0xf6,0xfd,0xff,0xff,0xff,0xf9,0xff,0xff,0xf7,0xf4,0xff,0xff,0xd1,0xef,0xff,0xa2,0xbc,0xcc,0x9d,0x9e,0x9c,0xce,0xb9,0xaa,0xfe,0xe8,0xdd,0xff,0xfa,0xfb,0xff,0xfe,0xff,0xff,0xff,0xfb,0xfe,0xff,0xf8,0xf3,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xf8,0xfd,0xff,0xf6,0xfd,0xff,0xff,0xff,0xf8,0xff,0xff,0xf4,0xf0,0xfe,0xff,0xbb,0xde,0xff,0x32,0x4f,0x6e,0x14,0x16,0x17,0x66,0x4d,0x33,0xd7,0xb9,0xa0,0xff,0xff,0xf7,0xff,0xfe,0xfe,0xff,0xfd,0xf8,0xff,0xff,0xfb,0xf8,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xfb,0xfd,0xff,0xfb,0xfc,0xff,0xff,0xff,0xfa,0xfb,0xff,0xf3,0xe2,0xf5,0xfc,0x9f,0xbc,0xe3,0x03,0x1b,0x45,0x04,0x06,0x0e,0x45,0x2f,0x13,0xab,0x8c,0x65,0xff,0xff,0xe9,0xff,0xff,0xf8,0xfd,0xfe,0xfc,0xfd,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xff,0xfc,0xff,0xfd,0xff,0xff,0xf9,0xff,0xfa,0xff,0xff,0xec,0xff,0xff,0xc2,0xd8,0xe4,0x6a,0x77,0x97,0x07,0x10,0x32,0x33,0x36,0x44,0x40,0x37,0x23,0x72,0x56,0x2d,0xff,0xdd,0xb9,0xff,0xfc,0xec,0xfa,0xff,0xff,0xf9,0xfc,0xff,0xff,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xff,0xfe,0xff,0xff,0xf9,0xff,0xfc,0xfa,0xef,0xfb,0xff,0xd4,0xfe,0xff,0xa3,0xbd,0xce,0x41,0x39,0x44,0x40,0x31,0x3f,0x80,0x87,0x96,0x54,0x5c,0x5b,0x53,0x3e,0x23,0xd4,0xab,0x84,0xff,0xfa,0xe0,0xf9,0xff,0xfa,0xfa,0xfe,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xff,0xff,0xff,0xff,0xf4,0xff,0xff,0xf5,0xe7,0xfb,0xff,0xab,0xdf,0xff,0x7b,0x93,0xa9,0x3b,0x1f,0x14,0x8b,0x6a,0x5a,0xba,0xc4,0xcb,0x6e,0x86,0x9c,0x41,0x39,0x3a,0x91,0x65,0x48,0xff,0xeb,0xc8,0xff,0xff,0xf2,0xfa,0xff,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf2,0xfd,0xff,0xff,0xfe,0xf2,0xff,0xff,0xf7,0xe3,0xfa,0xff,0x87,0xba,0xec,0x54,0x64,0x7b,0x45,0x1f,0x01,0xd8,0xb1,0x85,0xe2,0xe9,0xe4,0x82,0xa6,0xcc,0x3b,0x42,0x63,0x3f,0x1b,0x13,0xe4,0xbd,0x96,0xff,0xfc,0xda,0xff,0xff,0xfb,0xfb,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xfe,0xff,0xff,0xff,0xf9,0xff,0xff,0xfe,0xdd,0xf5,0xff,0x73,0x97,0xc5,0x3c,0x40,0x52,0x73,0x4e,0x28,0xff,0xed,0xb5,0xff,0xff,0xf3,0xb5,0xd7,0xff,0x68,0x7b,0xb4,0x1a,0x07,0x16,0xa1,0x7c,0x56,0xfb,0xe2,0xb0,0xff,0xff,0xf4,0xf1,0xf9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xf6,0xfb,0xfc,0xec,0xfd,0xff,0xc1,0xd8,0xf2,0x5d,0x6a,0x8a,0x32,0x28,0x2e,0xa1,0x85,0x62,0xff,0xfd,0xca,0xff,0xff,0xec,0xd5,0xef,0xff,0x83,0xa0,0xdd,0x0e,0x12,0x2e,0x61,0x45,0x26,0xed,0xcb,0x96,0xff,0xff,0xef,0xea,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xeb,0xfe,0xff,0xda,0xfd,0xff,0x8b,0x9d,0xb4,0x43,0x39,0x45,0x4b,0x35,0x2f,0xd0,0xbd,0xa2,0xff,0xfe,0xda,0xff,0xff,0xf5,0xe9,0xf8,0xff,0x9c,0xc0,0xf0,0x2c,0x45,0x5f,0x28,0x1d,0x09,0xbe,0x9b,0x70,0xff,0xff,0xef,0xeb,0xf8,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xde,0xfe,0xff,0xbd,0xec,0xff,0x5a,0x68,0x7a,0x46,0x2b,0x27,0x82,0x62,0x4f,0xf3,0xe8,0xd4,0xfe,0xfd,0xef,0xff,0xfe,0xfb,0xef,0xf6,0xff,0xb9,0xde,0xfa,0x66,0x91,0xa0,0x14,0x1a,0x0f,0x82,0x64,0x4b,0xff,0xfe,0xf3,0xf4,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf9,0xd7,0xfc,0xff,0xb0,0xe6,0xff,0x65,0x72,0x80,0x80,0x5d,0x50,0xc4,0x9e,0x86,0xff,0xff,0xf4,0xfa,0xff,0xfe,0xff,0xfc,0xff,0xfa,0xfc,0xff,0xd1,0xf7,0xff,0xa6,0xd8,0xde,0x46,0x56,0x4f,0x80,0x66,0x5a,0xff,0xfd,0xf9,0xf8,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif