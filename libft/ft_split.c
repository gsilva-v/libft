/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:24:48 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/26 16:02:31 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strncpy(char *dst, const char *src, size_t n)// função para copiar a string com o limite de n caracteres
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src [i];
		i++;
	}
	while (i < n)//caso src acabe e o n não, adicionaremos caracteres nulos ate que n acabe
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static int	counterwords(const char *s, char c)//função  para contar quantas divisões na string devemos fazer
{
	unsigned int	i;
	int				cntr;

	cntr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)// caso encontre o c, iremos para o proximo caractere
			i++;
		else if (s[i] != '\0')// se o proximo caractere nao for nulo, nos contaremos mais um para o nosso contador de palavras
			cntr++;
		i++;
	}
	return (cntr);//retorna o valor de palavras que temos
}

static char	*ft_strndup(const char *s, size_t len)//função para criarmos a nova str para escrever as palavras separadas
{
	char	*str;

	str = (char *) malloc (sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}

char	**ft_split(const char *s, char c)//nossa função principal 
{
	int		st;
	int		posc;
	int		n;
	char	**new_str;

	st = 0;
	posc = 0;
	n = 0;
	new_str = (char **) malloc(sizeof (char *) * ((counterwords(s, c) + 1)));// nossa nova str recebe o tamanho a depender de quantas ocorrencias do caracteerce c
	if (new_str == NULL)
		return (NULL);
	while (s[st] != '\0')
	{
		while (s[st] == c)
			st++;
		posc = st;//quando encontrarmos a primeira ocorrencia de c, iremos gudar esse valor
		while (s[st] != '\0' && s[st] != c)
			st++;//iremos seguir ate que acabe a string ou ocorra novamente o c
		if (st > posc)//caso exista uma palavra entre as ocorrencias de c, essa string sera atribuida a nossa nova string
			new_str[n++] = ft_strndup(s + posc, st - posc);//comecaçaremos a cópia pela posição da primeira ocorrencia de c e iremos ate a segunda ocorrência
	}
	new_str[n] = '\0'; // colocaremos o caractere nulo ao final e retornaremos nossa nova string
	return (new_str);
}
