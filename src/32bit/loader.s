.set MAGIC, 0x1badb002
.set FLAGS, (1<<0 | 1<<1 | 1 << 2)
.set CHECKSUM, -(MAGIC + FLAGS)

.section .multiboot
    .long MAGIC
    .long FLAGS
    .long CHECKSUM
    .space 20
    .long 0
    .long 1024
    .long 768
    .long 24


.section .text
.extern kernel_main
.global load_kernel
.global loader

loader:
    mov $kernel_stack, %esp
    mov %ebx, (multiboot_structure_ptr)
    call check_A20
    call enable_sse
    call detect_long_mode
    call setup_paging
load_kernel:
    mov (multiboot_structure_ptr), %edi
    call kernel_main
.loop:
    hlt
    jmp .loop

.section .kernel
.global page_tables
.global interrupt_stack
.global kernel_heap

.space 20*1024*1024 # 20MB kernel_stack
kernel_stack:
.space 5*1024*1024 # 5MB interrupt_stack
interrupt_stack:
.space 1024
.align 4 * 1024
page_tables:
.space 18 * 1024 * 1024 # 18MB
kernel_heap:

.section .data
    multiboot_structure_ptr: .long 0
