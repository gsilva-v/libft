/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:48:57 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 09:57:15 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstdelone(t_list *lst, void (*del)(void *))// Função que exclui um elemento da lista
{
	if (lst == NULL)
		return ;
	del(lst -> content);//deleta o conteudo na lista
	free(lst);
}
