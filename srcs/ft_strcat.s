;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 12:09:16 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 14:00:05 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcat
extern ft_strcpy2

ft_strcat:
	mov r8, rdi

.loop:
	cmp [rdi], byte 0
	je .found
	inc rdi
	jmp .loop

.found:
	call ft_strcpy2
	mov rax, r8
	ret
