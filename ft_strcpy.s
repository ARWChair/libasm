section .text
global ft_strcpy


ft_strcpy:
	;rdi = first arg
	;rsi = second arg
	mov r9, 0
	ft_strcpy_whileloop:
		cmp byte [rsi + r9], 0
		je ft_strcpy_endloop
		mov al, byte [rsi + r9]
		mov byte [rdi + r9], al
		inc r9
		jmp ft_strcpy_whileloop
	ft_strcpy_endloop:
		ret