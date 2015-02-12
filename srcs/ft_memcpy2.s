;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memcpy2.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 13:22:33 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 13:22:38 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memcpy2

ft_memcpy2:
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
