section .text
global ft_strcmp

ft_strcmp:
	;rdi = first arg
	;rsi = second arg
	mov r9, 0
	mov rax, 0
	ft_strcmp_whileloop:
		mov al, byte[rdi + r9]
		cmp byte [rsi + r9], al
		jne ft_strcmp_endloop
		cmp byte [rdi + r9], 0
		je ft_strcmp_endloop
		cmp byte [rsi + r9], 0
		je ft_strcmp_endloop
		inc r9
		jmp ft_strcmp_whileloop
	ft_strcmp_endloop:
		mov rax, [rdi + r9]
		and rax, 255
		mov r10, [rsi + r9]
		and r10, 255
		sub rax, r10
		ret