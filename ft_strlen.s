section .text
global ft_strlen

ft_strlen:
    mov rsi, 0
    call ft_strlen_loop
    mov rax, rsi
    mov rsi, 0
    ret

ft_strlen_loop:
    inc rsi
    cmp byte [rdi + rsi], 0x00
    jne ft_strlen_loop
    ret
