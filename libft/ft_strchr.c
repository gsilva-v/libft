#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	find;

	find = 0;
	while (s[find] != '\0')
	{
		if (s[find] == c)
			return ((char *)s + find);
		find++;
	}
	if (s[find] == c)
		return ((char *)s + find);
	return (0);
}
