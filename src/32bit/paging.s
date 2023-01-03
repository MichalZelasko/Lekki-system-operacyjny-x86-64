.section .text
.global setup_paging
.code32
.extern kernel_main
.extern load_kernel
.extern page_tables



setup_paging:
    mov $page_tables, %edi  # set up paging right after the stack, with 1024 bytes buffer, 4KB aligned
    mov %edi, %cr3          # set cr3 register to page_tables
    xor %eax, %eax          # nullify eax
    mov $1024 * (4096 + 8 + 1 + 1), %ecx  # nullify memory before identity mapping 8GB of memory (4096 PT + 8 PDT + 1 PDPT + 1 PL4)                
    rep stos %eax, %es:(%edi)             # execute nullifying memory
    mov %cr3, %edi                        # set destination index to page_tables

    // PL4
    movl $page_tables + 0x1003, (%edi)    # set PL4 entry 
    add $0x1000, %edi               

    // PLPT
    movl $page_tables + 0x2003, (%edi)    # set first 8 PLPT entries 
    add $8, %edi
    movl $page_tables + 0x3003, (%edi)
    add $8, %edi
    movl $page_tables + 0x4003, (%edi)
    add $8, %edi
    movl $page_tables + 0x5003, (%edi)
    add $8, %edi
    movl $page_tables + 0x6003, (%edi)
    add $8, %edi
    movl $page_tables + 0x7003, (%edi)
    add $8, %edi
    movl $page_tables + 0x8003, (%edi)
    add $8, %edi
    movl $page_tables + 0x9003, (%edi)
    sub $7 * 8, %edi
    add $0x1000, %edi               
    
    // PDT
    mov $8 * 512, %ecx                               # setting up 512 entries in 8 tables
    mov $page_tables + ((8 + 1 + 1) * 0x1000), %ebx  # ebx holds address of page table
    add $0x3, %ebx                                   # page permissions flags
.set_pdt_entry:
    movl %ebx, (%edi)            
    add $8, %edi        
    add $0x1000, %ebx            
    loop .set_pdt_entry

    mov $0x00000003, %ebx           # permissions
    mov $4096 * 512, %ecx           # 512 entires in 4096 tables
.set_pt_entry:
    mov %ebx, (%edi)                # Set the uint32_t at the destination index to the B-register.
    add $0x1000, %ebx               # Add 0x1000 to the B-register.
    add $8, %edi                    # Add eight to the destination index.
    loop .set_pt_entry              # Set the next entry.


    mov %cr4, %eax                  # Set the A-register to control register 4.
    or $(1 << 5), %eax              # Set the PAE-bit, which is the 6th bit (bit 5).
    mov %eax, %cr4                  # Set control register 4 to the A-register.

    mov $0xC0000080, %ecx           # Set the C-register to 0xC0000080, which is the EFER MSR.
    rdmsr                           # Read from the model-specific register.
    or $(1 << 8), %eax              # Set the LM-bit which is the 9th bit (bit 8).
    wrmsr                           # Write to the model-specific register.

    mov %cr0, %eax                  # Set the A-register to control register 0.
    or $(1 << 31), %eax             # Set the PG-bit, which is the 32nd bit (bit 31).
    mov %eax, %cr0                  # Set control register 0 to the A-register.

    lgdt .Pointer
    ljmp $0x0008, $.long_mode         # 0x0008 selector of code segment in gdt.

.code64
.long_mode:
    cli                                     # Clear the interrupt flag.
    mov $0x10, %ax                          # Set the A-register to the data descriptor.
    mov %ax, %ds                            # Set the data segment to the A-register.
    mov %ax, %es                            # Set the extra segment to the A-register.
    mov %ax, %fs                            # Set the F-segment to the A-register.
    mov %ax, %gs                            # Set the G-segment to the A-register.
    mov %ax, %ss                            # Set the stack segment. Only writable segment selector can be written to SS (intel manual vol 3A pg. 157)
    mov $0x18, %ax
    ltr %ax

    jmp load_kernel

.section .data
.gdt:
 
.Null:
    .quad 0x0000000000000000             # Null Descriptor - should be present.
.Code:
    .quad 0x00209A0000000000             # 64-bit code descriptor (exec/read).
.Data:
    .quad 0x0000920000000000             # 64-bit data descriptor (read/write).
.TSS:
    .octa 0x00000000000000000000890000000068  # 128-bit task state segment descriptor, base 0, limit 104.

.align 4
.word 0                              # Padding to make the "address of the GDT" field aligned on a 4-byte boundary
 
.Pointer:
    .word . - .gdt - 1                    # 16-bit Size (Limit) of GDT.
    .long .gdt                            # 32-bit Base Address of GDT. (CPU will zero extend to 64-bit)
    