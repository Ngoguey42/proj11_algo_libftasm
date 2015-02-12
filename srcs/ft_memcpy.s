;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcpy.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 11:41:33 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 11:54:47 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memcpy

ft_memcpy:
	mov rax, rdi
	
.loop:
	cmp rdx, 0
	je .end
	dec rdx
	mov cl, [rsi]
	mov [rdi], cl
	inc rdi
	inc rsi
	jmp .loop

.end:
	ret
