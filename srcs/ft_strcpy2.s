;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy2.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 13:59:52 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 13:59:57 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcpy2
extern ft_memcpy2

ft_strcpy2:
	mov rcx, rsi
	mov rdx, 1

.loop:
	cmp [rcx], byte 0
	je .found
	inc rdx
	inc rcx
	jmp .loop
	
.found:
	jmp ft_memcpy2


	
