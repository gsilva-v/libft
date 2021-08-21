#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t	destlen;
	size_t	d;
	size_t	s;

	destlen = ft_strlen(dest);
	d = destlen;
	s = 0;
	if (destlen >= size)
		return (size + ft_strlen(src));
	while (size > d && src[s] != '\0')
		dest[d++] = src[s++];
	if (d == size)
		dest[d - 1] = '\0';
	dest[d] = '\0';
	return (destlen + ft_strlen(src));
}
