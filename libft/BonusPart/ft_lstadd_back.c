/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:48:47 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 09:52:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstadd_back(t_list **lst, t_list *new)// Função que adiciona uma nova lista ao ultimo elemento
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)// se o ponteiro para lista estiver vazio, so colocamos a nova na posição 
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)-> next = new;//usamos a função para chegarmos a ultima lista e adicionamos a nova na posição
}
