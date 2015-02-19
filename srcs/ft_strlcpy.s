;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlcpy.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/19 08:11:29 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/19 08:38:16 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strlcpy
extern ft_strlen

ft_strlcpy:
	push rdi
	push rsi
	mov r9, rdx
	mov rdi, rsi
	call ft_strlen
	mov r10, rax
	pop rsi
	pop rdi
	
.loop:
	cmp r9, 1
	jle .endloop
	cmp [rsi], byte 0
	je .endloop

	mov cl, [rsi]
	mov [rdi], cl
	inc rsi
	inc rdi
	dec r9
	jmp .loop
	
.endloop:
	cmp r9, 1
	jl .end
	mov [rdi], byte 0

.end:
	mov rax, r10
	ret




