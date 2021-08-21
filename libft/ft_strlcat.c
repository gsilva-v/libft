#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{	
	size_t srclen;
	size_t destlen;
	size_t i;
	size_t x;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = destsize - 1;
	x = 0;
	if (!dest && !src)
		return(0);
	while (src[x] != '\0' && destsize > 0)
	{
		dest[i] = src[x];
		i++;
		x++;
		destsize--;
	}
	return(destlen + srclen);
}
