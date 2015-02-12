;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memset.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 13:38:40 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 13:41:12 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memset

ft_memset:
	mov r8, rdi
	mov rcx, rdx
	mov rax, rsi
	rep stosb
	mov rax, r8
	ret
