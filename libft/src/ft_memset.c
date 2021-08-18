#include "libft.h"

void	*ft_memset(void *mem, int c, size_t len)
{
	while (len--)
	{
		*(unsigned char*) (mem + len) = (unsigned char)(c);
	}
	return (mem);
}	

int main (void)
{
	char str[10];
	strcpy(str, "teste12345");
	puts(str);

	ft_memset(str, 'G', 3);
	puts(str);
	return(0);
}
