#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cmp;


	cmp = 0;
	while (n-- )
	{
		if (s1[cmp] != s2[cmp] || s1[cmp] == '\0' || s2[cmp] == '\0')
			return((unsigned char )s1[cmp] - (unsigned char )s2[cmp]);
		cmp++;
	}
	return (0);
}
