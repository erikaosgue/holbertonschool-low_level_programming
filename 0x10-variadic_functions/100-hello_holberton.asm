;hello_world.asm

;Author: Erika Osorio 
;Date: 15-Mar-2020

global main

section .text:

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, message_length
	syscall

	; exiting 

	mov rax, 60
	xor rdi, rdi
	syscall


section .data:
	message db "Hello, Holberton", 10
	message_length equ $-message
