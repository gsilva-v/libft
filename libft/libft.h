/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:07:13 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/23 15:16:31 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_isprint(int x);
int		ft_isalnum(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isalpha(int x);
int		ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *mem, int c, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t destsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *str, const char *tofind, size_t len);
void	*ft_calloc(size_t nbytes, size_t sizemem);
char	*ft_strdup(const char *s);
#endif
