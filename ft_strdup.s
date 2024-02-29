section .text
global ft_strdup
extern ft_strlen
extern malloc
extern ft_strcpy
extern __errno_location

ft_strdup:
	push rdi
	call ft_strlen
	mov rdi, rax
	inc rdi
	call malloc
	cmp rax, 0
	je ft_strdup_bad_alloc
	pop rsi
	mov rdi, rax
	call ft_strcpy
	mov rax, rdi
	mov byte [rax + r9], 0
	ft_strdup_end:
		ret

ft_strdup_bad_alloc:
	call __errno_location
	mov word[rax], 12
	jmp ft_strdup_end