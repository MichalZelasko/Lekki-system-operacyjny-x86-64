
#ifndef __UTILS_H
#define __UTILS_H
#include <types.h>

void mprintf(char* str);
void printfHex(uint8_t key);
void printfHex16(uint16_t key);
void printfHex32(uint32_t key);
void printfHex64(uint64_t key);
void printf_memory(uint64_t start, uint64_t end);
void clearScreen();

int32_t min(int32_t x, int32_t y);
int32_t max(int32_t x, int32_t y);
int32_t round(double x);
int32_t in_range(int32_t min_val, int32_t max_val, int32_t val);

#endif
