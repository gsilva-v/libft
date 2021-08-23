#include "libft.h"
int	ft_tolower(int c)
{
	unsigned char	i;

	i = c;
	if (i >= 'A' && i <= 'Z')
		i = i + 32;
	return (i);
}
