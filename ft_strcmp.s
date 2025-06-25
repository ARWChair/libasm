section .text
global ft_strcmp
extern ft_strlen

ft_strcmp:
    call ft_strlen
    mov rdx, rax
    call ft_strlen
    mov rcx, rax
    cmp rdx, rcx
    jl first_bigger
    ; jnl second_bigger
    mov rcx, 0
    call compare_strings
    ; mov rcx, 0
    ; mov rdx, 0
    ; mov rax, 0
    ret

compare_strings:
    mov al, byte [rdi + rcx]    ; lade Zeichen aus s1
    cmp byte [rsi + rcx], al             ; vergleiche Zeichen
    jne second_bigger
    inc rcx
    cmp rcx, rdx
    jne compare_strings
    ret

first_bigger:
    mov rax, 1
    ret

second_bigger:
    mov rax, -1
    ret
