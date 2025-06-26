section .text
global ft_strdup
extern ft_strlen

ft_strdup:
    mov rsi, rdi
    call ft_strlen
    mov rdi, rsi
    