;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_cat.s                                           :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 14:23:07 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 15:19:02 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_cat

ft_cat:
	mov r8, rdi					;saving fd
	lea rsi, [rel buf]			;setting read buf: arg2reg	

.loop_init:
	mov rdi, r8					;reseting fd:arg1reg

.loop:
	mov rdx, buflen				;setting read len: arg3reg
	mov rax, 0x2000003			;setting read index: retreg
	syscall
	jc .error
	cmp rax, 0
	je .end
	mov rdi, 1					;setting write fd:arg1reg
	mov rdx, rax				;setting read len: arg3reg
	mov rax, 0x2000004			;setting write index: retreg
	;; lea rsi, [rel buf]			;setting read buf: arg2reg
	syscall
	jmp .loop_init

.error:
	ret

.end:
	ret
	
section .bss
	buf:	resb 256
	buflen:	equ $-buf







	
