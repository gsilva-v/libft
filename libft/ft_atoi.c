int	ft_atoi(char *str)
{
	int	x;
	int	neg;
	int	n;

	x = 0;
	neg = 1;
	n = 0;
	while ((str[x] >= 9 && str [x] <= 13 ) || str[x] <= 32)
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			neg *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		n = (str[x] - '0') + (n * 10);
		x++;
	}
	return (n * neg);
}
