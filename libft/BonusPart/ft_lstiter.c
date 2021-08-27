/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:49:00 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 09:59:09 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))//função que aplica uma função a todo conteúdo da lista
{
	if (lst == NULL)
		return ;
	while (lst -> next != NULL)
	{
		f(lst-> content);// aplica a funcão ao conteudo da lista atual e vai para a proxima
		lst = lst -> next;
	}
	f(lst -> content);//aplica a função a ultima lista
}
