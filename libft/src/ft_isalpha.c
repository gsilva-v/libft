#include "libft.h"

int	ft_isalpha(int x)
{
	int isalp;

	isalp = 0;
	if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
		isalp = 1;
	if (isalp==1)
		printf("is alpha\n");
	else
		printf("not is alpha\n");
	return(isalp);
}

int main(void)
{
	int x;
	x= '2';
	ft_isalpha(x);
	return(0);
}	
