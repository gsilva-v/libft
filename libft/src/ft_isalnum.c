#include "libft.h"

int ft_isalnum(int x)
{
	int isalp;

	isalp = ft_isalpha(x);
	if (isalp == 1) 
		printf("is alpha\n");
	else
		printf("not is alpha\n");
	return(0);
}
