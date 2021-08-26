#include "libft.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst; //new recebe na sessão next o elemento de lst,
	       				//no caso, o primeiro
		*lst = new;
	}
}
