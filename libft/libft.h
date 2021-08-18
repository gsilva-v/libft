#ifndef __LIBFT_H
# define __LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>


void	*ft_memset(void *mem, int c, size_t len);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(char *str);
int	ft_isdigit(int x);
int	ft_isalpha(int x);

#endif
