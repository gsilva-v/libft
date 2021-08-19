#ifndef __LIBFT_H
# define __LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

void *malloc(size_t size);
void free(void *ptr);

int	ft_atoi(char *str);
int	ft_isprint(int x);
int	ft_isalnum(int x);
int	ft_isascii(int x);
int	ft_isdigit(int x);
int	ft_isalpha(int x);
int 	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *mem, int c, size_t len);

#endif
