#ifndef MEMORY_H
#define MEMORY_H
#include <types.h>

void memcpy(void* to, void* from, size_m n);
void init_memory_blocks();
void* malloc(size_m size);
void free(void* start);
void* bitmask_memcpy(void* to, void* from, void* bitmask, size_m n);

#endif