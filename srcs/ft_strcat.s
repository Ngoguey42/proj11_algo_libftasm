;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_strcat.s                                        :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 12:09:16 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 12:12:49 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_strcat
extern ft_strcpy

ft_strcat:

.loop:
	cmp [rdi], byte 0
	je .found
	inc rdi
	jmp .loop

.found:
	jmp ft_strcpy
