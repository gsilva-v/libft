/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:05:40 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/24 09:05:41 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	s;
	size_t	n;

	s = 0;
	n = 0;
	new = (char *)malloc(sizeof((*s1) + (*s2)));
	if (new == 0)
		return (0);
	while (s1[s] != '\0')
		new[n++] = s1[s++];
	s = 0;
	while (s2[s] != '\0')
		new[n++] = s2[s++];
	new[n] = '\0';
	return (new);
}
