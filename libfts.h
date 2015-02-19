/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngoguey <ngoguey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 16:10:11 by ngoguey           #+#    #+#             */
/*   Updated: 2015/02/19 17:10:19 by ngoguey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
# define LIBFTS_H

# include <stddef.h>

void	ft_puts(const char *s);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);

int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

char    *ft_strdup(const char *s1);;
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *s1, const char *s2, size_t num);
void	ft_cat(int fd);

char    *ft_strcpy(char *dst, const char *src);

char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);


void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
size_t	ft_strlen(const char *s);

void	ft_bzero(void *s, size_t n);

#endif
