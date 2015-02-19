;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlcat.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/19 07:11:41 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/19 07:46:58 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strlcat
extern ft_strlen

ft_strlcat:
	push rdi
	push rsi
	mov r9, rdx
	call ft_strlen
	cmp rax, r9
	jl .sizelower

.sizegreater:
	mov r8, r9
	jmp .p2
	
.sizelower:
	mov r8, rax

.p2:
	mov r10, rax
	pop rdi
	push rdi
	call ft_strlen
	add r8, rax
	pop rsi
	pop rdi
	add rdi, r10
	
.loop:
	inc r10
	cmp r10, r9
	jge .end
	cmp [rsi], byte 0
	je .end
	mov cl, [rsi]
	mov [rdi], cl
	inc rsi
	inc rdi	
	jmp .loop
	
.end:	
	mov [rdi], byte 0
	mov rax, r8
	ret






