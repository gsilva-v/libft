#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;
	char		*prdst;
	const char	*prsrc;

	new_dest = dest;
	new_src = src;
	prdst = new_dest + (n - 1);
	prsrc = new_src + (n - 1);
	if (dest == src || n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest < src)
		while (n--)
			*new_dest++ = *new_src++;
	else
		while (n--)
			*prdst-- = *prsrc--;
	return (dest);
}