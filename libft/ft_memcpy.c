#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	int x;
	char *des;
	const char *sr;

	i = n;
	x = 0;
	des =(char *)dest;
	sr =(char *)src;

	if (sr == des)
		return(NULL);
	while (i--)
	{
		des[x]= sr[x];
		x++;
	}
	return(des);	
}
