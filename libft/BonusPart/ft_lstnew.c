/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:49:14 by gabriel           #+#    #+#             */
/*   Updated: 2021/08/27 10:04:50 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)// função para criar um nova lista
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));//recebe o tamanho necessario na memoria para uma lista
	if (new == NULL)
		return (0);
	new -> content = content;//recebera o conteudo que foi passado como parametro
	return (new);
}
