.section .text
.global check_A20
.code32
// .extern printf

check_A20:   
    pushal
    mov $0x112345, %edi 
    mov $0x012345, %esi   
    mov %esi, (%esi) 
    mov %edi, (%edi)
    cmpsd             
    popal
    jne A20_on
    push $disabled_message
    // call printf
    add $4, %esp
    hlt # TODO try to enable line A20 instead of halting program
    ret               
 
A20_on:
    push $active_message
    // call printf
    add $4, %esp
    ret

.section .data

disabled_message:
    .asciz "Line A20 is disabled. Not supported yet. Stopping execution.\n"

active_message:
    .asciz "Line A20 is enabled. Proceeding...\n"
