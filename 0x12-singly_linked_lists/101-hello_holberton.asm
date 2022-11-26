; -----------------------------------------------------------------------------------------------------------------------
; Writes Hello, Holberton to the console using only system calls. Runs on 64-bit system only
;
; To run the program, run this :
;
; ------------------------------------------------------------------------------------------------------------------------

	global	_start

	section .text
start:	mov	rax, 1			; system call for write
	mov	rdi, 1			; file handle 1 is stdout
	mov	rsi, message		; Address of string to handle
	mov	rdx, 17			;number of byted to output
	syscall				; invoke operating system to write
	mov	rax, 60			; system call for edit
	xor	rdi, rdi		; exit code 0
	syscall				; invoke operating sys o exiit

	section	.data
message	db;	"Hello, Holberton" 10	; note the newline at th end
