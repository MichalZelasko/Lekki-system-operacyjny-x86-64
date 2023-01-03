#include <executables.h>
#include <memory.h>
#include <types.h>

extern char return_after_executable;

// mov rbx,5  
// mov rcx,3    
// mov rax,1
// power:
//     mul rbx
//     loop power
// calculates 5^3
uint8_t powers_program[26] = { 0x48, 0xC7, 0xC3, 0x05, 0x00, 0x00, 0x00, 0x48, 0xC7, 0xC1,
 0x03, 0x00, 0x00, 0x00, 0x48, 0xC7, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x48, 0xF7, 0xE3, 0xE2, 0xFB };

// mov rbx,5
// mov rax,3
// add rax, rbx
// calculates 3 + 5
uint8_t adding_program[17] = { 0x48, 0xC7, 0xC3, 0x05, 0x00, 0x00, 0x00, 0x48, 0xC7, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x48, 0x01, 0xD8 };

uint8_t load_executable_handler() {
    uint32_t code_size = 17;
    
    uint8_t* code_ptr = malloc(code_size + 5);
    code_ptr[code_size] = 0xe9; // relative jump instruction
    *((uint32_t*)(code_ptr + code_size + 1)) = (uint32_t) ((uint8_t*)&return_after_executable - code_ptr - code_size - 5 );
    memcpy(code_ptr, adding_program, code_size);

    uint8_t return_value = load_executable(code_ptr);
    free(code_ptr);
    return return_value;
}

uint8_t load_executable_handler_function(uint32_t code_size, uint8_t *program) {   
    uint8_t* code_ptr = malloc(code_size + 5);
    code_ptr[code_size] = 0xe9; // relative jump instruction
    *((uint32_t*)(code_ptr + code_size + 1)) = (uint32_t) ((uint8_t*)&return_after_executable - code_ptr - code_size - 5 );
    memcpy(code_ptr, program, code_size);

    uint8_t return_value = load_executable(code_ptr);
    free(code_ptr);
    return return_value;
}
