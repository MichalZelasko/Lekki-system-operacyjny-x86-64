#ifndef EXECUTABLES_H
#define EXECUTABLES_H
#include <types.h>

extern char return_after_executable;

uint8_t load_executable_handler();
uint8_t load_executable(void* code);
uint8_t load_executable_handler_function(uint32_t code_size, uint8_t *program);

#endif