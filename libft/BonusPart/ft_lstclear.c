/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:48:53 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 09:56:24 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))//Função para limpar uma lista 
{
	t_list	*temp;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)-> next;//armazenamos a proxima posição
		ft_lstdelone(*lst, del);//limpamos o elemento atual
		*lst = temp;//vamos para o proximo elemento até o fim da lista
	}
	*lst = NULL;//devemos colocar o ponteiro apontando para nulo para garantir que nao tem mais nada dentro dele
}
