#ifndef TERMIANL_ICON_H
#define TERMIANL_ICON_H
#include <types.h>

static uint8_t terminal_bitmap[48 * 48 * 3] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x2,
0x0,0x0,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0xdf,0xdc,
0xde,0xdf,0xdc,0xde,0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0xdf,0xdc,0xde,0xdf,0xdc,0xde,
0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,
0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdc,
0xde,0xdf,0xdc,0xde,0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0xdf,0xdc,0xde,0xdf,0xdc,0xde,
0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdd,0xdd,0xdf,
0xdd,0xdd,0xdf,0xdc,0xde,0xdf,0xdc,0xde,0xdf,0xdd,0xdd,0xdf,0xdd,0xdd,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x7e,0x75,0x78,0x30,0x22,0x26,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2c,0x21,
0x24,0x2c,0x21,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2c,0x21,0x24,0x2c,0x21,0x24,
0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,
0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,
0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,
0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,
0x20,0x24,0x2e,0x20,0x24,0x2e,0x20,0x24,0x2e,0x23,0x26,0x7e,0x75,0x78,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x30,0x22,0x26,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x2f,0x20,
0x24,0x2f,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,
0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x1f,0x26,0x31,
0x1f,0x26,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x1f,0x26,0x31,0x1f,0x26,0x31,0x20,
0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,
0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,
0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x2f,0x20,0x24,0x2e,0x23,0x26,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,
0x24,0x31,0x20,0x24,0x33,0x1f,0x24,0x33,0x1f,0x24,0x33,0x1f,0x24,0x31,0x20,0x24,
0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,
0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,
0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,
0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,
0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x31,0x20,0x24,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x1,0x2,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x31,0x20,0x24,0x32,0x21,0x25,0x32,0x21,0x25,0x31,0x20,
0x24,0x32,0x21,0x25,0x32,0x21,0x25,0x34,0x20,0x25,0x33,0x1f,0x24,0x34,0x20,0x25,
0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,
0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,
0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,
0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x32,
0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x31,0x20,0x24,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x31,0x20,0x24,0x33,0x22,0x26,0x33,0x22,0x26,0x31,0x22,
0x26,0x30,0x21,0x25,0x34,0x23,0x27,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,
0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x32,0x21,0x25,0x32,
0x21,0x25,0x32,0x21,0x25,0x32,0x21,0x25,0x31,0x20,0x24,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x31,0x20,0x24,0x33,0x22,0x26,0x31,0x22,0x26,0x90,0x82,
0x86,0x98,0x8a,0x8e,0x38,0x2a,0x2e,0x31,0x22,0x26,0x31,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,
0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x32,0x21,0x25,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x31,0x20,0x24,0x33,0x22,0x26,0x31,0x22,0x26,0x8e,0x80,
0x84,0xff,0xfc,0xff,0xef,0xe7,0xe8,0x81,0x79,0x7a,0x32,0x24,0x28,0x31,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,
0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x32,0x21,0x25,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x33,0x22,0x26,0x31,0x22,0x26,0x30,0x22,
0x26,0x5f,0x54,0x57,0xc3,0xbd,0xbe,0xff,0xfe,0xff,0xe2,0xd9,0xdc,0x6d,0x5f,0x63,
0x31,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,
0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x32,0x21,0x25,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x33,0x22,0x26,0x33,0x22,0x26,0x30,0x21,
0x25,0x30,0x22,0x26,0x2c,0x24,0x25,0x6f,0x69,0x6a,0xff,0xf9,0xfc,0xd1,0xc8,0xcb,
0x31,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,
0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,
0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x33,
0x22,0x26,0x33,0x22,0x26,0x33,0x22,0x26,0x32,0x21,0x25,0x2e,0x20,0x24,0xdf,0xdb,
0xe0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x34,0x23,0x27,0x33,0x22,0x26,0x32,0x23,
0x27,0x43,0x35,0x39,0xab,0xa0,0xa2,0xff,0xf9,0xfa,0xed,0xe4,0xe7,0x72,0x67,0x6a,
0x32,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,
0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,
0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,
0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,
0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdb,
0xe0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x34,0x23,0x27,0x32,0x23,0x27,0x73,0x68,
0x6b,0xfb,0xf2,0xf5,0xff,0xf5,0xf8,0x9f,0x94,0x97,0x3a,0x2c,0x30,0x32,0x23,0x27,
0x34,0x23,0x27,0x34,0x23,0x27,0x33,0x22,0x26,0x34,0x23,0x27,0x34,0x23,0x27,0x35,
0x24,0x28,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,
0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,
0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x34,
0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x34,0x23,0x27,0x32,0x23,0x27,0x9b,0x90,
0x93,0xc4,0xb9,0xbc,0x4e,0x40,0x44,0x32,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,
0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x33,0x24,0x28,0x35,0x24,0x28,0x35,
0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,
0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,
0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x34,0x23,0x27,0x34,
0x23,0x27,0x34,0x23,0x27,0x34,0x23,0x27,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x37,0x23,0x28,0x35,0x24,0x28,0x40,0x31,
0x35,0x33,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,
0x33,0x24,0x28,0x33,0x24,0x28,0x33,0x24,0x28,0x32,0x24,0x28,0x33,0x24,0x28,0x33,
0x24,0x28,0x33,0x24,0x28,0x33,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,
0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,
0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,
0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x37,0x23,0x28,0x37,0x23,0x28,0x36,0x25,
0x29,0x35,0x24,0x28,0x37,0x23,0x28,0x37,0x23,0x28,0x35,0x24,0x28,0x35,0x24,0x28,
0x33,0x24,0x28,0x83,0x75,0x79,0x9e,0x90,0x94,0x9c,0x91,0x94,0x9e,0x90,0x94,0x9e,
0x90,0x94,0x9e,0x90,0x94,0x4e,0x3f,0x43,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,
0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,
0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x35,
0x24,0x28,0x35,0x24,0x28,0x35,0x24,0x28,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,
0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,
0x33,0x24,0x28,0xd4,0xc6,0xca,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,0xfd,0xff,0xff,
0xfd,0xff,0xff,0xfc,0xff,0x69,0x5a,0x5e,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,
0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,
0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,
0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x36,0x25,0x29,0x37,0x26,0x2a,0x36,0x25,
0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,
0x34,0x25,0x29,0x33,0x25,0x29,0x31,0x26,0x29,0x31,0x26,0x29,0x31,0x26,0x29,0x31,
0x26,0x29,0x33,0x25,0x29,0x34,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,
0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,
0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x36,
0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x36,0x25,0x29,0x36,0x25,0x29,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x35,0x26,0x2a,0x35,0x26,0x2a,0x35,0x26,0x2a,0x35,0x26,0x2a,0x35,
0x26,0x2a,0x35,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x36,0x25,0x29,0x36,
0x25,0x29,0x36,0x25,0x29,0x36,0x25,0x29,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x1,0x1,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x39,0x25,0x2a,0x39,0x25,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x38,0x27,0x2b,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x39,0x25,0x2a,0x39,0x25,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x37,0x26,0x2a,0x37,0x26,0x2a,0x35,0x26,
0x2a,0x35,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x38,0x27,0x2b,0x38,0x27,0x2b,0x37,0x26,0x2a,0x38,0x27,0x2b,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,
0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x37,0x26,0x2a,
0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x39,0x28,0x2c,0x37,0x26,0x2a,0x36,0x27,
0x2b,0x37,0x28,0x2c,0x37,0x26,0x2a,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x39,0x28,0x2c,0x37,0x26,0x2a,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,
0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x39,0x28,0x2c,0x38,0x27,0x2b,
0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x39,
0x28,0x2c,0x39,0x28,0x2c,0x37,0x26,0x2a,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,
0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,
0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x38,0x27,0x2b,0x37,0x26,0x2a,0x38,0x27,
0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,
0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x39,0x28,0x2c,0x39,0x28,0x2c,0x38,0x27,0x2b,
0x39,0x28,0x2c,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x37,0x26,0x2a,0x39,0x28,0x2c,0x38,0x27,
0x2b,0x37,0x26,0x2a,0x37,0x28,0x2c,0x37,0x28,0x2c,0x37,0x26,0x2a,0x39,0x28,0x2c,
0x38,0x27,0x2b,0x36,0x25,0x29,0x39,0x28,0x2c,0x38,0x27,0x2b,0x36,0x25,0x29,0x39,
0x28,0x2c,0x38,0x27,0x2b,0x37,0x26,0x2a,0x39,0x28,0x2c,0x38,0x27,0x2b,0x37,0x26,
0x2a,0x39,0x28,0x2c,0x38,0x27,0x2b,0x37,0x26,0x2a,0x39,0x28,0x2c,0x38,0x27,0x2b,
0x37,0x26,0x2a,0x39,0x28,0x2c,0x39,0x28,0x2c,0x38,0x27,0x2b,0x39,0x28,0x2c,0x38,
0x27,0x2b,0x37,0x26,0x2a,0x38,0x27,0x2b,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x37,0x26,0x2a,0x38,0x27,0x2b,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x36,0x27,0x2b,0x36,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,
0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,
0x2b,0x37,0x26,0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,
0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x38,0x27,0x2b,0x37,
0x26,0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x34,0x23,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x37,0x28,0x2c,0x35,0x26,0x2a,0x36,0x27,
0x2b,0x37,0x28,0x2c,0x37,0x26,0x2a,0x38,0x27,0x2b,0x3a,0x29,0x2d,0x37,0x26,0x2a,
0x36,0x27,0x2b,0x38,0x29,0x2d,0x37,0x26,0x2a,0x38,0x27,0x2b,0x3a,0x29,0x2d,0x37,
0x26,0x2a,0x38,0x27,0x2b,0x3a,0x29,0x2d,0x37,0x26,0x2a,0x38,0x27,0x2b,0x3a,0x29,
0x2d,0x37,0x26,0x2a,0x36,0x27,0x2b,0x39,0x2a,0x2e,0x37,0x26,0x2a,0x37,0x26,0x2a,
0x38,0x29,0x2d,0x35,0x26,0x2a,0x36,0x27,0x2b,0x38,0x29,0x2d,0x35,0x26,0x2a,0x36,
0x27,0x2b,0x39,0x28,0x2c,0x37,0x26,0x2a,0x35,0x21,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x33,0x22,0x26,0x34,0x25,0x29,0x37,0x28,0x2c,0x36,0x27,
0x2b,0x36,0x25,0x29,0x3a,0x29,0x2d,0x38,0x27,0x2b,0x36,0x25,0x29,0x3a,0x29,0x2d,
0x36,0x27,0x2b,0x34,0x25,0x29,0x3a,0x29,0x2d,0x38,0x27,0x2b,0x36,0x25,0x29,0x3b,
0x2a,0x2e,0x38,0x27,0x2b,0x36,0x25,0x29,0x3b,0x2a,0x2e,0x38,0x27,0x2b,0x36,0x25,
0x29,0x3b,0x2a,0x2e,0x36,0x27,0x2b,0x34,0x25,0x29,0x3a,0x29,0x2d,0x38,0x27,0x2b,
0x34,0x25,0x29,0x38,0x29,0x2d,0x36,0x27,0x2b,0x34,0x25,0x29,0x38,0x29,0x2d,0x36,
0x27,0x2b,0x36,0x25,0x29,0x39,0x28,0x2c,0x36,0x22,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x34,0x23,0x27,0x35,0x26,0x2a,0x36,0x27,0x2b,0x37,0x26,
0x2a,0x37,0x26,0x2a,0x38,0x27,0x2b,0x36,0x25,0x29,0x36,0x27,0x2b,0x36,0x27,0x2b,
0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x35,0x26,0x2a,0x36,
0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,
0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,0x36,0x27,0x2b,
0x36,0x27,0x2b,0x36,0x27,0x2b,0x37,0x26,0x2a,0x37,0x26,0x2a,0x36,0x27,0x2b,0x35,
0x26,0x2a,0x37,0x26,0x2a,0x37,0x26,0x2a,0x33,0x22,0x26,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x35,0x24,0x28,0x39,0x2a,0x2e,0x36,0x25,0x29,0x37,0x26,
0x2a,0x3c,0x28,0x2d,0x35,0x24,0x28,0x37,0x26,0x2a,0x38,0x29,0x2d,0x33,0x24,0x28,
0x36,0x27,0x2b,0x39,0x2a,0x2e,0x33,0x24,0x28,0x36,0x27,0x2b,0x39,0x2a,0x2e,0x32,
0x23,0x27,0x36,0x27,0x2b,0x3a,0x2b,0x2f,0x33,0x24,0x28,0x36,0x27,0x2b,0x3a,0x2b,
0x2f,0x33,0x24,0x28,0x36,0x27,0x2b,0x39,0x2a,0x2e,0x33,0x24,0x28,0x36,0x27,0x2b,
0x39,0x2a,0x2e,0x33,0x24,0x28,0x36,0x25,0x29,0x3a,0x29,0x2d,0x33,0x24,0x28,0x35,
0x26,0x2a,0x3a,0x29,0x2d,0x35,0x24,0x28,0x32,0x21,0x25,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x20,0x24,0x32,0x21,0x25,0x35,0x24,0x28,0x3a,0x29,0x2d,0x37,0x26,
0x2a,0x35,0x24,0x28,0x3a,0x29,0x2d,0x37,0x26,0x2a,0x35,0x24,0x28,0x3c,0x2b,0x2f,
0x36,0x27,0x2b,0x33,0x24,0x28,0x3c,0x2b,0x2f,0x38,0x27,0x2b,0x35,0x24,0x28,0x3b,
0x2a,0x2e,0x38,0x27,0x2b,0x35,0x24,0x28,0x3d,0x2c,0x30,0x38,0x27,0x2b,0x35,0x24,
0x28,0x3b,0x2a,0x2e,0x36,0x27,0x2b,0x33,0x24,0x28,0x39,0x2a,0x2e,0x36,0x27,0x2b,
0x35,0x24,0x28,0x3b,0x2a,0x2e,0x37,0x26,0x2a,0x35,0x24,0x28,0x3a,0x28,0x2f,0x37,
0x25,0x2c,0x35,0x24,0x28,0x3a,0x29,0x2d,0x36,0x22,0x27,0x2e,0x20,0x24,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdf,
0xdd,0xdd,0x2e,0x23,0x26,0x2f,0x20,0x24,0x30,0x21,0x25,0x33,0x24,0x28,0x31,0x22,
0x26,0x30,0x21,0x25,0x33,0x24,0x28,0x31,0x22,0x26,0x30,0x21,0x25,0x34,0x25,0x29,
0x31,0x23,0x27,0x2e,0x20,0x24,0x34,0x25,0x29,0x32,0x23,0x27,0x30,0x21,0x25,0x34,
0x25,0x29,0x33,0x24,0x28,0x30,0x21,0x25,0x34,0x25,0x29,0x33,0x24,0x28,0x30,0x21,
0x25,0x34,0x25,0x29,0x31,0x23,0x27,0x2f,0x21,0x25,0x33,0x25,0x29,0x31,0x23,0x27,
0x30,0x21,0x25,0x33,0x24,0x28,0x31,0x22,0x26,0x30,0x21,0x25,0x33,0x23,0x2a,0x31,
0x21,0x28,0x30,0x21,0x25,0x33,0x24,0x28,0x31,0x22,0x26,0x2e,0x23,0x26,0xdf,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xdd,
0xdd,0xdd,0x7b,0x76,0x78,0x2c,0x23,0x26,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,
0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,
0x2a,0x21,0x24,0x29,0x20,0x23,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,
0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x29,0x20,0x23,0x2a,0x21,
0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,
0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2a,
0x21,0x24,0x2a,0x21,0x24,0x2a,0x21,0x24,0x2c,0x24,0x25,0x7c,0x76,0x77,0xdd,0xdc,
0xde,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc5,
0xc5,0xc5,0xdd,0xdc,0xde,0xdf,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,
0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,
0xe0,0xdb,0xdd,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,
0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe2,0xdd,0xdf,0xe2,0xdd,0xdf,0xe1,0xdc,
0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,
0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe1,0xdc,0xde,0xe2,0xdd,0xdf,0xe2,0xdd,0xdf,0xe1,
0xdc,0xde,0xe1,0xdc,0xde,0xdf,0xdc,0xde,0xe0,0xde,0xde,0xdd,0xdd,0xdd,0xc6,0xc5,
0xc7,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x99,
0x9b,0x9b,0xc1,0xc3,0xc4,0xc0,0xc4,0xc5,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,
0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,
0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xba,0xbe,0xb9,
0xba,0xbe,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xba,0xbe,0xb9,0xba,0xbe,0xb9,0xbb,
0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,
0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,
0xbb,0xbc,0xb9,0xbb,0xbc,0xb9,0xbb,0xbc,0xc2,0xc4,0xc5,0xc1,0xc3,0xc4,0x99,0x9b,
0x9b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x99,
0x9b,0x9b,0xb4,0xb8,0xb9,0xa6,0xaa,0xab,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,
0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,
0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,
0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,
0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,
0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0x95,
0x99,0x9a,0x95,0x99,0x9a,0x95,0x99,0x9a,0xa6,0xaa,0xab,0xb4,0xb8,0xb9,0x99,0x9b,
0x9b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xb6,0xb8,0xb9,0xa8,0xaa,0xab,0x97,0x99,0x99,0x97,0x99,0x99,0x97,0x99,
0x9a,0x97,0x99,0x9a,0x97,0x99,0x99,0x97,0x99,0x99,0x97,0x99,0x9a,0x97,0x99,0x9a,
0x97,0x99,0x99,0x97,0x99,0x99,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,
0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,
0x9a,0x97,0x99,0x9a,0x97,0x99,0x99,0x97,0x99,0x99,0x97,0x99,0x9a,0x97,0x99,0x9a,
0x97,0x99,0x99,0x97,0x99,0x99,0x97,0x99,0x9a,0x97,0x99,0x9a,0x97,0x99,0x99,0x97,
0x99,0x99,0x97,0x99,0x9a,0x97,0x99,0x9a,0xa8,0xaa,0xaa,0xb6,0xb8,0xb8,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,0x1,0x1,0x1,0x0,0x0,0x0,
};
#endif
