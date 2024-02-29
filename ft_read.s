section .text
global ft_read
extern __errno_location

ft_read:
	mov rax, 0
	syscall
	cmp	rax, 0
	jl ft_read_error
	ft_read_end:
		ret

ft_read_error:
	neg rax
	mov r9, rax
	call __errno_location
	mov [rax], r9
	mov rax, -1
	jmp ft_read_end