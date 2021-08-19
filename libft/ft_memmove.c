#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *temp;

	temp = (char *)malloc(sizeof(char)*n);
	if (temp == NULL)
		return(NULL);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	free(temp);
	return(dest);
}
