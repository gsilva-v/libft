/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:05:54 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 10:14:33 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)// Procura um char em um endereço de memória com o limite de n
{
	size_t		i;
	const char	*src;

	src = (char *)s;
	i = 0;
	while (n--)
	{
		if (src[i] == c)
			return ((char *)s + i);// caso encontre, deve retornar o endereço de memória
		i++;
	}
	return (0);
}
