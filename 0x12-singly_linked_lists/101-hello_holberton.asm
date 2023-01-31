section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; printf("Hello, Holberton\n")
    mov edx, 13
    mov ecx, hello
    mov ebx, 1
    mov eax, 4
    int 0x80

    ; exit(0)
    mov eax, 1
    xor ebx, ebx
    int 0x80
