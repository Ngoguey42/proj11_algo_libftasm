/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:21:13 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 17:14:26 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>
# include <ctype.h>
# include <libfts.h>

/* void ft_putchar(char c); */
void ft_putstr(char *s);
void    ft_myassert(int relation);
int ref_myputnchar(char *str, int num);
void	ref_myassert(int relation);

#define ABS(ARG) (ARG < 0 ? -ARG : ARG)

typedef unsigned int t_ui32;


/*

gcc -Wall -Wextra -Werror newmain.c libfts.a -I .


make re && gcc -Wall -Wextra -Werror newmain.c libfts.a -I . && ./a.out | less

*/

 # define TEST_BZERO
 # define TEST_STRCAT
 # define TEST_ISALPHA
 # define TEST_ISDIGIT
 # define TEST_ISALNUM
 # define TEST_ISASCII
 # define TEST_ISPRINT
 # define TEST_TOUPPER
 # define TEST_TOLOWER
 # define TEST_PUTS

 # define TEST_STRLEN
 # define TEST_MEMSET
 # define TEST_MEMCPY
 # define TEST_STRDUP

 # define TEST_CAT


# define TEST_MEMCMP
# define TEST_STRCPY
# define TEST_STRCMP
# define TEST_MEMCHR
# define TEST_STRCHR
# define TEST_STRLCAT
# define TEST_STRLCPY





void try_strlcpy(void);
void try_puts(void);
void try_cat(void);
void try_atoi(void);
void try_bzero(void);
void try_isalnum(void);
void try_isalpha(void);
void try_isascii(void);
void try_isdigit(void);
void try_isprint(void);
void try_memccpy(void);
void try_memchr(void);
void try_memcmp(void);
void try_memcpy(void);
void try_memmove(void);
void try_memset(void);
void try_strcat(void);
void try_strchr(void);
void try_strcmp(void);
void try_strcpy(void);
void try_strdup(void);
void try_strlcat(void);
void try_strlen(void);
void try_strncat(void);
void try_strncmp(void);
void try_strncpy(void);
void try_strnstr(void);
void try_strrchr(void);
void try_strstr(void);
void try_tolower(void);
void try_toupper(void);

