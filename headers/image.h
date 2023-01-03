#ifndef IMAGE_H
#define IMAGE_H
#include <types.h>
#include <widget.h>

void image_create(Widget* widget, uint32_t width, uint32_t height, uint8_t* bitmap, uint8_t* bitmask);
void image_destory();

#endif