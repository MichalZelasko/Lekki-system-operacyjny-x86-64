#ifndef SAVE_H
#define SAVE_H
#include <types.h>
uint8_t save[48 * 48 * 3] = {0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xf8,0xf8,0xf8,0xb9,0xb9,0xb9,0x22,0x22,0x22,0x18,0x18,0x18,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x19,0x18,0x18,0x18,0x56,0x56,0x56,0xf8,0xf8,0xf8,0xf7,0xf7,0xf7,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfa,0xfa,0xfa,0x07,0x07,0x07,0x03,0x03,0x03,0x37,0x37,0x37,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x44,0x44,0x44,0x19,0x19,0x19,0x0f,0x0f,0x0f,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x06,0x06,0x06,0x0e,0x0e,0x0e,0x02,0x02,0x02,0xeb,0xeb,0xeb,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x9d,0x9d,0x9d,0x04,0x04,0x04,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x51,0x51,0x51,0x3d,0x3d,0x3d,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x05,0x05,0x05,0xf9,0xf9,0xf9,0xb5,0xb5,0xb5,0x08,0x08,0x08,0xf7,0xf7,0xf7,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x02,0x02,0x02,0xa4,0xa4,0xa4,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xb7,0xb7,0xb7,0xb8,0xb8,0xb8,0xb9,0xb9,0xb9,0xf2,0xf2,0xf2,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x02,0x02,0x02,0xfb,0xfb,0xfb,0xfa,0xfa,0xfa,0x8f,0x8f,0x8f,0x06,0x06,0x06,0xf7,0xf7,0xf7,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x02,0x02,0x02,0xdd,0xdd,0xdd,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x3b,0x3b,0x3b,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x03,0x03,0x03,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xf8,0xf8,0xf8,0x6f,0x6f,0x6f,0x00,0x00,0x00,0xf8,0xf8,0xf8,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xf7,0xf7,0xf7,0x49,0x49,0x49,0x3a,0x3a,0x3a,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x03,0x03,0x03,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfb,0xfb,0xfb,0x54,0x54,0x54,0x03,0x03,0x03,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x4b,0x4b,0x4b,0x3c,0x3c,0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x02,0x02,0x02,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0x42,0x42,0x42,0x07,0x07,0x07,0xf8,0xf8,0xf8,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x00,0x00,0x00,0xfd,0xfd,0xfd,0x4b,0x4b,0x4b,0x3c,0x3c,0x3c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x02,0x02,0x02,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x27,0x27,0x27,0x02,0x02,0x02,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3b,0x3b,0x3b,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfa,0xfa,0xfa,0x4a,0x4a,0x4a,0x3c,0x3c,0x3c,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x02,0x02,0x02,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xf7,0xf7,0xf7,0x06,0x06,0x06,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x52,0x52,0x52,0x3a,0x3a,0x3a,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x40,0x40,0x40,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x03,0x03,0x03,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x76,0x76,0x76,0x10,0x10,0x10,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0xfa,0xfa,0xfa,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfa,0xfa,0xfa,0xef,0xef,0xef,0x02,0x02,0x02,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x00,0x00,0x00,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0x02,0x02,0x02,0xf5,0xf5,0xf5,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xf7,0xf7,0xf7,0x08,0x08,0x08,0x4a,0x4a,0x4a,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0x00,0x00,0x00,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0x89,0x89,0x89,0x06,0x06,0x06,0x06,0x06,0x06,0x02,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x05,0x05,0x05,0x06,0x06,0x06,0x05,0x05,0x05,0xf7,0xf7,0xf7,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x00,0x00,0x00,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xc6,0xc6,0xc6,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb7,0xb9,0xb9,0xb9,0xba,0xba,0xba,0xf0,0xf0,0xf0,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xf5,0xf5,0xf5,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf6,0xf5,0xf5,0xf5,0xf5,0xf5,0xf5,0xf8,0xf8,0xf8,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfc,0xfc,0x27,0x27,0x27,0x05,0x05,0x05,0x01,0x01,0x01,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x01,0x01,0x01,0x02,0x02,0x02,0x02,0x02,0x02,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xda,0xda,0xda,0x05,0x05,0x05,0xf7,0xf7,0xf7,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfa,0xfa,0xfa,0x3e,0x3e,0x3e,0x0d,0x0d,0x0d,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x38,0x38,0x38,0x3e,0x3e,0x3e,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0x00,0x00,0x00,0xfa,0xfa,0xfa,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x39,0x39,0x39,0x40,0x40,0x40,0xfe,0xfe,0xfe,0xf8,0xf8,0xf8,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfb,0xfb,0xfb,0xf9,0xf9,0xf9,0xfa,0xfa,0xfa,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x00,0x00,0x00,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x42,0x42,0x42,0xff,0xff,0xff,0xf9,0xf9,0xf9,0x04,0x04,0x04,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x03,0x03,0x53,0x53,0x53,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xf9,0xf9,0xf9,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfa,0xfa,0xfa,0x27,0x27,0x27,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x2b,0x2b,0x2b,0xba,0xba,0xba,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xf9,0xf9,0xf9,0x39,0x39,0x39,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x37,0x38,0x38,0x38,0x37,0x37,0x37,0xc0,0xc0,0xc0,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfd,0xfd,0xfd,0xf9,0xf9,0xf9,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xf8,0xf8,0xf8,0xfa,0xfa,0xfa,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x01,0x01,0x01,0x02,0x02,0x02,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x02,0x02,0x02,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x4e,0x4e,0x4e,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x01,0x01,0x01,0xde,0xde,0xde,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfa,0xfa,0xfa,0xdf,0xdf,0xdf,0xe3,0xe3,0xe3,0xe2,0xe2,0xe2,0xe3,0xe3,0xe3,0xe2,0xe2,0xe2,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe3,0xe2,0xe2,0xe2,0xe2,0xe2,0xe2,0xe4,0xe4,0xe4,0xf5,0xf5,0xf5,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x03,0x03,0x03,0xde,0xde,0xde,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x37,0x37,0x37,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xf9,0xf9,0xf9,0xfa,0xfa,0xfa,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfb,0xfb,0xfb,0x00,0x00,0x00,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x01,0x01,0x01,0xd6,0xd6,0xd6,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x38,0x38,0x38,0x43,0x43,0x43,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xdd,0xdd,0xdd,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,0x00,0x01,0x01,0x01,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xff,0xff,0xff,0xff,0xff,0xff,0xfb,0xfb,0xfb,0xfb,0xfb,0xfb,0x01,0x01,0x01,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xfd,0xfd,0x36,0x36,0x36,0x21,0x21,0x21,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0x38,0x38,0x38,0x43,0x43,0x43,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0x01,0x01,0x01,0xfb,0xfb,0xfb,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0xf7,0xf7,0xf7,0x05,0x05,0x05,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0x0a,0x0a,0x0a,0x5a,0x5a,0x5a,0xf6,0xf6,0xf6,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0x3a,0x3a,0x3a,0x44,0x44,0x44,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xf9,0xf9,0xf9,0x05,0x05,0x05,0xf7,0xf7,0xf7,0xfe,0xfe,0xfe,0xfa,0xfa,0xfa,0xe5,0xe5,0xe5,0x05,0x05,0x05,0x83,0x83,0x83,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xf7,0xf7,0xf7,0x01,0x01,0x01,0x06,0x06,0x06,0x01,0x01,0x01,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x03,0x03,0x03,0x02,0x02,0x02,0x01,0x01,0x01,0x03,0x03,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x05,0x05,0x05,0x8d,0x8d,0x8d,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xfc,0xfc,0xfc,0xfb,0xfb,0xfb,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xfd,0xfd,0xfd,0xfd,0xfd,0xfd,0xff,0xff,0xff,0xfe,0xfe,0xfe,0xfe,0xfe,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,};
#endif