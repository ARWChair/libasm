section .text
global ft_write
extern __errno_location

ft_write:
	mov rax, 1
	syscall
	cmp rax, 0
	jl ft_write_error
	ft_write_end:
		ret

ft_write_error:
	neg rax
	mov r9, rax
	call __errno_location
	mov [rax], r9
	mov rax, -1
	jmp ft_write_end