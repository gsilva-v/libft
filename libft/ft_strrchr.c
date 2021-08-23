#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	find;

	find = ft_strlen(s);
	while (find >= 0)
	{
		if (s[find] == c)
			return ((char *) s + find);
		find --;
	}
	return (0);
}
