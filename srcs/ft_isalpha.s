;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalpha.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 08:59:51 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:06:29 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_isalpha

ft_isalpha:
	cmp rdi, 'A'
	jl .false
	cmp rdi, 'z'
	jg .false
	cmp rdi, 'Z'
	jle .true
	cmp rdi, 'a'
	jge .true

.false:
	mov rax, 0
	ret

.true:
	mov rax, 1
	ret
