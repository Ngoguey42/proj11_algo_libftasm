;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isdigit.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:06:59 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:08:48 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_isdigit

ft_isdigit:
	cmp rdi, '0'
	jl .false
	cmp rdi, '9'
	jg .false
	mov rax, 1
	ret
	
.false:
	mov rax, 0
	ret
