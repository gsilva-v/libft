/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:06:03 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/28 13:48:42 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)//essa função move o conteúdo de um endereço de memória para outro, ate que o n acabe
{
	char		*new_dest;
	const char	*new_src;
	char		*enddst;
	const char	*endsrc;

	new_dest = dest;
	new_src = src;
	enddst = new_dest + (n - 1);
	endsrc = new_src + (n - 1);
	if (dest == src || n == 0)// caso elas ja sejam iguais ou n nao exista
		return (dest);//retorna o dest
	if (dest < src)//o caso melhor para nos é caso o src seja maior que o dest, ai somente iremos copiar o conteúdo
		while (n--)//iremos copiar ate acabar o nosso n
			*new_dest++ = *new_src++;
	else// caso dest > src deveremos copiar de tras pra frente entao usaremos nossas variaveis end para isso
		while (n--)
			*enddst-- = *endsrc--;
	return (dest);//retorna nosso dest
}
