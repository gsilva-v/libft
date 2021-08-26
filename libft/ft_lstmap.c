#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlst;
	t_list *temp;

	temp = (t_list *)malloc(sizeof(t_list));
	newlst = (t_list *)malloc(sizeof(t_list));
	if (newlst == NULL || lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		newlst = f(lst -> content);
		temp = lst -> next;
		ft_lstdelone(lst, del);
		lst = temp;

	}
	newlst = f (lst -> content);
	return (newlst);
}
