#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int count = 0;
	char *str_nbr;
	int sign = 0;
	int original;
	int i;
	int tmp;

	if (nbr == 0)
	{
		str_nbr = malloc(2);
		str_nbr[0] = '0';
		str_nbr[1] = '\0';
		return (str_nbr);
	}
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	original = nbr;
	tmp = nbr;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		count++;
	}
	str_nbr = malloc(sizeof(char) * (count + sign + 1));
	str_nbr[count + sign] = '\0';
	i = count + sign - 1;
	while (original > 0)
	{
		str_nbr[i] = original % 10 + '0';
		original = original / 10;
		i--;
	}
	if (sign == 1)
		str_nbr[0] = '-';
	return (str_nbr);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(16));
	printf("%s\n", ft_itoa(123));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
} */