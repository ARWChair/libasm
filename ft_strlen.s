section .text
global ft_strlen

ft_strlen:
	mov rdx, 0
	ft_strlen_whileloop:
		cmp byte [rdi + rdx], 0
		je ft_strlen_endloop
		inc rdx
		jmp ft_strlen_whileloop
	ft_strlen_endloop:
		mov rax, rdx
		ret
