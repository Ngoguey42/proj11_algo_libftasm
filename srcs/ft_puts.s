;******************************************************************************;
;                                                                              ;
;                                                         :::      ::::::::    ;
;    ft_puts.s                                          :+:      :+:    :+:    ;
;                                                     +:+ +:+         +:+      ;
;    By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+         ;
;                                                 +#+#+#+#+#+   +#+            ;
;    Created: 2015/02/12 09:28:12 by ngoguey           #+#    #+#              ;
;    Updated: 2015/02/12 09:45:56 by ngoguey          ###   ########.fr        ;
;                                                                              ;
;******************************************************************************;

global ft_puts
	
ft_puts:
	jmp .null

.null:
	lea rcx, [rel nullstr]
	mov rdi, 1
	mov rsi, rcx
	mov rdx, nulllen
	mov rax, 0x2000004
	syscall
	
.end:
	ret
	
section .data
	nullstr:	db "(null)"
	nulllen:	equ $-nullstr
