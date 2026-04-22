unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int divisor = 2;
	unsigned int result = 1;

	if (a == 0 || b == 0)
		return (0);
	while (a != 1 || b != 1)
	{
		if (a % divisor != 0 && b % divisor != 0)
			divisor ++;
		else
		{
			if (a % divisor == 0)
				a = a / divisor;
			if (b % divisor == 0)
				b = b / divisor;
			result = result * divisor;
		}
	}
	return (result);
}