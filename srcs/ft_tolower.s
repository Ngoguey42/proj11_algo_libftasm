;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_tolower.s                                       :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:27:10 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:27:28 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_tolower

ft_tolower:
	cmp rdi, 'A'
	jl .not_lowercase
	cmp rdi, 'Z'
	jg .not_lowercase
	add rdi, 'a' - 'A'
	mov rax, rdi
	ret

.not_lowercase:
	mov rax, rdi
	ret
