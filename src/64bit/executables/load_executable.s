
.section .text
.global load_executable
.global return_after_executable
load_executable:
    push %rbp
    push %rdi
    push %rsi
    push %rdx
    push %rcx
    push %rbx
    push %r8
    push %r9
    push %r10
    push %r11
    push %r12
    push %r13
    push %r14
    push %r15
    mov %rsp, (previous_stack_register)

    jmp %rdi #execute external code

return_after_executable:
    mov (previous_stack_register), %rsp 
    pop %r15
    pop %r14
    pop %r13
    pop %r12
    pop %r11
    pop %r10
    pop %r9
    pop %r8
    pop %rbx
    pop %rcx
    pop %rdx
    pop %rsi
    pop %rdi
    pop %rbp
    ret

.section .data
    previous_stack_register: .quad 0
