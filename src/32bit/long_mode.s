.section .text
.global detect_long_mode
.code32
// .extern printf

detect_long_mode:
    #testing for cpuid
    pushf
    pop %eax
    mov %eax, %ecx 
    xor $(1 << 21), %eax
    push %eax
    popf
    pushf
    pop %eax
    push %ecx
    popf
    xor %ecx, %eax
    jz no_cpuid
    
    # cpuid is found printing success message, then testing for the long mode
    push $message_cpuid_found
    // call printf
    add $4, %esp

    pusha

    #test for extended functions
    mov $0x80000000, %eax
    cpuid                  
    cmp $0x80000001, %eax  
    jb no_long_mode

    #long mode test
    mov $0x80000001, %eax
    cpuid
    test $(1 << 29), %edx
    jz no_long_mode

    popa
    #print long mode is available message
    push $message_long_mode_available
    // call printf
    add $4, %esp

    ret

no_cpuid:
    push $message_cpuid_missing 
    // call printf
    add $4, %esp
    hlt # TODO handle no cpuid case instead of halting
    ret

no_long_mode:
    push $message_no_long_mode
    // call printf
    add $4, %esp
    hlt

.section .data

message_cpuid_found:
    .asciz  "cpuid deteced. Proceeding...\n"

message_cpuid_missing:
    .asciz  "cpuid not found. This is not supported yet. Halting\n"
    
message_no_long_mode:
    .asciz "Long mode not supported. Halting\n"

message_long_mode_available:
    .asciz "Long mode is available!\n"
    