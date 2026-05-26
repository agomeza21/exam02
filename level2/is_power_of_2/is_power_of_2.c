int	    is_power_of_2(unsigned int n)
{
	unsigned int i = 1;

	if (n == 0)
		return (0);
	while (i < n)
	{
		if (i > n / 2)
			return (0);
		i = i * 2;
	}
	if (i == n)
		return (1);
	return (0);
}
