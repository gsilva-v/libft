#include "libft.h"

int	ft_isdigit(int x)
{
	int isdig;

	isdig = 0;
	if ( x >= 48 && x <= 57)
		isdig = 1;
	if (isdig == 1)
		printf("Is number\n");
	else
		printf("NaN\n");
	return(isdig);
}
int main (void)
{
	int x;
	x = '3';
	ft_isdigit(x);
}

	