/* int	ft_cat(int fd); */
/* void	ft_cat(int fd); */
/* int ft_puts ( const char * str ); */
/* int		ft_atoi(const char *str); */
/* void	ft_bzero(void *s, size_t n); */
/* int		ft_isalnum(int c); */
/* int		ft_isalpha(int c); */
/* int		ft_isascii(int c); */
/* int		ft_isdigit(int c); */
/* int		ft_isprint(int c); */
/* void	*ft_memccpy(void *s1, const void *s2, int c, size_t n); */
/* void	*ft_memchr(const void *ptr, int value, size_t num); */
/* int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num); */
/* void	*ft_memcpy(void *destination, const void *source, size_t num); */
/* void	*ft_memmove(void *destination, const void *source, size_t num); */
/* void	*ft_memset(void *ptr, int value, size_t num); */
/* char	*ft_strcat(char *destination, const char *source); */
/* char	*ft_strchr(const char *str, int character); */
/* int		ft_strcmp(const char *str1, const char *str2); */
/* char	*ft_strcpy(char *destination, const char *source); */
/* char	*ft_strdup(const char *s1); */
/* size_t	ft_strlcat(char *dst, const char *src, size_t size); */
/* size_t	ft_strlen(const char *str); */
/* char	*ft_strncat(char *destination, const char *source, size_t num); */
/* int		ft_strncmp(const char *str1, const char *str2, size_t num); */
/* char	*ft_strncpy(char *destination, const char *source, size_t num); */
/* size_t ft_strlcpy(char *destination, const char *source, size_t num); */
/* char	*ft_strnstr(const char *s1, const char *s2, size_t n); */
/* char	*ft_strrchr(const char *str, int c); */
/* char	*ft_strstr(const char *str1, const char *str2); */
/* int		ft_tolower(int c); */
/* int		ft_toupper(int c); */



 /*
 # define TEST_STRNCAT
 # define TEST_STRNCMP
 # define TEST_STRNCPY
 # define TEST_STRNSTR
 # define TEST_STRRCHR
 # define TEST_STRSTR
 */
 /* # define TEST_ATOI */
 /* # define TEST_MEMMOVE */
 /* # define TEST_MEMCCPY */




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:29:25 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 08:03:10 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		main(void)
{
// char	lol[] = "salut lol vous allez bien ici les noobs ? \n \0";
// char	lol[] = "salut lol vous allez bien ici les noobs ? \n \0";

// t_list	**alst;
// t_list	*tmp;

// alst = (t_list**)malloc(sizeof(t_list*) * 1);

// t_list	*ft_lstnewfront(t_list **alst,
			// void const *content, size_t content_size);
// t_list	*ft_lstnewback(t_list **alst,
			// void const *content, size_t content_size);
// t_list	*ft_lstnewprev(t_list **alst, t_list *lst,
			// void const *content, size_t content_size);
// t_list	*ft_lstnewnext(t_list **alst, t_list *lst,
			// void const *content, size_t content_size);
// void	ft_lstpushfront(t_list **alst, t_list *new);
// void	ft_lstpushback(t_list **alst, t_list *new);
// void	ft_lstpushprev(t_list **alst, t_list *lst, t_list *new);
// void	ft_lstpushnext(t_list **alst, t_list *lst, t_list *new);
// t_list	*ft_lstpullfirst(t_list** alst);
// t_list	*ft_lstpulllast(t_list** alst);
// t_list	*ft_lstpullprev(t_list** alst, t_list *lst);
// t_list	*ft_lstpullcur(t_list** alst, t_list *lst);
// t_list	*ft_lstpullnext(t_list *lst);


// *alst = ft_lstnew("1ere", 5);
// (*alst)->next = ft_lstnew("2eme", 5);
// ft_lstnewback(alst, "1ere", 5);
// ft_lstnewback(alst, "2eme", 5);
// ft_lstnewback(alst, "3eme", 5);
// ft_lstnewback(alst, "4eme", 5);
// ft_lstnewback(alst, "5eme", 5);
// ft_lstnewback(alst, "6eme", 5);
// ft_lstnewback(alst, "4eme", 5);
// ft_lstnewprev(alst, ft_lstat(*alst, 3), "5eme", 5);
// ft_lstnewnext(alst, ft_lstat(*alst, 5), "6eme", 5);

// ft_lstpulllast(alst);
// printf("lol%p^lol\n", ft_lstpullfirst(alst));
;
// ft_lstpullcur(alst, *alst);
// ft_lstpushfront(alst, ft_lstpulllast(alst));


// ft_lstprnt(*alst);
// ft_memprint(lol, 17);
// (void)tmp;
// exit(0);

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try_ob.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:28:34 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 08:35:27 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		g_temoin;

/*


 */

#ifdef TEST_CAT

#include <fcntl.h>
#include <unistd.h>

void try_cat(void)
{
	ft_putstr("5: testing (ft_cat):\n");
	int fd;

#define CAT_MACRO(file)\
	fd = open(file, O_RDONLY);							\
	printf("oppening \"%s\", fd = (%d), CALLING:======================\n\e[31m", file, fd);	\
	fflush(stdout);\
	ft_cat(fd);							\
	close(fd);									\
	printf("\e[0mclosing \"%s\", fd = (%d), :==============================\n\n", file, fd);
	


	fd = open("empty", O_CREAT, S_IRWXU);
	close(fd);

	

	CAT_MACRO("/usr/share/man/man4/aio.4");	
	CAT_MACRO("/usr/share/man/man4/lol");
	CAT_MACRO("/usr/share/man/man4/networking.4");
	CAT_MACRO("../auteur");
	CAT_MACRO("empty");

	ft_putstr("\n------------------------------\n");
}
#endif

#ifdef TEST_PUTS
void try_puts(void)
{
	ft_putstr("5: testing (ft_puts):\n");
	/* printf("\033[34mREF\033[39m=>%s====>%s====>%s====>(null)\n", "\n", "s\n", */
		   /* "salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut\n"); */


	printf("\033[34mREF\033[39m=>\e[31m"); fflush(stdout);
	puts("");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	puts("s");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	/* printf("====>"); fflush(stdout); */
	puts("salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	/* printf("====>"); fflush(stdout); */
	char *ptr = NULL;
	puts(ptr);

	printf("\033[0;35mCUS\033[39m=>\e[31m"); fflush(stdout);
	ft_puts("");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	/* printf("====>"); fflush(stdout); */
	ft_puts("s");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	/* printf("====>"); fflush(stdout); */
	ft_puts("salutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalutsalut");
	printf("\e[0m====>\e[31m"); fflush(stdout);
	/* printf("====>"); fflush(stdout); */
	ft_puts(ptr);
	ft_putstr("\e[0m------------------------------\n");
}
#endif


# ifdef TEST_ATOI
void try_atoi(void)
{
    ft_putstr("5: testing (atoi):\n");
	char *str;
	int retref, retcus;
	#define ATOI_MACRO(STRING) str = STRING;\
	retref = -1;\
	retcus = -1;\
	retref = atoi(str);\
	retcus = ft_atoi(str);\
	printf("\033[34mREF\033[39m-->");\
	fflush(stdout);\
	ref_myputnchar(str, strlen(str));\
	printf("<===%015d===\n", retref);\
	fflush(stdout);\
	printf("\033[35mCUS\033[39m-->");\
	fflush(stdout);\
	ref_myputnchar(str, strlen(str));\
	printf("<===%015d===", retcus);\
	fflush(stdout);\
	fflush(stdout);\
	ref_myassert(retcus == retref);\
	printf("\n");\
	printf("\n");
	
	ATOI_MACRO("0");
	ATOI_MACRO("9");
	ATOI_MACRO("00");
	ATOI_MACRO("09");
	ATOI_MACRO("000");
	ATOI_MACRO("009");
	ATOI_MACRO(" 10000000");
	ATOI_MACRO(" 10000009");
	ATOI_MACRO("\t \f \v \n \r0");
	ATOI_MACRO("\t \f \v \n \r9");
	ATOI_MACRO("+10000000");
	ATOI_MACRO("-10000009");
	ATOI_MACRO("+00");
	ATOI_MACRO("-00");
	ATOI_MACRO("\t \f \v \n \r+0000500000");
	ATOI_MACRO("\t \f \v \n \r-0000000009");
	
	ATOI_MACRO("0a");
	ATOI_MACRO("a9");
	ATOI_MACRO("00a");
	ATOI_MACRO("0a9");
	ATOI_MACRO("0a00");
	ATOI_MACRO("009");
	ATOI_MACRO(" 10a000000");
	ATOI_MACRO(" 10000009");
	ATOI_MACRO("\t \f a\v \n \r0");
	ATOI_MACRO("\t \f \v \n \r9");
	ATOI_MACRO("+10000a000");
	ATOI_MACRO("-a10000009");
	ATOI_MACRO("+a00");
	ATOI_MACRO("-00a");
	ATOI_MACRO("\t \f \v \n \r+a0000500000");
	ATOI_MACRO("\t \f \v \n \r-0000000009a");
	ATOI_MACRO("  +2147483647");
	ATOI_MACRO("  +2147483648");
	ATOI_MACRO("  +3147483649");
	ATOI_MACRO("  +9993147483649");
	ATOI_MACRO("  -2147483648");
	ATOI_MACRO("  -2147483649");
	ATOI_MACRO("  -3147483650");
	ATOI_MACRO("  -9993147483650");
	ATOI_MACRO("-+9");
	ATOI_MACRO("+-9");
	ATOI_MACRO("--9");
	ATOI_MACRO("++9");
	
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_BZERO
void try_bzero(void)
{
	ft_putstr("5: testing (bzero):\n");
	
	char *strref = malloc(sizeof(char) * 10);
	char *strcus = malloc(sizeof(char) * 10);
	void *ptrref = (void*)strref;
	void *ptrcus = (void*)strcus;
	int i;
	size_t		size;

#define BZERO_MACRO(SIZE) size = (size_t)SIZE;		\
	for (i = 0; i < 10; i++)\
	{\
		strref[i] = i + 'A';\
		strcus[i] = i + 'A';\
	}\
	bzero(ptrref, size);\
	ft_bzero(ptrcus, size);\
	printf("\033[34mREF\033[39m-->%zu<----", size);\
	fflush(stdout);\
	ref_myputnchar(strref, 10);\
	printf("-------\n");\
	printf("\033[35mCUS\033[39m-->%zu<----", size);\
	fflush(stdout);\
	ref_myputnchar(strcus, 10);\
	printf("-------");\
	fflush(stdout);\
	ref_myassert(!memcmp(ptrref, ptrcus, 10));\
	printf("\n");\
	printf("\n");
	
	BZERO_MACRO(0);
	BZERO_MACRO(1);
	BZERO_MACRO(2);
	BZERO_MACRO(3);
	BZERO_MACRO(4);
	BZERO_MACRO(5);
	BZERO_MACRO(6);
	BZERO_MACRO(7);
	BZERO_MACRO(8);
	BZERO_MACRO(9);
	
	
	free(strref);
	free(strcus);
    ft_putstr("\n------------------------------\n");
}
#endif



void test_isfts(int (*reffunc)(int), int (*cusfunc)(int))
{
	int	i;
	int refret, cusret;
	
	for (i = -250; i < 250; i++)
	{
		refret = reffunc(i);
		cusret = cusfunc(i);
/* 		if ((refret != 0) != (cusret != 0))*/
		if (refret != cusret)
		{
			g_temoin = 1;
			if (!isprint(i))
			{
				printf("\033[34mREF\033[39m-->%d<----ret:%d----\n", i, refret);
				printf("\033[35mCUS\033[39m-->%d<----ret:%d----", i, cusret);
			}
			else
			{
				printf("\033[34mREF\033[39m-->%d(%c)<----ret:%d----\n", i, i, refret);
				printf("\033[35mCUS\033[39m-->%d(%c)<----ret:%d----", i, i, cusret);
			}
			fflush(stdout);
			ref_myassert((refret != 0) == (cusret != 0));
			printf("\n");
		}
	}
	
}


# ifdef TEST_ISALNUM
void try_isalnum(void)
{
    ft_putstr(": testing (ft_isalnum):\n");
	g_temoin = 0;
	test_isfts(isalnum, ft_isalnum);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_ISALPHA
void try_isalpha(void)
{
    ft_putstr(": testing (ft_isalpha):\n");
	g_temoin = 0;
	test_isfts(isalpha, ft_isalpha);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_ISASCII

int	ref_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

void try_isascii(void)
{
    ft_putstr(": testing (ft_isascii):\n");
	g_temoin = 0;
	test_isfts(isascii, ft_isascii);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_ISDIGIT
void try_isdigit(void)
{
    ft_putstr(": testing (ft_isdigit):\n");
	g_temoin = 0;
	test_isfts(isdigit, ft_isdigit);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_ISPRINT
void try_isprint(void)
{
    ft_putstr(": testing (ft_isprint):\n");
	g_temoin = 0;
	test_isfts(isprint, ft_isprint);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
/*	
    ft_putstr(": testing (ft_isblank):\n");
	g_temoin = 0;
	test_isfts(isblank, ft_isblank);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_iscntrl):\n");
	g_temoin = 0;
	test_isfts(iscntrl, ft_iscntrl);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_isgraph):\n");
	g_temoin = 0;
	test_isfts(isgraph, ft_isgraph);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_ispunct):\n");
	g_temoin = 0;
	test_isfts(ispunct, ft_ispunct);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_isspace):\n");
	g_temoin = 0;
	test_isfts(isspace, ft_isspace);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_islower):\n");
	g_temoin = 0;
	test_isfts(islower, ft_islower);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_isupper):\n");
	g_temoin = 0;
	test_isfts(isupper, ft_isupper);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
	
    ft_putstr(": testing (ft_isxdigit):\n");
	g_temoin = 0;
	test_isfts(isxdigit, ft_isxdigit);
	if (!g_temoin)
		ref_myassert(1);
    ft_putstr("\n------------------------------\n");
*/
		
}
#endif



# ifdef TEST_MEMCCPY
void	one_memccpy(char *src, int val, size_t size)
{
	char *refret, *cusret;
	char refdst[20] = {0};
	char cusdst[20] = {0};

	printf("\033[34mREF\033[39m  field\"");
    fflush(stdout);
    ref_myputnchar(src, size + 1);
	printf("\" size[%*u] int[%3d] toUchar[%3hhu]'%c'\t", 14 - size, size, val, (unsigned char)val, (isgraph((int)(unsigned char)val) ? (unsigned char)val : (unsigned char)0));
	refret = memccpy(refdst, src, val, size);
    printf("ptrdiff(ret - dst)[%#tx] dst\"", (size_t)(refret - refdst));
	fflush(stdout);
	ref_myputnchar(refdst, refret - refdst + 1);
	printf("\"\n");

    printf("\033[35mCUS\033[39m  field\"");
    fflush(stdout);
    ref_myputnchar(src, size + 1);
    printf("\" size[%*u] int[%3d] toUchar[%3hhu]'%c'\t", 14 - size, size, val, (unsigned char)val, (isgraph((int)(unsigned char)val) ? (unsigned char)val : (unsigned char)0));
    cusret = ft_memccpy(cusdst, src, val, size);
    printf("ptrdiff(ret - dst)[%#tx] dst\"", (size_t)(cusret - cusdst));
    fflush(stdout);
    ref_myputnchar(cusdst, cusret - cusdst + 1);
    printf("\"");
	fflush(stdout);
	ref_myassert((cusret == refret || ((refret - refdst) == (cusret - cusdst))) && !memcmp(refdst, cusdst, 20));
    printf("\n");
}

void try_memccpy(void)
{
	ft_putstr(": testing (memccpy):\n");
/*     one_memccpy(NULL, 'S', 4); */
	char *str;
    one_memccpy((void*)"Salut Hallo", 'S', 0);
    one_memccpy((void*)"Salut Hallo", 'a', 0);
    one_memccpy((void*)"Salut Hallo", 'l', 0);
    one_memccpy((void*)"Salut Hallo", 'u', 0);
    one_memccpy((void*)"Salut Hallo", 't', 0);
    one_memccpy((void*)"Salut Hallo", '\0', 0);
    one_memccpy((void*)"Salut Hallo", ':', 0);
    one_memccpy((void*)"Salut Hallo", 'S' + 0b10000000000000, 0);
    one_memccpy((void*)"Salut Hallo", 'a' + 0b1000000000000, 0);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b100000000000, 0);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b10000000, 0);
    one_memccpy((void*)"Salut Hallo", 'u' + 0b10000000000, 0);
    one_memccpy((void*)"Salut Hallo", 't' + 0b1000000000, 0);
    one_memccpy((void*)"Salut Hallo", '\0'+ 0b100000000, 0);
    one_memccpy((void*)"Salut Hallo", ':' + 0b10000000, 0);
    str = (char*)malloc(sizeof(char) * 12);
    str = strcpy(str, "Salut Hallo");
    str[5] = 200;
    one_memccpy((void*)str, 200, 0);
    one_memccpy((void*)str, 200 + 0b10000000000, 0);
    one_memccpy((void*)str, 199, 0);
	ft_putstr("\n");
    one_memccpy((void*)"Salut Hallo", 'S', 1);
    one_memccpy((void*)"Salut Hallo", 'a', 1);
    one_memccpy((void*)"Salut Hallo", 'l', 1);
    one_memccpy((void*)"Salut Hallo", 'u', 1);
    one_memccpy((void*)"Salut Hallo", 't', 1);
    one_memccpy((void*)"Salut Hallo", '\0', 1);
    one_memccpy((void*)"Salut Hallo", ':', 1);
    one_memccpy((void*)"Salut Hallo", 'S' + 0b10000000000000, 1);
    one_memccpy((void*)"Salut Hallo", 'a' + 0b1000000000000, 1);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b100000000000, 1);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b10000000, 1);
    one_memccpy((void*)"Salut Hallo", 'u' + 0b10000000000, 1);
    one_memccpy((void*)"Salut Hallo", 't' + 0b1000000000, 1);
    one_memccpy((void*)"Salut Hallo", '\0'+ 0b100000000, 1);
    one_memccpy((void*)"Salut Hallo", ':' + 0b10000000, 1);
    str = (char*)malloc(sizeof(char) * 12);
    str = strcpy(str, "Salut Hallo");
    str[5] = 200;
    one_memccpy((void*)str, 200, 1);
    one_memccpy((void*)str, 200 + 0b10000000000, 1);
    one_memccpy((void*)str, 199, 1);
	ft_putstr("\n");
    one_memccpy((void*)"Salut Hallo", 'S', 2);
    one_memccpy((void*)"Salut Hallo", 'a', 2);
    one_memccpy((void*)"Salut Hallo", 'l', 2);
    one_memccpy((void*)"Salut Hallo", 'u', 2);
    one_memccpy((void*)"Salut Hallo", 't', 2);
    one_memccpy((void*)"Salut Hallo", '\0', 2);
    one_memccpy((void*)"Salut Hallo", ':', 2);
    one_memccpy((void*)"Salut Hallo", 'S' + 0b10000000000000, 2);
    one_memccpy((void*)"Salut Hallo", 'a' + 0b1000000000000, 2);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b100000000000, 2);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b10000000, 2);
    one_memccpy((void*)"Salut Hallo", 'u' + 0b10000000000, 2);
    one_memccpy((void*)"Salut Hallo", 't' + 0b1000000000, 2);
    one_memccpy((void*)"Salut Hallo", '\0'+ 0b100000000, 2);
    one_memccpy((void*)"Salut Hallo", ':' + 0b10000000, 2);
    str = (char*)malloc(sizeof(char) * 12);
    str = strcpy(str, "Salut Hallo");
    str[5] = 200;
    one_memccpy((void*)str, 200, 2);
    one_memccpy((void*)str, 200 + 0b10000000000, 2);
    one_memccpy((void*)str, 199, 2);
	ft_putstr("\n");
    one_memccpy((void*)"Salut Hallo", 'S', 11);
    one_memccpy((void*)"Salut Hallo", 'a', 11);
    one_memccpy((void*)"Salut Hallo", 'l', 11);
    one_memccpy((void*)"Salut Hallo", 'u', 11);
    one_memccpy((void*)"Salut Hallo", 't', 11);
    one_memccpy((void*)"Salut Hallo", '\0', 11);
    one_memccpy((void*)"Salut Hallo", ':', 11);
    one_memccpy((void*)"Salut Hallo", 'S' + 0b10000000000000, 11);
    one_memccpy((void*)"Salut Hallo", 'a' + 0b1000000000000, 11);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b100000000000, 11);
    one_memccpy((void*)"Salut Hallo", 'l' + 0b10000000, 11);
    one_memccpy((void*)"Salut Hallo", 'u' + 0b10000000000, 11);
    one_memccpy((void*)"Salut Hallo", 't' + 0b1000000000, 11);
    one_memccpy((void*)"Salut Hallo", '\0'+ 0b100000000, 11);
    one_memccpy((void*)"Salut Hallo", ':' + 0b10000000, 11);
    str = (char*)malloc(sizeof(char) * 12);
    str = strcpy(str, "Salut Hallo");
    str[5] = 200;
    one_memccpy((void*)str, 200, 11);
    one_memccpy((void*)str, 200 + 0b10000000000, 11);
    one_memccpy((void*)str, 199, 11);
	ft_putstr("\n");

	ft_putstr("\n");

	ft_putstr("\n");



    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_MEMCHR
void	one_memchr(void *ptr, int c)
{
	void	*refret, *cusret;
	size_t	len;

	if (!ptr)
	{
		len = 0;
		ptr = (void*)"lol";
	}
	else
		len = strlen((char*)ptr) + 1;
	
	

	
	printf("\033[34mREF\033[39m  field\"");
	fflush(stdout);
	refret = memchr(ptr, c, len);
	ref_myputnchar(ptr, len);
	printf("\" size[%*zu] ", 14 - (int)len, len);
	printf("int[%3d] ", c);
	printf("toUchar[%3hhu] ", (unsigned char)c);
	printf("'%c'", (isgraph((int)(unsigned char)c) ?
					(unsigned char)c : (unsigned char)0));
	/* printf("\" size[%*u] int[%3d] toUchar[%3hhu]'%c'\t", 14 - len, len, c, (unsigned char)c, (isgraph((int)(unsigned char)c) ? (unsigned char)c : (unsigned char)0)); */
	printf("ret\"");
	fflush(stdout);
	if (refret)
		ref_myputnchar(refret, len + (size_t)(ptr - refret));
	else
		printf("(null)");
	printf("\" adress(ret - ptr)[%#10.8tx]\n", (size_t)(refret - ptr));

	
	
	
	
	printf("\033[35mCUS\033[39m  field\"");
	fflush(stdout);
	cusret = ft_memchr(ptr, c, len);
	ref_myputnchar(ptr, len);
	printf("\" size[%*zu] ", 14 - (int)len, len);
	printf("int[%3d] ", c);
	printf("toUchar[%3hhu] ", (unsigned char)c);
	printf("'%c'", (isgraph((int)(unsigned char)c) ?
					(unsigned char)c : (unsigned char)0));

	/* printf("\" size[%*zu] int[%3d] toUchar[%3hhu]'%c'\t", 14 - len, len, c, (unsigned char)c, (isgraph((int)(unsigned char)c) ? (unsigned char)c : (unsigned char)0)); */
	printf("ret\"");
	fflush(stdout);
	if (cusret)
		ref_myputnchar(cusret, len + (size_t)(ptr - cusret));
	else
		printf("(null)");
	printf("\" adress(ret - ptr)[%#10.8tx]", (size_t)(cusret - ptr));
	fflush(stdout);
	ref_myassert((cusret - ptr) == (refret - ptr));
	printf("\n");
	printf("\n");
}

void try_memchr(void)
{
	char*	str;

    ft_putstr(": testing (memchr):\n");
	one_memchr(NULL, 'S');
	one_memchr((void*)"Salut Hallo", 'S');
	one_memchr((void*)"Salut Hallo", 'a');
	one_memchr((void*)"Salut Hallo", 'l');
	one_memchr((void*)"Salut Hallo", 'u');
	one_memchr((void*)"Salut Hallo", 't');
	one_memchr((void*)"Salut Hallo", '\0');
	one_memchr((void*)"Salut Hallo", ':');
	one_memchr((void*)"Salut Hallo", 'S' + 0b10000000000000);
	one_memchr((void*)"Salut Hallo", 'a' + 0b1000000000000);
	one_memchr((void*)"Salut Hallo", 'l' + 0b100000000000);
	one_memchr((void*)"Salut Hallo", 'l' + 0b10000000);
	one_memchr((void*)"Salut Hallo", 'u' + 0b10000000000);
	one_memchr((void*)"Salut Hallo", 't' + 0b1000000000);
	one_memchr((void*)"Salut Hallo", '\0'+ 0b100000000);
	one_memchr((void*)"Salut Hallo", ':' + 0b10000000);
	str = (char*)malloc(sizeof(char) * 12);
	str = strcpy(str, "Salut Hallo");
	str[5] = 200;
	one_memchr((void*)str, 200);
	one_memchr((void*)str, 200 + 0b10000000000);
	one_memchr((void*)str, 199);
	
	free(str);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_MEMCMP
void	one_memcmp(char *s1, char *s2, size_t size)
{
	int	refret, cusret;
	void	*p1, *p2;
	
	p1 = (void*)s1;
	p2 = (void*)s2;
	refret = memcmp(p1, p2, size);
	cusret = ft_memcmp(p1, p2, size);
	printf("\033[34mREF\033[39m p1(%6s) p2(%6s) si(%zu) ret(%d)", s1, s2, size, refret);
	printf("\n");
	printf("\033[35mCUS\033[39m p1(%6s) p2(%6s) si(%zu) ret(%d)", s1, s2, size, cusret);
	/* printf("[%d]", cusret); */
	
	fflush(stdout);
	if ((refret > 0) == (cusret > 0) && (refret < 0) == (cusret < 0))
		ref_myassert(1);
	else
		ref_myassert(0);
	printf("\n");
	// printf("\n");
}

void try_memcmp(void)
{
    ft_putstr("1: testing (memcmp):\n");
	one_memcmp("", "", 0);
	one_memcmp("abcE", "abcE", 0);
	one_memcmp("abcd", "", 0);
	one_memcmp("", "abcd", 0);
	one_memcmp("abcE", "abcd", 0);
	printf("\n");
	one_memcmp("", "", 1);
	one_memcmp("abcE", "abcE", 1);
	one_memcmp("abcd", "", 1);
	one_memcmp("abcE", "abcd", 1);
	printf("\n");
	one_memcmp("abcE", "abcE", 2);
	one_memcmp("abcE", "abcd", 2);
	printf("\n");
	one_memcmp("abcE", "abcE", 3);
	one_memcmp("abcE", "abcd", 3);
	printf("\n");
	one_memcmp("abcE", "abcE", 4);
	one_memcmp("abcE", "abcd", 4);
	printf("\n");
	one_memcmp("abcE", "abcE", 5);
	one_memcmp("abcE", "abcd", 5);
	one_memcmp("abcd", "abcd", 5);
	one_memcmp("aBcd", "abcd", 5);
	one_memcmp("Abcd", "abcd", 5);
	one_memcmp("abCd", "abcd", 5);
	one_memcmp("abcd", "aBcd", 5);
	one_memcmp("abcd", "Abcd", 5);
	one_memcmp("abcd", "abCd", 5);

	one_memcmp("ab\200d", "ab\1d", 5);

	one_memcmp("ab\1d", "ab\250d", 5);
    ft_putstr("\n------------------------------\n");
}
#endif



# ifdef TEST_MEMCPY
void    one_memcpy(int len, int fill, int ncpy, int ref)
{
    void* (*func)(void*, const void*, size_t);
    if (ref)
    {
        func = &memcpy;
        printf("\033[34mREF\033[39m");
    }
    else
    {
        func = &ft_memcpy;
        printf("\033[35mCUS\033[39m");
    }

    char *dst, *src, *ret;
    char *dst_sv, *src_sv;
    src = (char*)malloc(len);
    dst = (char*)malloc(len);
    int i;
    for (i = 0; i < len; i++)
        src[i] = i + 'a';
    src[i] = '\0';
    for (i = 0; i < len; i++)
        dst[i] = i + 'A';
    dst[i] = '\0';

    for (i = 0; i < fill; i++)
        src[i] = i + '0';
    src[i] = '\0';

    printf("--%d--%d--%d-------------------------\n", len, fill, ncpy);
    printf("init: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); printf("\n");
    printf("init: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); printf("\n");
    dst_sv = dst; src_sv = src;
    ret = (func)(dst, src, ncpy);
    printf("post: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); ref_myassert(src_sv == src); printf("\n");
    printf("post: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); printf("\n");
    printf("post: ret(%p)(", ret); fflush(stdout); ref_myputnchar(ret, len); printf(") "); fflush(stdout); ref_myassert(dst == ret);  ref_myassert(dst_sv == dst);
    static void *cus_result_save;
    if (ref)
        ref_myassert(!memcmp(cus_result_save, dst, len));
    else
    {
        cus_result_save = malloc(len);
        cus_result_save = memcpy(cus_result_save, dst, len);
    } printf("\n");
}
void try_memcpy(void)
{
	// ft_putchar('s');
    ft_putstr("5: testing (memcpy):\n");
    one_memcpy(15, 10, 10, 0);    one_memcpy(15, 10, 10, 1); printf("\n");
    one_memcpy(15, 10, 5, 0);    one_memcpy(15, 10, 5, 1); printf("\n");
    one_memcpy(15, 5, 10, 0);    one_memcpy(15, 5, 10, 1); printf("\n");
    one_memcpy(15, 0, 8, 0);    one_memcpy(15, 0, 8, 1); printf("\n");
    one_memcpy(15, 8, 0, 0);    one_memcpy(15, 8, 0, 1); printf("\n");
    one_memcpy(15, 0, 3, 0);    one_memcpy(15, 0, 3, 1); printf("\n");
    one_memcpy(15, 3, 0, 0);    one_memcpy(15, 3, 0, 1); printf("\n");
    one_memcpy(15, 0, 0, 0);    one_memcpy(15, 0, 0, 1); printf("\n");
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_MEMMOVE
void	one_memmove(char *memstr, size_t dst, int delta_src, size_t num)
{
	void	*refmem, *cusmem;
	void	*refret, *cusret;
	int		i;

	i = strlen(memstr);
	refmem = (void*)malloc(sizeof(char) * i);
	refmem = memcpy(refmem, (void*)memstr, i);
	cusmem = (void*)malloc(sizeof(char) * i);
	cusmem = memcpy(cusmem, (void*)memstr, i);

	refret = memmove(refmem + dst, refmem + dst + delta_src, num);
	cusret = ft_memmove(cusmem + dst, cusmem + dst + delta_src, num);
	
	printf("\033[34mREF\033[39m field:\"%s\" dest[%02u] src[%02d] num(%u)  result:\"", memstr, dst, dst + delta_src, num);
	fflush(stdout);
	ref_myputnchar((char*)refmem, i);
	printf("\"");
	
	printf("\n");
	printf("\033[35mCUS\033[39m field:\"%s\" dest[%02u] src[%02d] num(%u)  result:\"", memstr, dst, dst + delta_src, num);
	fflush(stdout);
	ref_myputnchar((char*)cusmem, i);
	printf("\"");
	fflush(stdout);
	ref_myassert(!memcmp(refmem, cusmem, i));
	(void)refret;
	(void)cusret;
	
	if ((refmem - refret) != (cusmem - cusret))
	{
		ft_putstr("    ");
		ref_myassert(0);
		ft_putstr("bad return");
	}
	else
		ref_myassert(1);
	
	free(refmem);
	free(cusmem);
	printf("\n");
}

void try_memmove(void)
{
	ft_putstr("5: testing (ft_memmove):\n");
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 0);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 1);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 2);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 3);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 4);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 0, 9);
	printf("\n");
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 0);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 1);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 2);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 3);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 4);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 1, 9);
	printf("\n");
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 0);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 1);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 2);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 3);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 4);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, 3, 9);
	printf("\n");
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 0);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 1);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 2);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 3);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 4);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -1, 9);
	printf("\n");
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 0);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 1);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 2);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 3);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 4);
	one_memmove("ABCDwxyz_1234_abcdWXYZ", 9, -3, 9);
	ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_MEMSET
