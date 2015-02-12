;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_puts.s                                          :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:28:12 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 11:01:40 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_puts
	
ft_puts:
	cmp rdi, 0
	je .null
	mov rax, 0
	push rdi
	
.loop:
	mov rdx, [rdi]
	cmp dl, 0
	je .found
	inc rax
	inc rdi
	jmp .loop
	
.found:
	mov rdi, 1
	pop rsi
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	jmp .end
	
.null:
	lea rcx, [rel nullstr]
	mov rdi, 1
	mov rsi, rcx
	mov rdx, nulllen
	mov rax, 0x2000004
	syscall

.end:
	mov rdi, 10
	lea rcx, [rel buf]
	mov [rcx], dil
	mov rdi, 1
	mov rsi, rcx
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	ret

section .data
	nullstr:	db "(null)"
	nulllen:	equ $-nullstr

section .bss
	buf:		resb 1
