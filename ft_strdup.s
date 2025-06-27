section .text
global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location

ft_strdup:
    push rdi
    call ft_strlen
    mov rdi, rax
    call malloc
    cmp rax, 0x00
    je ft_strdup_failed
    pop rdi
    mov rsi, rdi
    mov rdi, rax
    call ft_strcpy
    ret

ft_strdup_failed:
    call __errno_location
    mov rsi, rax
    mov eax, [rsi]
    ret