void    one_memset(int len, int fill, int val, int ref)
{
    void* (*func)(void*, int, size_t);
    if (ref)
    {
        func = &memset;
        printf("\033[34mREF\033[39m");
    }
    else
    {
        func = &ft_memset;
        printf("\033[35mCUS\033[39m");
    }

    char *src, *ret;
    char *src_sv;
    src = (char*)malloc(len);
    int i;
    for (i = 0; i < len; i++)
        src[i] = i + 'a';
    src[i] = '\0';
    for (i = 0; i < fill; i++)
        src[i] = i + '0';
    src[i] = '\0';

    printf("--%d--%d--%d-------------------------\n", len, fill, val);
    printf("init: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); printf("\n");
    src_sv = src;
    ret = (func)(src, val, fill);
    printf("post: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); ref_myassert(src_sv == src); printf("\n");
    printf("post: ret(%p)(", ret); fflush(stdout); ref_myputnchar(ret, len); printf(") "); fflush(stdout);
    static void *cus_result_save;
    if (ref)
        ref_myassert(!memcmp(cus_result_save, src, len));
    else
    {
        cus_result_save = malloc(len);
        cus_result_save = memcpy(cus_result_save, src, len);
    } printf("\n");
}
void try_memset(void)
{
    ft_putstr("6: testing (memset):\n");
    one_memset(15, 10, 0, 0);    one_memset(15, 10, 0, 1); printf("\n");
    one_memset(15, 10, 90, 0);    one_memset(15, 10, 90, 1); printf("\n");
    one_memset(15, 10, 90+256, 0);    one_memset(15, 10, 90+256, 1); printf("\n");
    one_memset(15, 10, 90+256*256, 0);    one_memset(15, 10, 90+256*256, 1); printf("\n");
    one_memset(15, 10, 90+256*256*256, 0);    one_memset(15, 10, 90+256*256*256, 1); printf("\n");
    one_memset(15, 10, -90, 0);    one_memset(15, 10, -90, 1); printf("\n");
    one_memset(15, 0, 90, 0);    one_memset(15, 0, 90, 1); printf("\n");
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRCAT
void try_strcat(void)
{
    ft_putstr("10: testing (strcat):\n");

	char* ref_dst;
	char* cus_dst;
	char* ret;

#define STRCAT_MACRO(x, y, z)\
	ref_dst = malloc(20);\
	cus_dst = malloc(20);\
	memset(ref_dst, '_', 19);\
	memset(cus_dst, '_', 19);\
	ref_dst[19] = 0;\
	cus_dst[19] = 0;\
	strcpy(ref_dst, x);\
	strcpy(cus_dst, x);\
	printf("s1:(%5s) s2:(%5s) ", x, y);								\
	printf("REF:diff:%ju(", ref_dst - strcat(ref_dst, y));	\
	fflush(stdout);\
	ref_myputnchar(ref_dst, 20);\
	printf(") ");\
	printf("CUS:diff:%ju(", cus_dst - ft_strcat(cus_dst, y));	\
	fflush(stdout);\
	ref_myputnchar(cus_dst, 20);\
	printf(")\n");

	
	(void)ret;
	
	
	STRCAT_MACRO("", "", 0)
	STRCAT_MACRO("s", "", 0)
	STRCAT_MACRO("", "s", 0)
	STRCAT_MACRO("salut", "", 0)
	STRCAT_MACRO("", "salut", 0)
	STRCAT_MACRO("s", "s", 0)
	STRCAT_MACRO("s", "salut", 0)
	STRCAT_MACRO("salut", "s", 0)
	STRCAT_MACRO("salut", "salut", 0)
	printf("\n");
	
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_STRCHR
void	one_strchr(char *str, int c)
{
	char	*refret, *cusret;
	
	refret = strchr(str, c);
	cusret = ft_strchr(str, c);

	printf("\033[34mREF\033[39m  str[%11s] int[%2d] tochar[%2hhd]'%c'\tret[%s]  adress(ret - str)[%#10.8tx]\n", str, c, (char)c, (isgraph((int)(char)c) ? (char)c : (char)0), refret, refret - str);
	
	
	printf("\033[35mCUS\033[39m  str[%11s] int[%2d] tochar[%2hhd]'%c'\tret[%s]  adress(ret - str)[%#10.8tx]", str, c, (char)c, (isgraph((int)(char)c) ? (char)c : (char)0), cusret, cusret - str);
	fflush(stdout);
	
	ft_myassert(refret - str == cusret - str);
	// printf("%#10.8tx ", refret - str);
	// printf("%#10.8tx ", cusret - str);
	
	printf("\n");
	printf("\n");
}

void try_strchr(void)
{
    ft_putstr(": testing (strchr):\n");
	one_strchr("", 'S');
	one_strchr("Salut Hallo", 'S');
	one_strchr("Salut Hallo", 'a');
	one_strchr("Salut Hallo", 'l');
	one_strchr("Salut Hallo", 'u');
	one_strchr("Salut Hallo", 't');
	one_strchr("Salut Hallo", '\0');
	one_strchr("Salut Hallo", ':');
	one_strchr("Salut Hallo", 'S' + 0b10000000000000);
	one_strchr("Salut Hallo", 'a' + 0b1000000000000);
	one_strchr("Salut Hallo", 'l' + 0b100000000000);
	one_strchr("Salut Hallo", 'l' + 0b10000000);
	one_strchr("Salut Hallo", 'u' + 0b10000000000);
	one_strchr("Salut Hallo", 't' + 0b1000000000);
	one_strchr("Salut Hallo", '\0'+ 0b100000000);
	one_strchr("Salut Hallo", ':' + 0b10000000);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_STRCMP
void	one_strcmp(char *s1, char *s2)
{
	int	refret, cusret;

	refret = strcmp(s1, s2);
	cusret = ft_strcmp(s1, s2);
	printf("\033[34mREF\033[39m s1(%6s) s2(%6s) ret(%d)", s1, s2, refret);
	printf("\n");
	printf("\033[35mCUS\033[39m s1(%6s) s2(%6s) ret(%d)", s1, s2, cusret);
	fflush(stdout);
	if (refret == cusret)
		ref_myassert(1);
	else
		ref_myassert(0);
	printf("\n");
	printf("\n");
}

void try_strcmp(void)
{
    ft_putstr("1: testing (ft_strcmp):\n");
	one_strcmp("", "");
	one_strcmp("abcE", "abcE");
	one_strcmp("abcd", "");
	one_strcmp("", "abcd");
	one_strcmp("abcE", "abcd");
    ft_putstr("\n------------------------------\n");
}
#endif



# ifdef TEST_STRCPY
void    one_strcpy(int len, int fill, int ref)
{
    char* (*func)(char*, const char*);
    if (ref)
    {
        func = &strcpy;
        printf("\033[34mREF\033[39m");
    }
    else
    {
        func = &ft_strcpy;
        printf("\033[35mCUS\033[39m");
    }

    char *dst, *src, *ret;
    char *dst_sv, *src_sv;
    src = (char*)malloc(len);
    dst = (char*)malloc(len);
    int i;
    for (i = 0; i < len; i++)
        src[i] = i + 'a';
    src[i] = '\0';
    for (i = 0; i < len; i++)
        dst[i] = i + 'A';
    dst[i] = '\0';

    for (i = 0; i < fill; i++)
        src[i] = i + '0';
    src[i] = '\0';

    printf("--%d--%d----------------------------\n", len, fill);
    printf("init: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); printf("\n");
    printf("init: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); printf("\n");
    dst_sv = dst; src_sv = src;
    ret = (func)(dst, src);
    printf("post: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); ref_myassert(src_sv == src); printf("\n");
    printf("post: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); ref_myassert(!strcmp(dst, src)); printf("\n");
    printf("post: ret(%p)(", ret); fflush(stdout); ref_myputnchar(ret, len); printf(") "); fflush(stdout); ref_myassert(dst == ret);  ref_myassert(dst_sv == dst);
    static void *cus_result_save;
    if (ref)
        ref_myassert(!memcmp(cus_result_save, dst, len));
    else
    {
        cus_result_save = malloc(len);
        cus_result_save = memcpy(cus_result_save, dst, len);
    } printf("\n");
}
void try_strcpy(void)
{
    ft_putstr("2: testing (strcpy):\n");
    one_strcpy(15, 10, 0);    one_strcpy(15, 10, 1); printf("\n");
    one_strcpy(15, 5, 0);    one_strcpy(15, 5, 1); printf("\n");
    one_strcpy(15, 0, 0);    one_strcpy(15, 0, 1); printf("\n");
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRDUP

char	*ref_strdup(const char *src)
{
	size_t	len;
	char	*trg;

	len = strlen(src) + 1;
	trg = malloc((t_ui32)len);
	if (!trg)
		return (NULL);
	memcpy((void*)trg, (const void*)src, len);
	return (trg);
}

void try_strdup(void) 
{
    ft_putstr(": testing (strdup):\n");
	int	i;
	char *saveref, *savecus;
	char *pararef, *paracus;
	char *retref, *retcus;
	
	
	saveref = malloc(sizeof(char) * 11);
	savecus = malloc(sizeof(char) * 11);
	
	for (i = 0; i < 10; i++)
		saveref[i] = savecus[i] = i + 'A';
	
	for (i = 10; i >= 0; i--)
	{
		saveref[i] = savecus[i] = '\0';
		pararef = strdup(saveref);
		paracus = strdup(savecus);
		
		
		retref = strdup(pararef);
		retcus = ft_strdup(paracus);
		
		printf("\033[34mREF\033[39m---save(%s)---para(%s)---ret(%s)--", saveref, pararef, retref);
		fflush(stdout);
		ref_myassert(!strcmp(saveref, pararef));
		ref_myassert(!strcmp(pararef, retref));
		printf("\n");
		
		printf("\033[35mCUS\033[39m---save(%s)---para(%s)---ret(%s)--", savecus, paracus, retcus);
		fflush(stdout);
		ref_myassert(!strcmp(savecus, paracus));
		ref_myassert(!strcmp(paracus, retcus));
		printf("\n");
		
		free(pararef);
		free(paracus);
	}
	
	free(saveref);
	free(savecus);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_STRLCAT

size_t ref_strlcat(char * dst, const char * src, size_t maxlen)
{
	return (strlcat(dst, src, maxlen));
	
    const size_t srclen = strlen(src);
    const size_t dstlen = strnlen(dst, maxlen);

    if (dstlen == maxlen)
		return (maxlen+srclen);
    if (srclen < maxlen-dstlen)
	{
		memcpy(dst+dstlen, src, srclen+1);
	}
	else
	{
        memcpy(dst+dstlen, src, maxlen-dstlen-1);
        dst[maxlen-1] = '\0';
    }
    return (dstlen + srclen);
}

void one_strlcat(char* dst, char *src, size_t size)
{
	char refdst[20] = {1};
	char cusdst[20] = {1};
	size_t	refret, cusret;


	memset(refdst, 1, 20);
	memset(cusdst, 1, 20);
	
	printf("\033[34mREF\033[39m ");
	strcpy(refdst, dst);
	printf("dst(");
	fflush(stdout);
	ref_myputnchar(refdst, 20);
	printf(") src(%s) ", src);
	printf("size(%zu) ", size);
	refret = ref_strlcat(refdst, src, size);
	printf("dst:then(");
    fflush(stdout);
    ref_myputnchar(refdst, 20);
	printf(") ret[%zu]", refret);
	printf("\n");

    printf("\033[35mCUS\033[39m ");
    strcpy(cusdst, dst);
    printf("dst(");
    fflush(stdout);
    ref_myputnchar(cusdst, 20);
    printf(") src(%s) ", src);
    printf("size(%zu) ", size);
	cusret = ft_strlcat(cusdst, src, size);
    printf("dst:then(");
    fflush(stdout);
    ref_myputnchar(cusdst, 20);
	printf(") ret[%zu]", cusret);
	fflush(stdout);
	ref_myassert(!memcmp(cusdst, refdst, 20) && refret == cusret);
	/* printf("(\n%p/\n%#llx)", src, (unsigned long long int)cusret); */
	printf("\n");
}

void try_strlcat(void)
{
    ft_putstr(": testing (strlcat):\n");
    one_strlcat("", "", 0);
    one_strlcat("s", "", 0);
    one_strlcat("", "s", 0);
    one_strlcat("salut", "", 0);
    one_strlcat("", "salut", 0);
    one_strlcat("s", "s", 0);
    one_strlcat("s", "salut", 0);
    one_strlcat("salut", "s", 0);
    one_strlcat("salut", "salut", 0);
    printf("\n");
    one_strlcat("", "", 1);
    one_strlcat("s", "", 1);
    one_strlcat("", "s", 1);
    one_strlcat("salut", "", 1);
    one_strlcat("", "salut", 1);
    one_strlcat("s", "s", 1);
    one_strlcat("s", "salut", 1);
    one_strlcat("salut", "s", 1);
    one_strlcat("salut", "salut", 1);
    printf("\n");
    one_strlcat("", "", 3);
    one_strlcat("s", "", 3);
    one_strlcat("", "s", 3);
    one_strlcat("salut", "", 3);
    one_strlcat("", "salut", 3);
    one_strlcat("s", "s", 3);
    one_strlcat("s", "salut", 3);
    one_strlcat("salut", "s", 3);
    one_strlcat("salut", "salut", 3);
    printf("\n");
    one_strlcat("", "", 4);
    one_strlcat("s", "", 4);
    one_strlcat("", "s", 4);
    one_strlcat("salut", "", 4);
    one_strlcat("", "salut", 4);
    one_strlcat("s", "s", 4);
    one_strlcat("s", "salut", 4);
    one_strlcat("salut", "s", 4);
    one_strlcat("salut", "salut", 4);
    printf("\n");
    one_strlcat("", "", 5);
    one_strlcat("s", "", 5);
    one_strlcat("", "s", 5);
    one_strlcat("salut", "", 5);
    one_strlcat("", "salut", 5);
    one_strlcat("s", "s", 5);
    one_strlcat("s", "salut", 5);
    one_strlcat("salut", "s", 5);
    one_strlcat("salut", "salut", 5);
    printf("\n");
    one_strlcat("", "", 6);
    one_strlcat("s", "", 6);
    one_strlcat("", "s", 6);
    one_strlcat("salut", "", 6);
    one_strlcat("", "salut", 6);
    one_strlcat("s", "s", 6);
    one_strlcat("s", "salut", 6);
    one_strlcat("salut", "s", 6);
    one_strlcat("salut", "salut", 6);
    printf("\n");
    one_strlcat("", "", 20);
    one_strlcat("s", "", 20);
    one_strlcat("", "s", 20);
    one_strlcat("salut", "", 20);
    one_strlcat("", "salut", 20);
    one_strlcat("s", "s", 20);
    one_strlcat("s", "salut", 20);
    one_strlcat("salut", "s", 20);
    one_strlcat("salut", "salut", 20);
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRLCPY

void one_strlcpy(char* dst, char *src, size_t size)
{
	char refdst[20] = {1};
	char cusdst[20] = {1};
	size_t	refret, cusret;


	memset(refdst, 1, 20);
	memset(cusdst, 1, 20);
	
	printf("\033[34mREF\033[39m ");
	strcpy(refdst, dst);
	printf("dst(");
	fflush(stdout);
	ref_myputnchar(refdst, 20);
	printf(") src(%s) ", src);
	printf("size(%zu) ", size);
	refret = strlcpy(refdst, src, size);
	printf("dst:then(");
    fflush(stdout);
    ref_myputnchar(refdst, 20);
	printf(") ret[%zu]", refret);
	printf("\n");

    printf("\033[35mCUS\033[39m ");
    strcpy(cusdst, dst);
    printf("dst(");
    fflush(stdout);
    ref_myputnchar(cusdst, 20);
    printf(") src(%s) ", src);
    printf("size(%zu) ", size);
	cusret = ft_strlcpy(cusdst, src, size);
    printf("dst:then(");
    fflush(stdout);
    ref_myputnchar(cusdst, 20);
	printf(") ret[%zu]", cusret);
	fflush(stdout);
	ref_myassert(!memcmp(cusdst, refdst, 20) && refret == cusret);
	/* printf("(\n%p/\n%#llx)", src, (unsigned long long int)cusret); */
	printf("\n");
}

void try_strlcpy(void)
{
    ft_putstr(": testing (strlcpy):\n");
    one_strlcpy("", "", 0);
    one_strlcpy("s", "", 0);
    one_strlcpy("", "s", 0);
    one_strlcpy("salut", "", 0);
    one_strlcpy("", "salut", 0);
    one_strlcpy("s", "s", 0);
    one_strlcpy("s", "salut", 0);
    one_strlcpy("salut", "s", 0);
    one_strlcpy("salut", "salut", 0);
    printf("\n");
    one_strlcpy("", "", 1);
    one_strlcpy("s", "", 1);
    one_strlcpy("", "s", 1);
    one_strlcpy("salut", "", 1);
    one_strlcpy("", "salut", 1);
    one_strlcpy("s", "s", 1);
    one_strlcpy("s", "salut", 1);
    one_strlcpy("salut", "s", 1);
    one_strlcpy("salut", "salut", 1);
    printf("\n");
    one_strlcpy("", "", 3);
    one_strlcpy("s", "", 3);
    one_strlcpy("", "s", 3);
    one_strlcpy("salut", "", 3);
    one_strlcpy("", "salut", 3);
    one_strlcpy("s", "s", 3);
    one_strlcpy("s", "salut", 3);
    one_strlcpy("salut", "s", 3);
    one_strlcpy("salut", "salut", 3);
    printf("\n");
    one_strlcpy("", "", 4);
    one_strlcpy("s", "", 4);
    one_strlcpy("", "s", 4);
    one_strlcpy("salut", "", 4);
    one_strlcpy("", "salut", 4);
    one_strlcpy("s", "s", 4);
    one_strlcpy("s", "salut", 4);
    one_strlcpy("salut", "s", 4);
    one_strlcpy("salut", "salut", 4);
    printf("\n");
    one_strlcpy("", "", 5);
    one_strlcpy("s", "", 5);
    one_strlcpy("", "s", 5);
    one_strlcpy("salut", "", 5);
    one_strlcpy("", "salut", 5);
    one_strlcpy("s", "s", 5);
    one_strlcpy("s", "salut", 5);
    one_strlcpy("salut", "s", 5);
    one_strlcpy("salut", "salut", 5);
    printf("\n");
    one_strlcpy("", "", 6);
    one_strlcpy("s", "", 6);
    one_strlcpy("", "s", 6);
    one_strlcpy("salut", "", 6);
    one_strlcpy("", "salut", 6);
    one_strlcpy("s", "s", 6);
    one_strlcpy("s", "salut", 6);
    one_strlcpy("salut", "s", 6);
    one_strlcpy("salut", "salut", 6);
    printf("\n");
    one_strlcpy("", "", 20);
    one_strlcpy("s", "", 20);
    one_strlcpy("", "s", 20);
    one_strlcpy("salut", "", 20);
    one_strlcpy("", "salut", 20);
    one_strlcpy("s", "s", 20);
    one_strlcpy("s", "salut", 20);
    one_strlcpy("salut", "s", 20);
    one_strlcpy("salut", "salut", 20);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_STRLEN
void try_strlen(void)
{
    ft_putstr(": testing (strlen):\n");
	char *str;
	int i;
	size_t refret, cusret;

	str = malloc(sizeof(char) * 11);
	for (i = 0; i < 10; i++)
		str[i] = i + 'A';
	for (i = 10; i >= 0; i--)
	{
		str[i] = '\0';
		
		printf("%10s  ref:(%02zu)  cus:(%02zu)  ", str,
			   refret = strlen(str), cusret = ft_strlen(str));
		fflush(stdout);
		ref_myassert(refret == cusret);
		printf("\n");
	}
	
	
    ft_putstr("\n------------------------------\n");
	free(str);
}
#endif


# ifdef TEST_STRNCAT
void try_strncat(void)
{
    ft_putstr("10: testing (strncat):\n");
	size_t 	lenlol;
	char *test1lol;
	char *test2lol;
	char*	test3lol;
	char*	test4lol;
	#define STRNCAT_MACRO(x, y, z) test1lol = malloc(30); memset(test1lol, 43, 29); test1lol[0] = 0; test1lol[29] = 0; test1lol = strcpy(test1lol, (x)); \
	test2lol = (y); lenlol = (z); test3lol= malloc(30); test3lol=memcpy(test3lol, test1lol, 30); test4lol=strdup(test2lol); \
	printf("s1:(%5s) s2:(%5s) len:(%zu) REF:(", test1lol, test2lol, lenlol); fflush(stdout); \
	ref_myputnchar(strncat(test1lol, test2lol, lenlol), 30); \
	printf(") CUS:("); fflush(stdout); ref_myputnchar(ft_strncat(test3lol, test4lol, lenlol), 30); printf(") "); fflush(stdout); \
	ref_myassert(!(memcmp(test1lol, test3lol, 30))); printf("\n");

	STRNCAT_MACRO("", "", 0)
	STRNCAT_MACRO("s", "", 0)
	STRNCAT_MACRO("", "s", 0)
	STRNCAT_MACRO("salut", "", 0)
	STRNCAT_MACRO("", "salut", 0)
	STRNCAT_MACRO("s", "s", 0)
	STRNCAT_MACRO("s", "salut", 0)
	STRNCAT_MACRO("salut", "s", 0)
	STRNCAT_MACRO("salut", "salut", 0)
	printf("\n");
	STRNCAT_MACRO("", "", 1)
	STRNCAT_MACRO("s", "", 1)
	STRNCAT_MACRO("", "s", 1)
	STRNCAT_MACRO("salut", "", 1)
	STRNCAT_MACRO("", "salut", 1)
	STRNCAT_MACRO("s", "s", 1)
	STRNCAT_MACRO("s", "salut", 1)
	STRNCAT_MACRO("salut", "s", 1)
	STRNCAT_MACRO("salut", "salut", 1)
	printf("\n");
	STRNCAT_MACRO("", "", 3)
	STRNCAT_MACRO("s", "", 3)
	STRNCAT_MACRO("", "s", 3)
	STRNCAT_MACRO("salut", "", 3)
	STRNCAT_MACRO("", "salut", 3)
	STRNCAT_MACRO("s", "s", 3)
	STRNCAT_MACRO("s", "salut", 3)
	STRNCAT_MACRO("salut", "s", 3)
	STRNCAT_MACRO("salut", "salut", 3)
	printf("\n");
	STRNCAT_MACRO("", "", 4)
	STRNCAT_MACRO("s", "", 4)
	STRNCAT_MACRO("", "s", 4)
	STRNCAT_MACRO("salut", "", 4)
	STRNCAT_MACRO("", "salut", 4)
	STRNCAT_MACRO("s", "s", 4)
	STRNCAT_MACRO("s", "salut", 4)
	STRNCAT_MACRO("salut", "s", 4)
	STRNCAT_MACRO("salut", "salut", 4)
	printf("\n");
	STRNCAT_MACRO("", "", 5)
	STRNCAT_MACRO("s", "", 5)
	STRNCAT_MACRO("", "s", 5)
	STRNCAT_MACRO("salut", "", 5)
	STRNCAT_MACRO("", "salut", 5)
	STRNCAT_MACRO("s", "s", 5)
	STRNCAT_MACRO("s", "salut", 5)
	STRNCAT_MACRO("salut", "s", 5)
	STRNCAT_MACRO("salut", "salut", 5)
	printf("\n");
	STRNCAT_MACRO("", "", 6)
	STRNCAT_MACRO("s", "", 6)
	STRNCAT_MACRO("", "s", 6)
	STRNCAT_MACRO("salut", "", 6)
	STRNCAT_MACRO("", "salut", 6)
	STRNCAT_MACRO("s", "s", 6)
	STRNCAT_MACRO("s", "salut", 6)
	STRNCAT_MACRO("salut", "s", 6)
	STRNCAT_MACRO("salut", "salut", 6)
	printf("\n");
	STRNCAT_MACRO("", "", 20)
	STRNCAT_MACRO("s", "", 20)
	STRNCAT_MACRO("", "s", 20)
	STRNCAT_MACRO("salut", "", 20)
	STRNCAT_MACRO("", "salut", 20)
	STRNCAT_MACRO("s", "s", 20)
	STRNCAT_MACRO("s", "salut", 20)
	STRNCAT_MACRO("salut", "s", 20)
	STRNCAT_MACRO("salut", "salut", 20)
	printf("\n");
	
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRNCMP

void	one_strncmp(char *s1, char *s2, size_t size)
{
	int	refret, cusret;

	refret = strncmp(s1, s2, size);
	cusret = ft_strncmp(s1, s2, size);
	printf("\033[34mREF\033[39m s1(%6s) s2(%6s) si(%u) ret(%d)", s1, s2, size, refret);
	printf("\n");
	printf("\033[35mCUS\033[39m s1(%6s) s2(%6s) si(%u) ret(%d)", s1, s2, size, cusret);
	fflush(stdout);
	if (refret == cusret)
		ref_myassert(1);
	else
		ref_myassert(0);
	printf("\n");
	// printf("\n");
}

void try_strncmp(void)
{

    ft_putstr("1: testing (ft_strncmp):\n");
	one_strncmp("", "", 0);
	one_strncmp("abcE", "abcE", 0);
	one_strncmp("abcd", "", 0);
	one_strncmp("", "abcd", 0);
	one_strncmp("abcE", "abcd", 0);
	printf("\n");
	one_strncmp("", "", 1);
	one_strncmp("abcE", "abcE", 1);
	one_strncmp("abcd", "", 1);
	one_strncmp("abcE", "abcd", 1);
	printf("\n");
	one_strncmp("", "", 2);
	one_strncmp("abcE", "abcE", 2);
	one_strncmp("", "abcd", 2);
	one_strncmp("abcE", "abcd", 2);
	printf("\n");
	one_strncmp("", "", 3);
	one_strncmp("abcE", "abcE", 3);
	one_strncmp("abcd", "", 3);
	one_strncmp("abcE", "abcd", 3);
	printf("\n");
	one_strncmp("", "", 4);
	one_strncmp("abcE", "abcE", 4);
	one_strncmp("", "abcd", 4);
	one_strncmp("abcE", "abcd", 4);
	printf("\n");
	one_strncmp("", "", 5);
	one_strncmp("abcE", "abcE", 5);
	one_strncmp("abcd", "", 5);
	one_strncmp("abcE", "abcd", 5);
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRNCPY
void    one_strncpy(int len, int fill, int ncpy, int ref)
{
    char* (*func)(char*, const char*, size_t);
    if (ref)
    {
        func = &strncpy;
        printf("\033[34mREF\033[39m");
    }
    else
    {
        func = &ft_strncpy;
        printf("\033[35mCUS\033[39m");
    }

    char *dst, *src, *ret;
    char *dst_sv, *src_sv;
    src = (char*)malloc(len);
    dst = (char*)malloc(len);
    int i;
    for (i = 0; i < len; i++)
        src[i] = i + 'a';
    src[i] = '\0';
    for (i = 0; i < len; i++)
        dst[i] = i + 'A';
    dst[i] = '\0';

    for (i = 0; i < fill; i++)
        src[i] = i + '0';
    src[i] = '\0';

    printf("--%d--%d--%d-------------------------\n", len, fill, ncpy);
    printf("init: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); printf("\n");
    printf("init: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); printf("\n");
    dst_sv = dst; src_sv = src;
    ret = (func)(dst, src, ncpy);
    printf("post: src(%p)(", src); fflush(stdout); ref_myputnchar(src, len); printf(") "); fflush(stdout); ref_myassert(src_sv == src); printf("\n");
    printf("post: dst(%p)(", dst); fflush(stdout); ref_myputnchar(dst, len); printf(") "); fflush(stdout); printf("\n");
    printf("post: ret(%p)(", ret); fflush(stdout); ref_myputnchar(ret, len); printf(") "); fflush(stdout); ref_myassert(dst == ret);  ref_myassert(dst_sv == dst);
    static void *cus_result_save;
    if (ref)
        ref_myassert(!memcmp(cus_result_save, dst, len));
    else
    {
        cus_result_save = malloc(len);
        cus_result_save = memcpy(cus_result_save, dst, len);
    } printf("\n");
}
void try_strncpy(void)
{
    ft_putstr("3: testing (strncpy):\n");
    one_strncpy(15, 10, 10, 0);    one_strncpy(15, 10, 10, 1); printf("\n");
    one_strncpy(15, 10, 5, 0);    one_strncpy(15, 10, 5, 1); printf("\n");
    one_strncpy(15, 5, 10, 0);    one_strncpy(15, 5, 10, 1); printf("\n");
    one_strncpy(15, 0, 10, 0);    one_strncpy(15, 0, 10, 1); printf("\n");
    one_strncpy(15, 10, 0, 0);    one_strncpy(15, 10, 0, 1); printf("\n");
    one_strncpy(15, 0, 0, 0);    one_strncpy(15, 0, 0, 1); printf("\n");
    ft_putstr("\n------------------------------\n");
}
#endif



# ifdef TEST_STRNSTR

/* copyright ksever@student.42.fr */
char* ref_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;

	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] && ((ft_strlen(s2) + i - 1) < n))
	{
		if (s1[i] == *s2)
		{
			if (ft_strncmp(&s1[i], s2, ft_strlen(s2)) == 0)
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}

void one_strnstr(char *str, char *chr, size_t n)
{
	char *refret, *cusret;

	printf("\033[34mREF\033[39m : str(");
	fflush(stdout);
	ref_myputnchar(str, strlen(str) + 1);
	ft_putstr(") chr(");
	ref_myputnchar(chr, strlen(chr) + 1);
	ft_putstr(") ");
	refret = strnstr(str, chr, n);	
	printf("size(%u) ", n);
	if (!refret)
		printf("ret(%p) ", refret);
	else
		printf("ptrdiff:(%u) ", (refret - str));
	fflush(stdout);
	ft_putchar('\n');

	printf("\033[35mCUS\033[39m : str(");
	fflush(stdout);
    ref_myputnchar(str, strlen(str) + 1);
    ft_putstr(") chr(");
    ref_myputnchar(chr, strlen(chr) + 1);
    ft_putstr(") ");
	cusret = ft_strnstr(str, chr, n);
	printf("size(%u) ", n);
    if (!cusret)
        printf("ret(%p) ", cusret);
    else
        printf("ptrdiff:(%u) ", (cusret - str));
	fflush(stdout);

	ref_myassert(cusret == refret);

    ft_putchar('\n');
}



void try_strnstr(void)
{
	ft_putstr(": testing (strnstr):\n");
	one_strnstr("", "678z", 0);
	one_strnstr("", "z", 0);
	one_strnstr("", "", 0);
	one_strnstr("z", "678z", 0);
	one_strnstr("z", "z", 0);
	one_strnstr("z", "", 0);
	one_strnstr("12678678z", "678z", 0);
	one_strnstr("12345678z", "z", 0);
	one_strnstr("12345678z", "", 0);
	one_strnstr("a", "a234", 0);
	one_strnstr("a23456789", "a234", 0);
	one_strnstr("a23456789", "a", 0);
	one_strnstr("j", "cdef", 0);
	one_strnstr("d", "c", 0);
	one_strnstr("cdeacdejc", "cdef", 0);
	one_strnstr("edeaedeje", "c", 0);
    ft_putchar('\n');
	one_strnstr("", "678z", 1);
	one_strnstr("", "z", 1);
	one_strnstr("", "", 1);
	one_strnstr("z", "678z", 1);
	one_strnstr("z", "z", 1);
	one_strnstr("z", "", 1);
	one_strnstr("12678678z", "678z", 1);
	one_strnstr("12345678z", "z", 1);
	one_strnstr("12345678z", "", 1);
	one_strnstr("a", "a234", 1);
	one_strnstr("a23456789", "a234", 1);
	one_strnstr("a23456789", "a", 1);
	one_strnstr("j", "cdef", 1);
	one_strnstr("d", "c", 1);
	one_strnstr("cdeacdejc", "cdef", 1);
	one_strnstr("edeaedeje", "c", 1);
    ft_putchar('\n');
	one_strnstr("", "678z", 2);
	one_strnstr("", "z", 2);
	one_strnstr("", "", 2);
	one_strnstr("z", "678z", 2);
	one_strnstr("z", "z", 2);
	one_strnstr("z", "", 2);
	one_strnstr("12678678z", "678z", 2);
	one_strnstr("12345678z", "z", 2);
	one_strnstr("12345678z", "", 2);
	one_strnstr("a", "a234", 2);
	one_strnstr("a23456789", "a234", 2);
	one_strnstr("a23456789", "a", 2);
	one_strnstr("j", "cdef", 2);
	one_strnstr("d", "c", 2);
	one_strnstr("cdeacdejc", "cdef", 2);
	one_strnstr("edeaedeje", "c", 2);
    ft_putchar('\n');
	one_strnstr("", "678z", 3);
	one_strnstr("", "z", 3);
	one_strnstr("", "", 3);
	one_strnstr("z", "678z", 3);
	one_strnstr("z", "z", 3);
	one_strnstr("z", "", 3);
	one_strnstr("12678678z", "678z", 3);
	one_strnstr("12345678z", "z", 3);
	one_strnstr("12345678z", "", 3);
	one_strnstr("a", "a234", 3);
	one_strnstr("a23456789", "a234", 3);
	one_strnstr("a23456789", "a", 3);
	one_strnstr("j", "cdef", 3);
	one_strnstr("d", "c", 3);
	one_strnstr("cdeacdejc", "cdef", 3);
	one_strnstr("edeaedeje", "c", 3);
    ft_putchar('\n');
	one_strnstr("", "678z", 4);
	one_strnstr("", "z", 4);
	one_strnstr("", "", 4);
	one_strnstr("z", "678z", 4);
	one_strnstr("z", "z", 4);
	one_strnstr("z", "", 4);
	one_strnstr("12678678z", "678z", 4);
	one_strnstr("12345678z", "z", 4);
	one_strnstr("12345678z", "", 4);
	one_strnstr("a", "a234", 4);
	one_strnstr("a23456789", "a234", 4);
	one_strnstr("a23456789", "a", 4);
	one_strnstr("j", "cdef", 4);
	one_strnstr("d", "c", 4);
	one_strnstr("cdeacdejc", "cdef", 4);
	one_strnstr("edeaedeje", "c", 4);
    ft_putchar('\n');
	one_strnstr("", "678z", 5);
	one_strnstr("", "z", 5);
	one_strnstr("", "", 5);
	one_strnstr("z", "678z", 5);
	one_strnstr("z", "z", 5);
	one_strnstr("z", "", 5);
	one_strnstr("12678678z", "678z", 5);
	one_strnstr("12345678z", "z", 5);
	one_strnstr("12345678z", "", 5);
	one_strnstr("a", "a234", 5);
	one_strnstr("a23456789", "a234", 5);
	one_strnstr("a23456789", "a", 5);
	one_strnstr("j", "cdef", 5);
	one_strnstr("d", "c", 5);
	one_strnstr("cdeacdejc", "cdef", 5);
	one_strnstr("edeaedeje", "c", 5);

/*     one_strstr(0, 4, "", "678z", 0); one_strstr(0, 4, "", "678z", 1); printf("\n"); */
/*     one_strstr(0, 1, "", "z", 0); one_strstr(0, 1, "", "z", 1); printf("\n"); */
/*     one_strstr(0, 0, "", "", 0); one_strstr(0, 0, "", "", 1); printf("\n"); */
/*     one_strstr(1, 4, "z", "678z", 0); one_strstr(1, 4, "z", "678z", 1); printf("\n"); */
/*     one_strstr(1, 1, "z", "z", 0); one_strstr(1, 1, "z", "z", 1); printf("\n"); */
/*     one_strstr(1, 0, "z", "", 0); one_strstr(1, 0, "z", "", 1); printf("\n"); */
/*     one_strstr(9, 4, "12678678z", "678z", 0); one_strstr(9, 4, "12678678z", "678z", 1); printf("\n"); */
/*     one_strstr(9, 1, "12345678z", "z", 0); one_strstr(9, 1, "12345678z", "z", 1); printf("\n"); */
/*     one_strstr(9, 0, "12345678z", "", 0); one_strstr(9, 0, "12345678z", "", 1); printf("\n"); */
/*     one_strstr(1, 4, "a", "a234", 0); one_strstr(1, 4, "a", "a234", 1); printf("\n"); */
/*     one_strstr(9, 4, "a23456789", "a234", 0); one_strstr(9, 4, "a23456789", "a234", 1); printf("\n"); */
/*     one_strstr(9, 1, "a23456789", "a", 0); one_strstr(9, 1, "a23456789", "a", 1); printf("\n"); */
/*     one_strstr(1, 4, "j", "cdef", 0); one_strstr(1, 4, "j", "cdef", 1); printf("\n"); */
/*     one_strstr(1, 1, "d", "c", 0); one_strstr(1, 1, "d", "c", 1); printf("\n"); */
/*     one_strstr(9, 4, "cdeacdejc", "cdef", 0); one_strstr(9, 4, "cdeacdejc", "cdef", 1); printf("\n"); */
/*     one_strstr(9, 1, "edeaedeje", "c", 0); one_strstr(9, 1, "edeaedeje", "c", 1); printf("\n"); */
	ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_STRRCHR
char	*ref_strrchr(const char *str, int c)
{
	char	tofind;
	char	*pos;

	tofind = (char)c;
	pos = NULL;
	while (1)
	{
		if (*str == tofind)
			pos = (char*)str;
		if (*str == '\0')
			return (pos);
		str++;
	}
}

void	one_strrchr(char *str, int c)
{
	char	*refret, *cusret;
	
	refret = strrchr(str, c);
	cusret = ft_strrchr(str, c);

	printf("\033[34mREF\033[39m  str[%11s] int[%2d] tochar[%2hhd]'%c'\tret[%s]  adress(ret - str)[%#10.8tx]\n", str, c, (char)c, (isgraph((int)(char)c) ? (char)c : (char)0), refret, refret - str);
	
	
	printf("\033[35mCUS\033[39m  str[%11s] int[%2d] tochar[%2hhd]'%c'\tret[%s]  adress(ret - str)[%#10.8tx]", str, c, (char)c, (isgraph((int)(char)c) ? (char)c : (char)0), cusret, cusret - str);
	fflush(stdout);
	
	ft_myassert(refret - str == cusret - str);
	// printf("%#10.8tx ", refret - str);
	// printf("%#10.8tx ", cusret - str);
	
	printf("\n");
	printf("\n");
}

void try_strrchr(void)
{
    ft_putstr(": testing (strrchr):\n");
	one_strrchr("", 'S');
	one_strrchr("Salut Hallo", 'S');
	one_strrchr("Salut Hallo", 'a');
	one_strrchr("Salut Hallo", 'l');
	one_strrchr("Salut Hallo", 'u');
	one_strrchr("Salut Hallo", 't');
	one_strrchr("Salut Hallo", '\0');
	one_strrchr("Salut Hallo", ':');
	one_strrchr("Salut Hallo", 'S' + 0b10000000000000);
	one_strrchr("Salut Hallo", 'a' + 0b1000000000000);
	one_strrchr("Salut Hallo", 'l' + 0b100000000000);
	one_strrchr("Salut Hallo", 'l' + 0b10000000);
	one_strrchr("Salut Hallo", 'u' + 0b10000000000);
	one_strrchr("Salut Hallo", 't' + 0b1000000000);
	one_strrchr("Salut Hallo", '\0'+ 0b100000000);
	one_strrchr("Salut Hallo", ':' + 0b10000000);
    ft_putstr("\n------------------------------\n");
}
#endif


# ifdef TEST_STRSTR
void    one_strstr(int lenref, int lentosearch, char *refstr, char *tosearch, int ref)
{
    char* (*func)(const char*, const char*);
    if (ref)
    {
        func = &strstr;
        printf("\033[34mREF\033[39m");
    }
    else
    {
        func = &ft_strstr;
        printf("\033[35mCUS\033[39m");
    }
    char *ret;
    printf("----------------------------------\n");
    printf("init: ref(%p)(", refstr); fflush(stdout); ref_myputnchar(refstr, lenref+1); printf(") "); fflush(stdout); printf("\n");
    printf("init: sea(%p)(", tosearch); fflush(stdout); ref_myputnchar(tosearch, lentosearch+1); printf(") "); fflush(stdout); printf("\n");
    ret = (func)(refstr, tosearch);
    printf("post: ret(%p)(", ret); fflush(stdout); ref_myputnchar(ret, lentosearch+1); printf(") "); fflush(stdout);
    static char *cus_result_save;
    if (ref)
    {
        if (cus_result_save && ret)
            ref_myassert(!strcmp(cus_result_save, ret));
        else
            ref_myassert(cus_result_save == NULL && ret == NULL);
    }
    else
    {
        if (ret)
            cus_result_save = strdup(ret);
        else
            cus_result_save = NULL;
    } printf("\n");
}
void try_strstr(void)
{
    ft_putstr("7: testing (strstr):\n");
    one_strstr(0, 4, "", "678z", 0); one_strstr(0, 4, "", "678z", 1); printf("\n");
    one_strstr(0, 1, "", "z", 0); one_strstr(0, 1, "", "z", 1); printf("\n");
    one_strstr(0, 0, "", "", 0); one_strstr(0, 0, "", "", 1); printf("\n");
    one_strstr(1, 4, "z", "678z", 0); one_strstr(1, 4, "z", "678z", 1); printf("\n");
    one_strstr(1, 1, "z", "z", 0); one_strstr(1, 1, "z", "z", 1); printf("\n");
    one_strstr(1, 0, "z", "", 0); one_strstr(1, 0, "z", "", 1); printf("\n");
    one_strstr(9, 4, "12678678z", "678z", 0); one_strstr(9, 4, "12678678z", "678z", 1); printf("\n");
    one_strstr(9, 1, "12345678z", "z", 0); one_strstr(9, 1, "12345678z", "z", 1); printf("\n");
    one_strstr(9, 0, "12345678z", "", 0); one_strstr(9, 0, "12345678z", "", 1); printf("\n");
    one_strstr(1, 4, "a", "a234", 0); one_strstr(1, 4, "a", "a234", 1); printf("\n");
    one_strstr(9, 4, "a23456789", "a234", 0); one_strstr(9, 4, "a23456789", "a234", 1); printf("\n");
    one_strstr(9, 1, "a23456789", "a", 0); one_strstr(9, 1, "a23456789", "a", 1); printf("\n");
    one_strstr(1, 4, "j", "cdef", 0); one_strstr(1, 4, "j", "cdef", 1); printf("\n");
    one_strstr(1, 1, "d", "c", 0); one_strstr(1, 1, "d", "c", 1); printf("\n");
    one_strstr(9, 4, "cdeacdejc", "cdef", 0); one_strstr(9, 4, "cdeacdejc", "cdef", 1); printf("\n");
    one_strstr(9, 1, "edeaedeje", "c", 0); one_strstr(9, 1, "edeaedeje", "c", 1); printf("\n");
    ft_putstr("\n------------------------------\n");
}
#endif



void test_toupandlow(int (*reffunc)(int), int (*cusfunc)(int))
{
    int i;
    char refret, cusret;

    for (i = -300; i < 300; i++)
    {
        refret = reffunc(i);
        cusret = cusfunc(i);
        if (refret != cusret)
        {
            g_temoin = 1;
            if (!isprint(i))
            {
                printf("\033[34mREF\033[39m-->%d<----ret:%d----\n", i, refret);
                printf("\033[35mCUS\033[39m-->%d<----ret:%d----", i, cusret);
            }
            else
            {
                printf("\033[34mREF\033[39m-->%d(%c)<----ret:%d----\n", i, i, refret);
                printf("\033[35mCUS\033[39m-->%d(%c)<----ret:%d----", i, i, cusret);
            }
            fflush(stdout);
            ref_myassert(refret == cusret);
            printf("\n");
        }
    }

}

# ifdef TEST_TOUPPER
void try_toupper(void)
{
	ft_putstr(": testing (toupper):\n");
    g_temoin = 0;
	test_toupandlow(&toupper, &ft_toupper);
    if (!g_temoin)
        ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif

# ifdef TEST_TOLOWER
void try_tolower(void)
{
    ft_putstr(": testing (tolower):\n");
    g_temoin = 0;
    test_toupandlow(&tolower, &ft_tolower);
    if (!g_temoin)
        ref_myassert(1);
    ft_putstr("\n------------------------------\n");
}
#endif
