;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 11:40:08 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 12:08:51 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcpy
extern ft_memcpy
	
ft_strcpy:
	mov rcx, rsi
	mov rdx, 1

.loop:
	cmp [rcx], byte 0
	je .found
	inc rdx
	inc rcx
	jmp .loop
	
.found:
	jmp ft_memcpy
	;; call ft_strcpy
	;; ret


	
