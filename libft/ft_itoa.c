/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:22:24 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/24 17:22:26 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*new_str;

	new_str = (char *) malloc (sizeof (char) * 2);
	if (new_str == 0)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(new_str, "-2147483648"));
	else if (n < 0)
	{
		new_str[0] = '-';
		new_str[1] = '\0';
		new_str = ft_strjoin(new_str, ft_itoa(-n));
	}
	else if (n >= 0 && n <= 9)
	{
		new_str[0] = n + 48;
		new_str[1] = '\0';
	}
	else
		new_str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	return (new_str);
}
