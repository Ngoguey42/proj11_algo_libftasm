;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_toupper.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:17:40 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:24:38 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_toupper

ft_toupper:
	cmp rdi, 'a'
	jl .not_lowercase
	cmp rdi, 'z'
	jg .not_lowercase
	sub rdi, 'a' - 'A'
	mov rax, rdi
	ret

.not_lowercase:
	mov rax, rdi
	ret
