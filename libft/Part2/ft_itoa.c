/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:22:24 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/28 13:27:29 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	lenint(int n)
{
	int	len;

	if (n >= 0)
		len = 0;
	else
		len = 1;//caso nosso numero seja negativo, devemos garantir que teremos um caract
			//ere a mais pelo sinal -
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = lenint(n);
	str = ft_calloc(len, sizeof(char));
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n == -2147483648)
		return (ft_strncpy(str, "-2147483648\0", 12));
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
	}
	str[len--] = '\0';
	while (n > 0)
	{
		str[len--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}