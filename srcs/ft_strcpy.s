;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 14:00:33 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 14:13:46 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcpy
extern ft_memcpy
extern ft_strlen

ft_strcpy:
	push rdi
	push rsi
	mov rdi, rsi
	call ft_strlen
	inc rax
	mov rdx, rax				;setting memcpy size
	pop rsi						;setting memcpy src
	pop rdi						;setting memcpy dst
	jmp ft_memcpy
