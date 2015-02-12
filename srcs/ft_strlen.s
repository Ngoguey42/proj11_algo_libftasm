;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strlen.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 10:15:05 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 10:40:25 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strlen

ft_strlen:
	mov rdx, rdi
	mov rax, 0
	mov rcx, -1
	repnz scasb
	sub rdi, rdx
	dec rdi
	mov rax, rdi
	ret
