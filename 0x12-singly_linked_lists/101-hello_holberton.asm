	global main
	extern printf

section .text

main:
	mov rdi, msg 
	mov rax, 0
	call printf
	mov rax, 0
	ret

section .data
	msg db "Hello, World", 10
