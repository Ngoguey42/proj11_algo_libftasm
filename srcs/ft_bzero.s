;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_bzero.s                                         :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 11:09:38 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 11:33:23 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_bzero

ft_bzero:

.loop:
	cmp rsi, 0
	je .end
	dec rsi
	mov [rdi], byte 0
	inc rdi
	jmp .loop
	
.end:
	ret
