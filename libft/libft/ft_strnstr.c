/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:06:27 by gabriel           #+#    #+#             */
/*   Updated: 2021/09/07 10:09:11 by gsilva-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	s;
	size_t	t;

	s = 0;
	t = 0;
	if (tofind [0] == '\0')
		return ((char *)&str[s]);
	while (s < len && str[s] != '\0')
	{
		while (str [s + t] == tofind[t] && tofind[t] != '\0' && s + t < len)
		{
			if (tofind[t + 1] == '\0')
				return ((char *)str + s);
			t++;
		}
		s++;
	}
	return (NULL);
}
