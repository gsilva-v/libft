/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:49:17 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 10:05:17 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_lstsize(t_list *lst)//função que conta quantas listas tem ao todo
{
	int	size;

	if (lst == NULL)
		return (0);
	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst -> next;//vai pro proximo elemento
	}
	return (size);
}
