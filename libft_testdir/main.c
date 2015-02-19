/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:29:25 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 16:34:00 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(void)
{
# ifdef TEST_ATOI
try_atoi();
# endif
# ifdef TEST_STRLCPY
try_strlcpy();
# endif
# ifdef TEST_BZERO
try_bzero();
# endif
# ifdef TEST_ISALNUM
try_isalnum();
# endif
# ifdef TEST_ISALPHA
try_isalpha();
# endif
# ifdef TEST_ISASCII
try_isascii();
# endif
# ifdef TEST_ISDIGIT
try_isdigit();
# endif
# ifdef TEST_ISPRINT
try_isprint();
# endif
# ifdef TEST_MEMCCPY
try_memccpy();
# endif
# ifdef TEST_MEMCHR
try_memchr();
# endif
# ifdef TEST_MEMCMP
try_memcmp();
# endif
# ifdef TEST_MEMCPY
try_memcpy();
# endif
# ifdef TEST_MEMMOVE
try_memmove();
# endif
# ifdef TEST_MEMSET
try_memset();
# endif
# ifdef TEST_STRCAT
try_strcat();
# endif
# ifdef TEST_STRCHR
try_strchr();
# endif
# ifdef TEST_STRCMP
try_strcmp();
# endif
# ifdef TEST_STRCPY
try_strcpy();
# endif
# ifdef TEST_STRDUP
try_strdup();
# endif
# ifdef TEST_STRLCAT
try_strlcat();
# endif
# ifdef TEST_STRLEN
try_strlen();
# endif
# ifdef TEST_STRNCAT
try_strncat();
# endif
# ifdef TEST_STRNCMP
try_strncmp();
# endif
# ifdef TEST_STRNCPY
try_strncpy();
# endif
# ifdef TEST_STRNSTR
try_strnstr();
# endif
# ifdef TEST_STRRCHR
try_strrchr();
# endif
# ifdef TEST_STRSTR
try_strstr();
# endif
# ifdef TEST_TOLOWER
try_tolower();
# endif
# ifdef TEST_TOUPPER
try_toupper();
# endif
# ifdef TEST_PUTS
try_puts();
# endif
# ifdef TEST_CAT
try_cat();
# endif


	return(0);
}
#include <unistd.h>

void ft_putstr(char *s)
{
	write(1, s, strlen(s));
}


void	ref_myassert(int relation)
{
	if (relation)
	{
		ft_putstr("\033[32m");
		ft_putstr("_TRUE");
	}
	else
	{
		ft_putstr("\033[31m");
		ft_putstr("FALSE");
	}
	ft_putstr("\033[39m");
}



void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n <= -10)
			ft_putnbr(-(n / 10));
		ft_putchar(-(n % 10) + '0');
		return ;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void    ft_myassert(int relation)
{
    ref_myassert(relation);
}

static void putbs(char c, int *count)
{
	ft_putstr("\033[33m");
	ft_putnbr(c);
	ft_putstr("\033[39m");
	if (c < 0)
		(*count)++;
	if (c <= -10 || c >= 10)
		(*count)++;
	if (c <= -100 || c >= 100)
		(*count)++;
}

static void putspecial(char c)
{
	ft_putstr("\033[33m\\");
	if (c == '\f')
		ft_putchar('f');
	else if (c == '\n')
		ft_putchar('n');
	else if (c == '\r')
		ft_putchar('r');
	else if (c == '\033')
		ft_putchar('e');
	else if (c > '\b')
		ft_putchar(c + 107);
	else
		ft_putchar(c + 90);
	ft_putstr("\033[39m");
}

int ref_myputnchar(char *str, int num)
{
	int count;

	if (!str)
	{
		ft_putstr("\033[33m(null)\033[39m");
		return (6);
	}
	count = 0;
	while (num > 0)
	{
		if (isprint(*str))
		{
			ft_putchar(*str);
		}
		else if ((*str >= '\a' && *str <= '\r') || *str == '\033')
		{
			count++;
			putspecial(*str);
		}
		else
			putbs(*str, &count);
		str++;
		num--;
		count++;
	}
	return (count);
}
