#include "libft.h"
int ft_strlen(char str)
{
	int x;
	
	x = 0;
	while(str[x] != '\0')
	{
		x++;	
	}
	return(x);	
}

