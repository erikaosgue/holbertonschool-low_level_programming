; Hello_Holberton.asm

; Author: Erika Osorio
; Date: 20-Mar-2020

; Declaration of C functions

	extern printf		; the function printf, to be called

	section .data		; Initialized variables (section data)
msg: 	db "Hello, Holberton", 0; C string and the 0 value as a null
fmt: 	db "%s", 10, 0		; The printf format , "\n", '0'

	section .text		; (Section code).

	global main		; ENTRY POINT OF THE PROGRAM
main:				; the function main represent the entry point of the program
	push rbp		; Push the value of the register (base pointer) onto the stack

	mov rdi,fmt		; move address of format to register rdi
	mov rsi,msg		; move addres of date (message) to register rsi
	mov rax,0		; can be also xor rax
	call printf		; call C function printf
	pop	rbp		; restore stack

	mov rax,0		; move 0 to register rax. (normal, no error,return value 0)
	ret			; return
