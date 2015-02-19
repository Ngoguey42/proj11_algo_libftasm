/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:21:13 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 16:19:07 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

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

 /* # define TEST_BZERO */
 /* # define TEST_STRCAT */
 /* # define TEST_ISALPHA */
 /* # define TEST_ISDIGIT */
 /* # define TEST_ISALNUM */
 /* # define TEST_ISASCII */
 /* # define TEST_ISPRINT */
 /* # define TEST_TOUPPER */
 /* # define TEST_TOLOWER */
 /* # define TEST_PUTS */

 /* # define TEST_STRLEN */
 /* # define TEST_MEMSET */
 /* # define TEST_MEMCPY */
 /* # define TEST_STRDUP */

 /* # define TEST_CAT */


/* # define TEST_MEMCMP */
/* # define TEST_STRCPY */
/* # define TEST_STRCMP */
/* # define TEST_MEMCHR */
/* # define TEST_STRCHR */
/* # define TEST_STRLCAT */
# define TEST_STRLCPY



 /* # define TEST_ATOI */
 /* # define TEST_MEMMOVE */
 /* # define TEST_MEMCCPY */


 /*
 # define TEST_STRNCAT
 # define TEST_STRNCMP
 # define TEST_STRNCPY
 # define TEST_STRNSTR
 # define TEST_STRRCHR
 # define TEST_STRSTR
 */

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

#endif
