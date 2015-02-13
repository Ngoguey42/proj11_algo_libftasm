;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/13 06:53:55 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/13 08:59:02 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memcmp

ft_memcmp:
	jmp .loop

.loop_init:
	inc rdi
	inc rsi
	dec rdx
	
.loop:
	cmp rdx, 0
	je .size_zero
	mov rax, 0
	mov rcx, 0
	mov al, [rdi]
	mov cl, [rsi]
	cmp al, cl
	je .loop_init
	sub rax, rcx
	ret
	
.size_zero:
	mov rax, 0
	ret
