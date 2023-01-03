#ifndef V_BIG_IMAGE_H
#define V_BIG_IMAGE_H
#include <types.h>
uint8_t V_big_width = 20;
uint8_t V_big_height = 33;
uint8_t V_big_bitmap[33 * 20 * 3] = {0xf1,0xf5,0xef,0xfc,0xff,0xfb,0xfd,0xff,0xff,0xfc,0xfb,0xff,0xf9,0xf7,0xfd,0xff,0xfc,0xff,0xff,0xfc,0xff,0xfa,0xf8,0xf7,0xff,0xff,0xf9,0xfe,0xff,0xf4,0xf9,0xfc,0xed,0xf6,0xfa,0xee,0xf8,0xfb,0xf2,0xf7,0xfa,0xf8,0xf5,0xf7,0xf8,0xf2,0xf2,0xf8,0xf5,0xf7,0xf7,0xfb,0xfd,0xfd,0xfd,0xff,0xff,0xfc,0xfe,0xfe,0xfd,0xff,0xfb,0xfd,0xff,0xfc,0xfa,0xfc,0xfc,0xf9,0xf8,0xfc,0xf6,0xf4,0xfa,0xf9,0xf5,0xfb,0xfe,0xfa,0xff,0xff,0xff,0xfe,0xfb,0xfb,0xf5,0xfb,0xfd,0xf1,0xfb,0xfd,0xf1,0xfb,0xff,0xf3,0xfe,0xff,0xf8,0xfd,0xff,0xfe,0xfd,0xff,0xff,0xfd,0xfd,0xff,0xfb,0xfd,0xfd,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfb,0xfd,0xfd,0xfa,0xff,0xf6,0xf8,0xfc,0xf7,0xfc,0xfc,0xfc,0xff,0xfe,0xff,0xfe,0xfc,0xff,0xf7,0xf5,0xfb,0xf8,0xf4,0xf9,0xfd,0xfb,0xfa,0xff,0xff,0xfa,0xff,0xff,0xf7,0xfd,0xff,0xf5,0xfa,0xfe,0xf2,0xf7,0xfa,0xf1,0xf5,0xf6,0xf4,0xf3,0xf5,0xf6,0xf4,0xf4,0xfa,0xfb,0xfd,0xfd,0xfc,0xfe,0xfe,0xfb,0xfd,0xfd,0xf7,0xf9,0xf9,0xfc,0xff,0xf6,0xfe,0xff,0xfa,0xff,0xff,0xfe,0xff,0xfe,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfe,0xff,0xfd,0xfd,0xfd,0xfc,0xfe,0xf8,0xfa,0xfe,0xf3,0xfa,0xfe,0xf2,0xfb,0xff,0xf4,0xfd,0xff,0xf9,0xff,0xff,0xfe,0xff,0xfe,0xff,0xfe,0xfc,0xff,0xf9,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xff,0xff,0xfd,0xff,0xff,0xf7,0xfb,0xf0,0xfb,0xfe,0xf5,0xf7,0xf8,0xf6,0xee,0xed,0xef,0xf0,0xee,0xf4,0xfb,0xf9,0xff,0xff,0xfe,0xff,0xfc,0xfc,0xfc,0xfc,0xfd,0xf9,0xf8,0xfb,0xf2,0xf5,0xf9,0xee,0xf7,0xfb,0xf0,0xfc,0xfe,0xf8,0xfe,0xff,0xfd,0xfb,0xfa,0xfc,0xf6,0xf4,0xfa,0xf4,0xf6,0xf6,0xf5,0xf7,0xf7,0xf7,0xf9,0xf9,0xf9,0xfb,0xfb,0xf9,0xfb,0xef,0xfb,0xff,0xf4,0xfd,0xfe,0xfa,0xfc,0xfb,0xfd,0xfe,0xfc,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xf9,0xfb,0xfc,0xfc,0xff,0xfb,0xfb,0xfe,0xf5,0xf9,0xfd,0xf2,0xfa,0xfe,0xf3,0xfe,0xff,0xfa,0xff,0xff,0xfe,0xfb,0xfa,0xfc,0xf9,0xf5,0xfb,0xfd,0xff,0xff,0xfc,0xfe,0xfe,0xf9,0xfb,0xfb,0xf9,0xfb,0xfb,0xff,0xff,0xf5,0xf4,0xf6,0xea,0xf2,0xf2,0xec,0xfc,0xfc,0xfc,0xfe,0xfd,0xff,0xf2,0xf2,0xf8,0xf0,0xf0,0xf6,0xfa,0xfc,0xfd,0xf5,0xf8,0xf6,0xf9,0xfd,0xf7,0xfc,0xff,0xf8,0xfe,0xff,0xf8,0xfc,0xfe,0xf8,0xfd,0xfb,0xfa,0xfe,0xfb,0xfd,0xff,0xfc,0xff,0xf4,0xf6,0xf6,0xf3,0xf5,0xf5,0xf7,0xf9,0xf9,0xfd,0xff,0xff,0xf3,0xf4,0xe4,0xc6,0xc6,0xb8,0xac,0xad,0xa4,0xb5,0xb6,0xb4,0xb7,0xb6,0xba,0xa9,0xa9,0xaf,0xba,0xbd,0xc2,0xe0,0xe3,0xe7,0xfa,0xff,0xfe,0xfb,0xff,0xfb,0xfb,0xff,0xf7,0xea,0xed,0xe4,0xcf,0xd0,0xcc,0xbd,0xbb,0xba,0xb8,0xb3,0xb5,0xb9,0xb3,0xb8,0xae,0xb0,0xb0,0xb7,0xb9,0xb9,0xcc,0xce,0xce,0xe5,0xe7,0xe7,0xfc,0xfe,0xeb,0xfb,0xfc,0xec,0x7e,0x7f,0x75,0x00,0x01,0x00,0x05,0x04,0x08,0x44,0x43,0x4c,0xfb,0xfd,0xff,0xf0,0xf3,0xf7,0xf5,0xfa,0xf9,0xfb,0xff,0xfc,0xf5,0xf9,0xf3,0xfa,0xfc,0xf6,0xfd,0xfe,0xfa,0xf6,0xf4,0xf4,0x71,0x6c,0x6e,0x17,0x11,0x16,0xdd,0xdf,0xdf,0xef,0xf1,0xf1,0xfd,0xff,0xff,0xfd,0xff,0xff,0xff,0xff,0xed,0xf6,0xf6,0xe4,0xcc,0xcb,0xc1,0x1c,0x1b,0x17,0x00,0x00,0x03,0x36,0x38,0x40,0xd9,0xdc,0xe4,0xfa,0xfe,0xff,0xf5,0xfa,0xfb,0xf8,0xff,0xfc,0xf9,0xff,0xf9,0xfc,0xff,0xfa,0xf8,0xf7,0xf3,0xff,0xfd,0xfe,0x4b,0x44,0x47,0x55,0x4e,0x53,0xe4,0xe6,0xe6,0xf1,0xf3,0xf3,0xfc,0xfe,0xfe,0xfd,0xff,0xff,0xfc,0xfc,0xe4,0xf6,0xf7,0xe3,0xff,0xff,0xf3,0x50,0x4f,0x4b,0x00,0x00,0x03,0x19,0x1b,0x23,0xaf,0xb2,0xba,0xf8,0xfe,0xff,0xf3,0xfa,0xfd,0xf4,0xfb,0xf8,0xfb,0xff,0xfc,0xfc,0xff,0xfb,0xf3,0xf2,0xee,0xfb,0xf6,0xf7,0x1b,0x14,0x17,0xa7,0x9d,0xa3,0xed,0xef,0xef,0xf4,0xf6,0xf6,0xfa,0xfc,0xfc,0xfb,0xfd,0xfd,0xf5,0xf6,0xdc,0xff,0xff,0xf0,0xf7,0xf7,0xe9,0x98,0x98,0x92,0x06,0x08,0x09,0x00,0x02,0x0a,0x86,0x88,0x92,0xf1,0xf7,0xfe,0xf3,0xfa,0xfd,0xf4,0xfa,0xf9,0xfa,0xff,0xfd,0xf8,0xfc,0xf7,0xfa,0xf8,0xf7,0xd2,0xcd,0xce,0x09,0x02,0x05,0xe0,0xd6,0xdc,0xf7,0xf9,0xf9,0xf8,0xfa,0xfa,0xf9,0xfb,0xfb,0xfa,0xfc,0xfc,0xfd,0xfc,0xe2,0xff,0xff,0xf0,0xec,0xeb,0xdd,0xd4,0xd4,0xce,0x0e,0x10,0x11,0x00,0x01,0x09,0x4f,0x54,0x5d,0xf1,0xf9,0xff,0xf4,0xfd,0xff,0xf8,0xff,0xff,0xf7,0xfe,0xfb,0xf3,0xf7,0xf2,0xff,0xff,0xfe,0x91,0x8b,0x8c,0x2b,0x22,0x25,0xfb,0xef,0xf5,0xfc,0xfe,0xfe,0xf9,0xfb,0xfb,0xf8,0xfa,0xfa,0xfa,0xfc,0xfc,0xff,0xff,0xe6,0xf6,0xf6,0xde,0xf7,0xf7,0xe7,0xeb,0xeb,0xe5,0x24,0x26,0x27,0x03,0x06,0x0e,0x13,0x18,0x21,0xdf,0xe6,0xef,0xf6,0xff,0xff,0xf8,0xff,0xff,0xf8,0xff,0xfc,0xf3,0xf6,0xf4,0xff,0xff,0xfe,0x52,0x4c,0x4d,0x6d,0x64,0x67,0xff,0xf5,0xfb,0xfd,0xff,0xff,0xf9,0xfb,0xfb,0xf9,0xfb,0xfb,0xfc,0xfe,0xfe,0xff,0xff,0xe3,0xef,0xef,0xd7,0xff,0xff,0xf1,0xf0,0xf0,0xea,0x69,0x6b,0x6c,0x04,0x07,0x0f,0x00,0x00,0x08,0x96,0x9d,0xa6,0xf2,0xfb,0xff,0xf6,0xfe,0xfe,0xf9,0xff,0xfe,0xf5,0xf8,0xf6,0xea,0xe8,0xe7,0x27,0x21,0x22,0xad,0xa4,0xa7,0xff,0xf8,0xfe,0xfb,0xfd,0xfd,0xf8,0xfa,0xfa,0xf9,0xfb,0xfb,0xfd,0xff,0xff,0xfe,0xfe,0xe0,0xfb,0xfb,0xe3,0xff,0xff,0xf0,0xf7,0xf8,0xef,0xb9,0xbb,0xbc,0x03,0x06,0x0e,0x07,0x0c,0x15,0x4b,0x52,0x5b,0xeb,0xf4,0xf8,0xeb,0xf3,0xf3,0xfa,0xff,0xff,0xf5,0xf8,0xf6,0xcf,0xcd,0xcc,0x12,0x0c,0x0d,0xd0,0xc7,0xca,0xff,0xfa,0xff,0xf9,0xfb,0xfb,0xf7,0xf9,0xf9,0xfa,0xfc,0xfc,0xfd,0xff,0xff,0xf6,0xf0,0xff,0xf9,0xf7,0xff,0xf1,0xf5,0xf0,0xff,0xff,0xd4,0xff,0xfb,0xae,0x32,0x1c,0x00,0x19,0x00,0x00,0x1d,0x0e,0x47,0xca,0xd8,0xff,0xd6,0xfa,0xff,0xe7,0xff,0xdc,0xf2,0xf4,0xc0,0xa9,0x90,0x7c,0x44,0x30,0x3d,0xe7,0xf5,0xff,0xcc,0xfa,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xf6,0xff,0xfb,0xf9,0xff,0xf6,0xfb,0xf9,0xfe,0xff,0xda,0xff,0xff,0xb8,0x8c,0x78,0x3f,0x20,0x01,0x02,0x10,0x00,0x33,0xa5,0xb1,0xe7,0xdb,0xff,0xff,0xe0,0xff,0xd7,0xee,0xf2,0xc1,0x6b,0x55,0x43,0x53,0x41,0x4e,0xdb,0xe8,0xfe,0xd4,0xff,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xf9,0xff,0xf6,0xf3,0xff,0xf4,0xf9,0xf8,0xfc,0xff,0xe0,0xf9,0xf9,0xb9,0xd8,0xc5,0x92,0x20,0x03,0x00,0x0c,0x00,0x23,0x73,0x79,0xa6,0xde,0xfe,0xff,0xdc,0xfc,0xd9,0xe6,0xee,0xc6,0x31,0x21,0x15,0x8a,0x7b,0x89,0xe1,0xeb,0xfd,0xdc,0xff,0xff,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xfb,0xff,0xf5,0xef,0xfa,0xee,0xf3,0xf4,0xfa,0xff,0xea,0xf2,0xf5,0xc3,0xec,0xdd,0xaf,0x2f,0x13,0x0c,0x18,0x02,0x1f,0x3e,0x40,0x5f,0xcf,0xeb,0xec,0xe2,0xff,0xe4,0xc4,0xd2,0xb6,0x1b,0x12,0x0e,0xcd,0xc2,0xd2,0xf2,0xfa,0xff,0xdc,0xf8,0xf9,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xfb,0xfc,0xff,0xfa,0xff,0xf0,0xf7,0xfa,0xf4,0xff,0xf1,0xf8,0xff,0xda,0xf1,0xe5,0xc1,0x69,0x4f,0x43,0x1a,0x00,0x10,0x15,0x11,0x24,0xa9,0xbe,0xbc,0xec,0xff,0xf4,0x86,0x97,0x89,0x1c,0x1d,0x21,0xe9,0xe4,0xf3,0xf8,0xfe,0xff,0xe0,0xf2,0xeb,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xf2,0xeb,0xff,0xfe,0xff,0xf1,0xfa,0xfe,0xe7,0xf7,0xf0,0xfd,0xff,0xf0,0xff,0xf7,0xdc,0xb4,0x9b,0x8b,0x17,0x00,0x00,0x09,0x00,0x03,0x74,0x82,0x7e,0xe9,0xff,0xfa,0x42,0x58,0x56,0x3b,0x44,0x51,0xe9,0xea,0xf8,0xfd,0xff,0xff,0xf7,0xfe,0xef,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xf1,0xe4,0xff,0xfe,0xfb,0xf0,0xf9,0xfd,0xe6,0xf5,0xf8,0xf6,0xff,0xf7,0xff,0xfc,0xe9,0xe9,0xd3,0xc1,0x30,0x16,0x08,0x12,0x06,0x00,0x34,0x3b,0x34,0xcb,0xe1,0xdf,0x11,0x2a,0x34,0x77,0x89,0x9a,0xf1,0xf7,0xff,0xf9,0xf9,0xf3,0xff,0xff,0xf0,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xfc,0xec,0xfd,0xf7,0xf0,0xf3,0xf9,0xfe,0xf1,0xfd,0xff,0xef,0xf8,0xfb,0xf7,0xf5,0xea,0xff,0xee,0xd9,0x60,0x49,0x2f,0x19,0x0b,0x00,0x02,0x03,0x00,0xa1,0xb3,0xba,0x00,0x0d,0x21,0xa8,0xc0,0xd4,0xf1,0xfd,0xff,0xf0,0xef,0xe5,0xff,0xff,0xe7,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xef,0xf8,0xf5,0xed,0xf7,0xfc,0xff,0xf2,0xfa,0xff,0xee,0xf4,0xff,0xff,0xff,0xfc,0xf4,0xea,0xd2,0xb7,0xa7,0x83,0x16,0x08,0x00,0x0d,0x08,0x00,0x03,0x0e,0x1c,0x00,0x15,0x2f,0xcc,0xe7,0xfc,0xe7,0xf7,0xfd,0xff,0xff,0xf1,0xff,0xf9,0xdf,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xfe,0xf0,0xf5,0xf6,0xec,0xfc,0xfe,0xfe,0xfa,0xfc,0xff,0xf3,0xf3,0xff,0xff,0xfe,0xff,0xff,0xfb,0xe3,0xd6,0xcf,0xa4,0x28,0x1c,0x00,0x0a,0x03,0x00,0x00,0x05,0x18,0x39,0x4d,0x6c,0xe1,0xfc,0xff,0xed,0xff,0xff,0xf9,0xf9,0xe9,0xff,0xff,0xeb,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf5,0xfd,0xf6,0xf2,0xf7,0xee,0xff,0xff,0xfc,0xff,0xfb,0xff,0xf9,0xf0,0xff,0xfe,0xfc,0xff,0xff,0xff,0xf0,0xf3,0xf4,0xc8,0x2c,0x25,0x00,0x13,0x09,0x02,0x10,0x0d,0x26,0x68,0x78,0x95,0xd4,0xef,0xfd,0xe8,0xff,0xf7,0xe4,0xe6,0xd3,0xff,0xfc,0xe9,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xee,0xff,0xff,0xf2,0xfa,0xf3,0xff,0xfe,0xf7,0xff,0xfb,0xff,0xfc,0xec,0xfe,0xf6,0xf3,0xfc,0xfa,0xff,0xee,0xf9,0xff,0xd6,0xeb,0xea,0xc4,0xe6,0xda,0xd6,0xd9,0xd0,0xea,0xed,0xf5,0xff,0xe8,0xff,0xff,0xef,0xff,0xf8,0xf1,0xf5,0xe2,0xff,0xfa,0xee,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xe3,0xff,0xff,0xf0,0xfc,0xf6,0xff,0xfa,0xee,0xff,0xf5,0xf5,0xff,0xed,0xfd,0xf7,0xf1,0xfc,0xed,0xfd,0xeb,0xef,0xff,0xd8,0xf7,0xfe,0xd9,0xff,0xf2,0xf0,0xff,0xf3,0xff,0xf1,0xf2,0xff,0xe1,0xf6,0xf4,0xe0,0xf7,0xe1,0xf9,0xff,0xee,0xff,0xfb,0xf7,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xd7,0xfe,0xff,0xee,0xfd,0xf9,0xff,0xf7,0xe7,0xff,0xf1,0xeb,0xff,0xf0,0xfe,0xfd,0xf7,0xff,0xea,0xff,0xf0,0xe6,0xff,0xdb,0xff,0xff,0xe9,0xfe,0xf0,0xf2,0xff,0xf4,0xff,0xfa,0xf5,0xff,0xf3,0xff,0xfb,0xe5,0xfb,0xe2,0xfd,0xff,0xf4,0xff,0xfd,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xcc,0xfa,0xff,0xed,0xff,0xfd,0xff,0xf8,0xe5,0xff,0xec,0xe3,0xff,0xef,0xfa,0xff,0xfa,0xff,0xe7,0xff,0xf3,0xe1,0xff,0xde,0xf0,0xff,0xe0,0xf3,0xe5,0xe9,0xff,0xe5,0xff,0xfa,0xf0,0xff,0xf6,0xff,0xf7,0xeb,0xff,0xe3,0xf9,0xff,0xf3,0xfd,0xf6,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xc6,0xf7,0xff,0xed,0xff,0xff,0xff,0xf9,0xe4,0xff,0xe9,0xdc,0xff,0xec,0xf4,0xff,0xf8,0xff,0xe4,0xff,0xf2,0xdc,0xff,0xdf,0xea,0xff,0xdf,0xff,0xf9,0xfd,0xff,0xf1,0xff,0xff,0xf3,0xff,0xf0,0xfb,0xeb,0xf3,0xff,0xe9,0xf8,0xff,0xf3,0xf8,0xf2,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif