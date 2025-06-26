section .text
global ft_strcpy

ft_strcpy:
    mov rdx, 0
    mov rdi, 0
    jmp ft_strcpy_loop

ft_strcpy_loop:
    cmp byte [rsi + rdx], 0x00
    je ft_strcpy_end
    mov al, byte [rsi + rdx]
    mov byte [rdi + rdx], al
    inc rdx
    jmp ft_strcpy_loop

ft_strcpy_end:
    mov rax, rdi
    mov rdx, 0
    ret
