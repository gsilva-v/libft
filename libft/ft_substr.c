/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:50:14 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/24 08:50:15 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*sub;

	x = 0;
	sub = (char *)malloc(sizeof((*s) * (len + 1)));
	if (sub == 0)
		return (NULL);
	i = start;
	while (x < len && s[i] != '\0')
	{
		sub[x] = s[i];
		i++;
		x++;
	}
	return (sub);
}
