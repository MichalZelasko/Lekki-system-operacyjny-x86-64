#ifndef HASH_H
#define HASH_H
#include <types.h>
uint8_t hash_width = 24;
uint8_t hash_height = 33;
uint8_t hash_bitmap[33 * 24 * 3] = {0xff,0xfe,0xfb,0xff,0xff,0xf7,0xff,0xff,0xfc,0xf6,0xfc,0xff,0xf5,0xf8,0xff,0xfd,0xfb,0xff,0xff,0xff,0xf9,0xff,0xff,0xf5,0xff,0xff,0xfc,0xfe,0xfb,0xff,0xfb,0xfe,0xff,0xfb,0xff,0xf9,0xfc,0xff,0xf1,0xff,0xff,0xf7,0xfd,0xfe,0xfc,0xff,0xfd,0xff,0xfc,0xfe,0xfe,0xf7,0xfb,0xff,0xf8,0xfe,0xff,0xfc,0xfe,0xff,0xff,0xff,0xf8,0xff,0xff,0xf5,0xff,0xff,0xf8,0xff,0xfe,0xff,0xff,0xff,0xfb,0xff,0xff,0xfb,0xfc,0xfe,0xfe,0xfb,0xfe,0xff,0xfb,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xff,0xfd,0xff,0xff,0xf9,0xff,0xfa,0xf7,0xff,0xf4,0xfe,0xff,0xf7,0xff,0xff,0xfe,0xff,0xfa,0xff,0xff,0xfe,0xff,0xfa,0xfd,0xff,0xf3,0xf9,0xff,0xfa,0xfc,0xff,0xff,0xff,0xfe,0xff,0xff,0xf7,0xff,0xfe,0xfa,0xfc,0xfb,0xfd,0xf4,0xff,0xfe,0xfa,0xff,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfe,0xff,0xff,0xfb,0xff,0xff,0xfe,0xff,0xfc,0xff,0xff,0xfd,0xff,0xfd,0xfd,0xfd,0xff,0xff,0xfe,0xfc,0xfc,0xfc,0xfc,0xfe,0xfe,0xfb,0xff,0xfc,0xfc,0xff,0xfa,0xff,0xfd,0xfd,0xff,0xf9,0xff,0xff,0xfc,0xfd,0xfd,0xfc,0xff,0xf8,0xfb,0xff,0xfa,0xfc,0xff,0xff,0xfe,0xff,0xff,0xff,0xfb,0xff,0xff,0xfc,0xfa,0xf9,0xfb,0xf0,0xff,0xff,0xfb,0xff,0xff,0xff,0xfe,0xfd,0xff,0xff,0xfb,0xfb,0xff,0xf9,0xf9,0xff,0xfb,0xfd,0xff,0xff,0xff,0xfd,0xff,0xfd,0xfc,0xff,0xfa,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xfb,0xff,0xff,0xff,0xfb,0xf9,0xff,0xff,0xfb,0xff,0xff,0xff,0xf8,0xff,0xf9,0xf9,0xfb,0xfd,0xff,0xfb,0xfc,0xff,0xfc,0xf9,0xfb,0xff,0xff,0xfc,0xff,0xfe,0xfb,0xff,0xff,0xff,0xf9,0xfc,0xff,0xff,0xff,0xfe,0xff,0xff,0xf8,0xff,0xff,0xfc,0xf6,0xff,0xff,0xf2,0xff,0xfb,0xfa,0xff,0xfb,0xfa,0xfc,0xfd,0xf8,0xf7,0xff,0xfc,0xf9,0xff,0xff,0xfe,0xfb,0xff,0xff,0xf4,0xff,0xff,0xf8,0xf6,0xf9,0xff,0xf1,0xfc,0xff,0xed,0xfd,0xff,0xff,0xff,0xeb,0xff,0xff,0xf4,0xff,0xfd,0xfd,0xf9,0xfc,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfc,0xff,0xfd,0xf8,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0xfb,0xff,0xff,0xf9,0xff,0xff,0xff,0xf6,0xff,0xff,0xf3,0xff,0xfe,0xf8,0xff,0xfb,0xec,0xf2,0xf9,0xba,0xbb,0xd0,0x46,0x44,0x50,0xa7,0xa2,0x93,0xf5,0xf1,0xd5,0xff,0xff,0xf9,0xe3,0xf0,0xff,0x7f,0x94,0xa9,0x4d,0x66,0x70,0xc5,0xaf,0x8b,0xff,0xf9,0xe3,0xff,0xff,0xfb,0xf8,0xff,0xff,0xfa,0xff,0xff,0xfc,0xfd,0xf9,0xff,0xfc,0xf8,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xfc,0xff,0xff,0xfd,0xff,0xfa,0xfe,0xff,0xfa,0xff,0xff,0xf7,0xfd,0xff,0xda,0xe2,0xf3,0x8e,0x95,0xa8,0x2e,0x2f,0x2d,0xbc,0xb5,0x9a,0xfc,0xfa,0xdc,0xf1,0xff,0xfb,0xd2,0xe9,0xff,0x55,0x6a,0x80,0x54,0x5d,0x6a,0xcd,0xb7,0x8e,0xff,0xff,0xed,0xff,0xff,0xfb,0xef,0xfa,0xfe,0xf3,0xfe,0xff,0xfb,0xff,0xff,0xff,0xff,0xfe,0xfb,0xf9,0xf8,0xfd,0xff,0xf5,0xfd,0xff,0xfe,0xf9,0xfa,0xff,0xfa,0xfc,0xff,0xfa,0xfd,0xff,0xfb,0xfd,0xff,0xf6,0xf9,0xff,0xd1,0xd8,0xec,0x79,0x84,0x8c,0x4c,0x4f,0x40,0xcc,0xc7,0xa8,0xff,0xff,0xea,0xef,0xff,0xff,0xc6,0xe0,0xf1,0x3f,0x4a,0x5e,0x7b,0x70,0x80,0xea,0xcf,0xaa,0xff,0xff,0xeb,0xff,0xff,0xfe,0xf3,0xfd,0xff,0xf2,0xfc,0xff,0xfa,0xfe,0xff,0xff,0xff,0xff,0xff,0xfe,0xfd,0xf9,0xff,0xf6,0xf8,0xff,0xfe,0xf4,0xfd,0xff,0xeb,0xf8,0xff,0xce,0xdc,0xee,0xc1,0xc9,0xda,0xc3,0xc6,0xd5,0xa0,0xa4,0xaf,0x54,0x59,0x58,0x46,0x46,0x38,0xaa,0xa5,0x90,0xcf,0xcf,0xbf,0xbd,0xcb,0xc7,0x9f,0xb0,0xb9,0x25,0x25,0x35,0x70,0x5d,0x6e,0xd8,0xb5,0x8d,0xff,0xeb,0xd2,0xff,0xfe,0xfb,0xf8,0xfd,0xff,0xf8,0xfc,0xff,0xfd,0xfd,0xff,0xff,0xff,0xff,0xfd,0xf8,0xf9,0xfb,0xff,0xfe,0xf8,0xff,0xfa,0xf2,0xff,0xff,0xcf,0xe6,0xf6,0x3a,0x56,0x74,0x00,0x14,0x2e,0x00,0x00,0x07,0x02,0x02,0x00,0x07,0x02,0x00,0x0b,0x02,0x00,0x07,0x01,0x00,0x03,0x03,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x04,0x00,0x04,0x0b,0x00,0x06,0x5d,0x32,0x07,0xac,0x8e,0x73,0xff,0xff,0xf8,0xff,0xfd,0xff,0xff,0xfd,0xff,0xfe,0xfb,0xfd,0xff,0xfb,0xfc,0xff,0xfe,0xff,0xff,0xfb,0xff,0xfc,0xff,0xfd,0xf6,0xff,0xfc,0xd0,0xe6,0xf2,0x3e,0x5b,0x7a,0x00,0x11,0x2e,0x00,0x01,0x07,0x00,0x04,0x00,0x12,0x02,0x00,0x13,0x00,0x00,0x0e,0x03,0x05,0x00,0x00,0x03,0x00,0x00,0x04,0x00,0x01,0x04,0x0d,0x06,0x03,0x12,0x01,0x00,0x58,0x2e,0x01,0xa8,0x8b,0x6c,0xff,0xfd,0xf1,0xff,0xfc,0xfd,0xff,0xfe,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xfe,0xfc,0xfc,0xfc,0xf5,0xff,0xfd,0xfe,0xff,0xfb,0xff,0xfe,0xe7,0xf0,0xf3,0xae,0xc0,0xd1,0x83,0xa1,0xba,0x6a,0x89,0x9e,0x49,0x56,0x58,0x2c,0x1c,0x0b,0xa2,0x82,0x6b,0xa8,0x97,0x8e,0x8a,0x97,0xa5,0x5d,0x7e,0x98,0x2c,0x43,0x53,0x3c,0x34,0x27,0xa5,0x83,0x5f,0xd3,0xb4,0x8d,0xe8,0xd4,0xbb,0xff,0xff,0xf8,0xff,0xff,0xff,0xfe,0xfd,0xff,0xfe,0xfc,0xfb,0xff,0xff,0xfe,0xfe,0xfd,0xff,0xff,0xfd,0xff,0xf9,0xf9,0xff,0xf9,0xf8,0xff,0xff,0xff,0xfc,0xfc,0xfd,0xf9,0xe8,0xf9,0xff,0xaf,0xd0,0xf7,0x6b,0x7f,0x98,0x3e,0x30,0x1d,0xff,0xe6,0xb8,0xff,0xff,0xe8,0xe0,0xf7,0xff,0x91,0xc6,0xf8,0x39,0x61,0x7e,0x70,0x64,0x52,0xff,0xdd,0xa5,0xff,0xff,0xea,0xff,0xfd,0xec,0xfd,0xff,0xfe,0xf4,0xfb,0xfe,0xfa,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xf8,0xfb,0xff,0xff,0xff,0xfb,0xf4,0xf8,0xff,0xfb,0xfb,0xff,0xff,0xff,0xfb,0xff,0xff,0xf5,0xef,0xfc,0xff,0x9e,0xbc,0xeb,0x60,0x74,0x97,0x60,0x54,0x42,0xff,0xee,0xb8,0xff,0xff,0xe5,0xda,0xf6,0xff,0x81,0xba,0xee,0x1e,0x44,0x64,0x96,0x85,0x72,0xff,0xe3,0xa9,0xff,0xff,0xef,0xff,0xff,0xf8,0xf9,0xff,0xfe,0xf6,0xff,0xff,0xf7,0xfc,0xfd,0xfc,0xff,0xfd,0xfd,0xff,0xff,0xf6,0xfc,0xff,0xff,0xff,0xf4,0xf9,0xfe,0xff,0xf8,0xfc,0xff,0xfe,0xfb,0xfd,0xfa,0xfb,0xf9,0xe7,0xf9,0xff,0x92,0xaf,0xd4,0x55,0x62,0x7c,0x71,0x61,0x51,0xff,0xf6,0xcd,0xff,0xff,0xe9,0xdd,0xf8,0xff,0x86,0xad,0xd4,0x17,0x25,0x3b,0xb4,0x9b,0x8b,0xff,0xe7,0xbc,0xff,0xff,0xed,0xff,0xff,0xf7,0xfb,0xfc,0xfa,0xfd,0xff,0xff,0xfe,0xff,0xfd,0xff,0xfe,0xf9,0xfd,0xff,0xfe,0xf8,0xfe,0xff,0xff,0xff,0xf2,0xfd,0xff,0xfc,0xf4,0xfd,0xff,0xe7,0xed,0xf4,0x71,0x7d,0x87,0x27,0x43,0x54,0x00,0x1f,0x36,0x07,0x10,0x1a,0x2d,0x15,0x09,0x4c,0x30,0x18,0x3a,0x39,0x2f,0x14,0x2e,0x3c,0x0e,0x22,0x3b,0x08,0x01,0x0e,0x3c,0x20,0x15,0x54,0x2f,0x13,0x6c,0x57,0x42,0xab,0x9e,0x90,0xff,0xff,0xfb,0xff,0xfd,0xfa,0xff,0xff,0xf8,0xff,0xff,0xf9,0xff,0xfe,0xfa,0xf7,0xfd,0xff,0xff,0xff,0xfc,0xff,0xfd,0xfa,0xfc,0xfd,0xff,0xce,0xe8,0xf9,0x2c,0x5b,0x7b,0x00,0x12,0x34,0x00,0x00,0x0e,0x09,0x00,0x00,0x09,0x04,0x00,0x04,0x04,0x00,0x05,0x00,0x00,0x08,0x00,0x00,0x02,0x03,0x00,0x00,0x06,0x00,0x00,0x02,0x00,0x07,0x00,0x01,0x49,0x2f,0x0a,0xa1,0x8c,0x6c,0xff,0xff,0xed,0xff,0xff,0xf7,0xff,0xfe,0xfd,0xfb,0xfe,0xff,0xfa,0xfc,0xff,0xfb,0xfd,0xff,0xf8,0xfd,0xfb,0xff,0xff,0xfc,0xff,0xfe,0xff,0xd3,0xeb,0xfd,0x6d,0x9a,0xbb,0x3e,0x60,0x7e,0x28,0x28,0x34,0x35,0x22,0x1a,0x6f,0x65,0x54,0x64,0x6b,0x64,0x5e,0x67,0x6b,0x4b,0x4a,0x4c,0x2f,0x2e,0x20,0x29,0x2a,0x16,0x62,0x60,0x58,0x6d,0x65,0x6f,0x9e,0x87,0x67,0xce,0xbb,0xa0,0xff,0xff,0xec,0xff,0xff,0xf8,0xff,0xff,0xff,0xfa,0xfd,0xff,0xf8,0xfb,0xff,0xfa,0xfd,0xff,0xf6,0xff,0xff,0xff,0xff,0xfc,0xff,0xfa,0xfb,0xe6,0xfd,0xff,0xcd,0xfb,0xff,0xac,0xc9,0xe4,0x73,0x65,0x69,0x77,0x53,0x41,0xfc,0xec,0xdb,0xee,0xff,0xff,0xe0,0xfc,0xff,0xa6,0xb2,0xb6,0x71,0x6b,0x54,0x82,0x75,0x55,0xf7,0xed,0xe3,0xff,0xfa,0xff,0xff,0xff,0xed,0xff,0xff,0xf0,0xff,0xff,0xf5,0xff,0xff,0xfb,0xff,0xfe,0xff,0xfb,0xfe,0xff,0xfa,0xfe,0xff,0xfa,0xfd,0xff,0xf1,0xff,0xff,0xff,0xff,0xfb,0xff,0xfc,0xf9,0xec,0xfd,0xff,0xd0,0xfb,0xff,0x9d,0xb6,0xca,0x7b,0x63,0x5d,0xa5,0x74,0x5a,0xff,0xf9,0xe7,0xe4,0xfe,0xff,0xcc,0xf8,0xff,0x8e,0xa5,0xad,0x6e,0x63,0x47,0xb0,0x97,0x6f,0xff,0xf8,0xeb,0xf8,0xf1,0xff,0xff,0xff,0xf5,0xff,0xff,0xf8,0xff,0xfd,0xf8,0xff,0xff,0xfe,0xfd,0xff,0xff,0xfa,0xff,0xff,0xfa,0xff,0xff,0xfb,0xff,0xff,0xec,0xfb,0xfe,0xff,0xfe,0xfb,0xff,0xfd,0xfb,0xef,0xfe,0xff,0xd2,0xfb,0xff,0x78,0x8e,0x9a,0x70,0x55,0x47,0xb9,0x81,0x64,0xff,0xff,0xef,0xdf,0xfb,0xff,0xb4,0xe7,0xff,0x66,0x83,0x8c,0x52,0x48,0x2a,0xcf,0xb2,0x86,0xff,0xf8,0xe7,0xff,0xf9,0xff,0xff,0xfd,0xfe,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfc,0xfe,0xff,0xf9,0xfd,0xfe,0xf8,0xfc,0xfd,0xfb,0xff,0xff,0xfb,0xff,0xfe,0xf3,0xff,0xff,0xff,0xfe,0xfe,0xff,0xfe,0xfb,0xf3,0xff,0xff,0xd5,0xf8,0xff,0x59,0x6d,0x72,0x6b,0x51,0x43,0xcd,0x9a,0x80,0xff,0xff,0xf4,0xe6,0xfd,0xff,0xa9,0xd7,0xf6,0x52,0x6c,0x78,0x4f,0x47,0x30,0xe4,0xca,0xa6,0xff,0xf9,0xe8,0xff,0xfb,0xff,0xfd,0xfc,0xff,0xfb,0xfa,0xff,0xfb,0xfe,0xff,0xf9,0xfc,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xf9,0xfe,0xfc,0xf9,0xfd,0xf8,0xf6,0xfe,0xff,0xff,0xfc,0xfd,0xff,0xfd,0xfb,0xf6,0xfe,0xfe,0xde,0xfd,0xff,0x8f,0xa3,0xa4,0xa7,0x97,0x8b,0xf1,0xcb,0xb9,0xff,0xfd,0xf5,0xf1,0xfd,0xff,0xc6,0xe3,0xf8,0x8f,0xa1,0xac,0x96,0x92,0x87,0xf3,0xe3,0xcc,0xff,0xff,0xef,0xff,0xfd,0xfd,0xf6,0xfa,0xff,0xf9,0xfb,0xff,0xfa,0xfd,0xff,0xfb,0xfe,0xff,0xfd,0xff,0xff,0xfa,0xfd,0xfb,0xff,0xff,0xfc,0xff,0xff,0xfc,0xf9,0xfc,0xff,0xff,0xfd,0xff,0xff,0xfe,0xfe,0xfa,0xff,0xff,0xec,0xff,0xff,0xf1,0xff,0xff,0xff,0xfd,0xf6,0xff,0xff,0xf7,0xff,0xff,0xf9,0xfb,0xfe,0xff,0xf2,0xfb,0xff,0xf6,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xf6,0xff,0xff,0xf7,0xff,0xff,0xf5,0xf6,0xfd,0xff,0xf8,0xfd,0xff,0xf8,0xfc,0xff,0xfd,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xfd,0xfc,0xff,0xff,0xfc,0xff,0xfe,0xfd,0xfd,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfd,0xff,0xfe,0xf4,0xff,0xfe,0xf6,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfb,0xfd,0xff,0xfd,0xff,0xff,0xff,0xff,0xf9,0xff,0xff,0xf5,0xf8,0xfe,0xff,0xfa,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfe,0xfd,0xff,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfb,0xfe,0xff,0xfb,0xff,0xff,0xfd,0xff,0xfe,0xff,0xff,0xfc,0xff,0xfe,0xfe,0xff,0xfd,0xff,0xfb,0xfd,0xff,0xf8,0xfe,0xff,0xfd,0xff,0xfe,0xff,0xff,0xf8,0xfa,0xff,0xff,0xfb,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xfe,0xff,0xfa,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfb,0xfe,0xff,0xf8,0xff,0xff,0xfa,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfe,0xff,0xfd,0xfe,0xff,0xfb,0xfe,0xff,0xfd,0xff,0xff,0xff,0xff,0xfe,0xfd,0xff,0xfc,0xfd,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfa,0xff,0xfe,0xfb,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xfd,0xff,0xff,0xfb,0xff,0xff,0xfa,0xff,0xff,0xfa,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0xfb,0xfe,0xff,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfb,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfa,0xff,0xff,0xfd,0xff,0xfe,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfb,0xff,0xff,0xfa,0xff,0xff,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xfd,0xff,0xff,0xf8,0xfe,0xff,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfc,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xff,0xfa,0xff,0xfe,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xff,0xfe,0xfe,0xfc,0xff,0xfd,0xfa,0xff,0xfd,0xfc,0xff,0xfd,0xff,0xfe,0xfd,0xff,0xfe,0xff,0xfd,0xff,0xff,0xfa,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xfe,0xff,0xfe,0xfe,0xff,0xff,0xff,0xf6,0xff,0xff,0xff,0xff,0xfe,0xff,0xff,0xfe,0xff,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xfe,0xfe,0xff,0xfd,0xfe,0xff,0xff,0xfb,0xf9,0xff,0xfa,0xf5,0xff,0xfa,0xfa,0xff,0xfb,0xff,0xfd,0xfe,0xff,0xfc,0xff,0xff,0xfd,0xff,0xfa,0xff,0xfe,0xfc,0xfe,0xfe,0xff,0xfd,0xfe,0xff,0xfd,0xfe,0xfe,0xfe,0xfe,0xf5,0xff,0xfd,0xff,0xfe,0xff,0xff,0xfe,0xff,0xfd,0xfe,0xff,0xfb,0xfe,0xff,0xfb,0xfe,0xff,0xfa,0xff,0xff,0xfb,0xff,0xff,0xfd,0xff,0xff,0xff,0xfd,0xff,0xff,0xfc,0xff,0xff,0xfd,0xfe,0xff,0xff,0xfa,0xf7,0xff,0xf7,0xf3,0xff,0xf7,0xf7,0xff,0xfb,0xff,0xfc,0xff,0xff,0xfb,0xff,0xff,0xfd,0xfe,0xfe,0xff,0xfd,0xfc,0xfe,0xfe,0xff,0xfd,0xff,0xff,0xfc,0xff,0xfe,0xff,0xfd,0xf5,0xff,0xfa,0xff,0xfd,0xff,0xff,0xfe,0xff,0xfd,0xfd,0xff,0xfa,0xfe,0xff,0xfa,0xfe,0xff,0xf8,0xff,0xff,0xfa,0xff,0xff,0xfb,0xff,0xfe,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif