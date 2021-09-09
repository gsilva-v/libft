/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 08:50:14 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/06 09:15:35 by gsilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = start;
	if (s == NULL)
		return (NULL);
	if (i >= ft_strlen(s))
	{
		sub = (char *)ft_calloc(sizeof(char), 1);
		if (!sub)
			return (NULL);
		return (sub);
	}
	sub = (char *)malloc(sizeof((*s) * (len + 1)));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
