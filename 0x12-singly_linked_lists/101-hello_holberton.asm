section .text

	global main
	extern printf

main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf
	mov eax, 0
	ret

section .data
	msg db "Hello, World", 0
	fmt db "%s", 10, 0
