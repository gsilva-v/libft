#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			x;
	char		*des;
	const char	*sr;

	x = 0;
	des = (char *)dest;
	sr = (char *)src;
	if (sr == des)
		return (NULL);
	while (n--)
	{
		des[x] = sr[x];
		x++;
	}
	return (des);
}
