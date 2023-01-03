.set IRQ_BASE, 0x20

.section .text

.extern handle_interrupt_main

.macro handle_exception num
.global handle_exception\num
handle_exception\num:
    movb $\num, (interruptnumber)
    jmp int_bottom
.endm


.macro handle_interrupt num
.global handle_interrupt\num
handle_interrupt\num:
    movb $\num + IRQ_BASE, (interruptnumber)
    jmp int_bottom
.endm

handle_exception 0x00
handle_exception 0x01
handle_exception 0x02
handle_exception 0x03
handle_exception 0x04
handle_exception 0x05
handle_exception 0x06
handle_exception 0x07
handle_exception 0x08
handle_exception 0x09
handle_exception 0x0A
handle_exception 0x0B
handle_exception 0x0C
handle_exception 0x0D
handle_exception 0x0E
handle_exception 0x0F
handle_exception 0x10
handle_exception 0x11
handle_exception 0x12
handle_exception 0x13
handle_exception 0x14
handle_exception 0x15
handle_exception 0x16
handle_exception 0x17
handle_exception 0x18
handle_exception 0x19
handle_exception 0x1A
handle_exception 0x1B
handle_exception 0x1C
handle_exception 0x1D
handle_exception 0x1E
handle_exception 0x1F

handle_interrupt 0x00
handle_interrupt 0x01
handle_interrupt 0x02
handle_interrupt 0x03
handle_interrupt 0x04
handle_interrupt 0x05
handle_interrupt 0x06
handle_interrupt 0x07
handle_interrupt 0x08
handle_interrupt 0x09
handle_interrupt 0x0A
handle_interrupt 0x0B
handle_interrupt 0x0C
handle_interrupt 0x0D
handle_interrupt 0x0E
handle_interrupt 0x0F

handle_interrupt 0x10
handle_interrupt 0x11
handle_interrupt 0x12
handle_interrupt 0x13
handle_interrupt 0x14
handle_interrupt 0x15
handle_interrupt 0x16
handle_interrupt 0x17
handle_interrupt 0x18
handle_interrupt 0x19
handle_interrupt 0x1A
handle_interrupt 0x1B
handle_interrupt 0x1C
handle_interrupt 0x1D
handle_interrupt 0x1E
handle_interrupt 0x1F

handle_interrupt 0x20
handle_interrupt 0x21
handle_interrupt 0x22
handle_interrupt 0x23
handle_interrupt 0x24
handle_interrupt 0x25
handle_interrupt 0x26
handle_interrupt 0x27
handle_interrupt 0x28
handle_interrupt 0x29
handle_interrupt 0x2A
handle_interrupt 0x2B
handle_interrupt 0x2C
handle_interrupt 0x2D
handle_interrupt 0x2E
handle_interrupt 0x2F

handle_interrupt 0x30
handle_interrupt 0x31
handle_interrupt 0x32
handle_interrupt 0x33
handle_interrupt 0x34
handle_interrupt 0x35
handle_interrupt 0x36
handle_interrupt 0x37
handle_interrupt 0x38
handle_interrupt 0x39
handle_interrupt 0x3A
handle_interrupt 0x3B
handle_interrupt 0x3C
handle_interrupt 0x3D
handle_interrupt 0x3E
handle_interrupt 0x3F

handle_interrupt 0x40
handle_interrupt 0x41
handle_interrupt 0x42
handle_interrupt 0x43
handle_interrupt 0x44
handle_interrupt 0x45
handle_interrupt 0x46
handle_interrupt 0x47
handle_interrupt 0x48
handle_interrupt 0x49
handle_interrupt 0x4A
handle_interrupt 0x4B
handle_interrupt 0x4C
handle_interrupt 0x4D
handle_interrupt 0x4E
handle_interrupt 0x4F

handle_interrupt 0x50
handle_interrupt 0x51
handle_interrupt 0x52
handle_interrupt 0x53
handle_interrupt 0x54
handle_interrupt 0x55
handle_interrupt 0x56
handle_interrupt 0x57
handle_interrupt 0x58
handle_interrupt 0x59
handle_interrupt 0x5A
handle_interrupt 0x5B
handle_interrupt 0x5C
handle_interrupt 0x5D
handle_interrupt 0x5E
handle_interrupt 0x5F

handle_interrupt 0x60
handle_interrupt 0x61
handle_interrupt 0x62
handle_interrupt 0x63
handle_interrupt 0x64
handle_interrupt 0x65
handle_interrupt 0x66
handle_interrupt 0x67
handle_interrupt 0x68
handle_interrupt 0x69
handle_interrupt 0x6A
handle_interrupt 0x6B
handle_interrupt 0x6C
handle_interrupt 0x6D
handle_interrupt 0x6E
handle_interrupt 0x6F

int_bottom:
    push %rbp
    push %rdi
    push %rsi
    push %rdx
    push %rcx
    push %rbx
    push %rax
    push %r8
    push %r9
    push %r10
    push %r11
    push %r12
    push %r13
    push %r14
    push %r15

    # call C Handler
    mov (interruptnumber), %rdi
    mov %rsp, %rsi
    call handle_interrupt_main
    mov %rax, %rsp # switch the stack

    # restore registers
    pop %r15
    pop %r14
    pop %r13
    pop %r12
    pop %r11
    pop %r10
    pop %r9
    pop %r8
    pop %rax
    pop %rbx
    pop %rcx
    pop %rdx
    pop %rsi
    pop %rdi
    pop %rbp
    iretq

.global ignore_interrupt
ignore_interrupt:
    iretq

.data
    interruptnumber: .byte 0
