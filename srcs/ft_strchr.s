;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/13 09:57:17 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/13 10:05:24 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strchr
extern ft_strlen
extern ft_memchr

	
ft_strchr:
	push rdi
	push rsi
	call ft_strlen
	pop rsi
	pop rdi
	mov rdx, rax
	inc rdx
	jmp ft_memchr
