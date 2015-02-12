;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isprint.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:15:47 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:17:06 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_isprint

ft_isprint:
	cmp rdi, ' '
	jl .false
	cmp rdi, 0x7f
	jge .false
	mov rax, 1
	ret

.false:
	mov rax, 0
	ret

