section .text
global ft_strcmp
extern ft_strlen

ft_strcmp:
    mov r8, 0
    jmp ft_strcmp_loop

ft_strcmp_loop:
    mov al, byte [rdi + r8]
    cmp byte [rsi + r8], al
    jne ft_strcmp_fail
    cmp al, 0x00
    je both_same
    inc r8
    jmp ft_strcmp_loop

ft_strcmp_fail:
    cmp byte [rsi + r8], al
    jl left_lower
    cmp al, byte [rsi + r8]
    jl right_lower

both_same:
    mov rax, 0
    ret

left_lower:
    mov rax, 1
    ret

right_lower:
    mov rax, -1
    ret
