#include "ft_printf.h"
int main()
{
	char cad[] = "SOU FODA";
	int n = 20;


	ft_printf("1: %s\n2: %s\n3: %c\n4: %d\n5: %i\n6: %i\n", "sou ", "foda", 'g', 2147483647, 0, -202);
	printf("\n1: %s\n2: %s\n3: %c\n4: %d\n5: %i\n6: %i\n", "sou ", "foda", 'g', 2147483647, 0, -202);
	ft_printf("%s\n %d\n", cad, n);
	ft_printf("%s", cad);
}