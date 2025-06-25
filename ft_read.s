section .text
global ft_read
extern __errno_location

ft_read:
    mov rax, 0
    syscall
    cmp rax, 0
    jl ft_read_error
    ret

ft_read_error:
    neg rax
    mov rdi, rax
    call __errno_location
    mov [rax], edi
    mov rax, -1
    ret
