;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_memchr.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/13 09:22:32 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/13 09:44:07 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_memchr

ft_memchr:
	cmp rdx, 0
	je .null
	mov al, sil
	mov rcx, rdx
	repnz scasb
	dec rdi
	mov cl, [rdi]
	cmp cl, al
	jne .null
	mov rax, rdi
	ret

.null:
	mov rax, 0
	ret