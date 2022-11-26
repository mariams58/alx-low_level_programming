; -----------------------------------------------------------------------------------------------------------------------
; Writes Hello, Holberton to the console using only c-library printf. Runs on 64-bit system only
;
; To run the program, run this :
;
; --------------------------------------------------------------------------------------------------------------------------
	SECTION .data
msg:    db "Hello, Holberton", 0

fmt:    db "%s", 10, 0



        SECTION .text
	extern printf
	global main	; the standard cc entry point
main:			; the program label entry point
        mov esi, msg    ; 64-bit ABI passing order starts w/ edi, esi, ...
	mov edi, fmt    ;
	mov eax, 0      ; printf is varargs, so EAX counts # of non-integer arguments being passed
	call printf

	mov ebx, 0      ; normal-exit code
	mov eax, 1      ; process-termination service
