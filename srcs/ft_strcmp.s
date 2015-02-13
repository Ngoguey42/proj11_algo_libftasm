;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcmp.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/13 09:00:42 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/13 09:20:21 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcmp

ft_strcmp:
	jmp .loop

.loop_init:
	cmp al, 0
	je .found
	inc rdi
	inc rsi
	dec rdx

.loop:
	mov rax, 0
	mov rcx, 0
	mov al, [rdi]
	mov cl, [rsi]
	cmp al, cl

	je .loop_init

.found:
	sub rax, rcx
	ret

