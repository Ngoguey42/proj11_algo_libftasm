;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_isalnum.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:13:01 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:14:52 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_isalnum

ft_isalnum:
	cmp rdi, '0'
	jl .false
	cmp rdi, 'z'
	jg .false
	cmp rdi, '9'
	jle .true
	cmp rdi, 'A'
	jl .false
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
