#include "libft.h"
int	ft_toupper(int c)
{
	unsigned char	i;

	i = c;
	if (i >= 97 && i <= 122)
		i = i - 32;
	return (i);
}
