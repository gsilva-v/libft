/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:51:48 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/26 16:33:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_char_in_set(char c, char const *set)//essa função verifica se o caractere c esta no nosso set
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)//caso fique igual a função retorna verdadeiro
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	start = 0;
	while (s1[start] && ft_char_in_set (s1[start], set))//aqui iremos verificar o inicio da string
		start ++;
	len = ft_strlen(s1);//para a parte de olhar o fim  da str precisamos do tamanho dela
	while (len > start && ft_char_in_set (s1[len - 1 ], set))//aqui iremos fazer a verificação ate que chegue no caractere ja verificado antes
		len--;
	str = (char *) malloc (sizeof(*s1) * (len - start + 1));//alocaremos uma memoria com o tamanho da diferença entreo ultimo caso do set no inicio e no fim
	i = 0 ;
	while (start < len)
		str[i ++] = s1[start ++];//aqui iremos copiar a palavra começando da ultima posição do caractere c inicio e ira ate o len
	str[i] = '\0' ;
	return (str);
}
