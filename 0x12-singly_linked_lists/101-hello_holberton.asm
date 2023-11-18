global main
	extern printf

main:
	mov edi, format
	xor eax, eax
	call printf
	mov eax, eax 
	ret

format: db 'Hello, Holberton', 10, 0
