/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:00:22 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 10:42:29 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))//função que cria uma nova logo apos ter passado pela função c
{
	t_list	*newlst;
	t_list	*temp;

	newlst = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		temp = ft_lstnew(f(lst -> content));//a temp vai receber uma nossa  nova lista apos passar todo conteudo  pela função f
		if (temp == NULL);
			ft_lstclear(&temp, del);//caso de errado, limparemos a temp
		lst = lst -> next;//vamos para o proximo elemneto da lista
		ft_lstadd_back(&newlst, temp);//ira adicionar o conteudo da temp ao final da nossa nova lista
	}
	return (newlst);
}
