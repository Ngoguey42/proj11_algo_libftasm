;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strdup.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 13:43:34 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 14:12:15 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strdup
extern malloc
extern ft_strlen
extern ft_memcpy
	

ft_strdup:
	push rdi					;saving src pointer
	call ft_strlen
	inc rax
	push rax					;saving size
	mov rdi, rax				;setting size for malloc
	call malloc
	cmp rax, 0					;checking malloc's return value
	je .error
	mov rdi, rax				;setting memcpy dst 
	pop rdx						;setting memcpy size
	pop rsi						;setting memcpy src
	jmp ft_memcpy
	
	

.error:
	ret
