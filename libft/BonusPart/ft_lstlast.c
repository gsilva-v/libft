/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:49:04 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 10:02:50 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)//função para chegarmos a ulltima lista da estrutura
{
	if (lst == NULL)
		return (0);
	while (lst -> next != NULL)//enquanto houverem listas, so iremos para a próxima 
		lst = lst -> next;
	return (lst);
}
