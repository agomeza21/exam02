int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	char *l_str = "0123456789abcdef";
	char *u_str = "0123456789ABCDEF";

	while (str[i] == ' ' || str[i] =='\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i])
	{
		int j = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			while (l_str[j] && str[i] != l_str[j])
				j++;
			if (!l_str[j])
				break;
			result = result * str_base + j;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			while (u_str[j] && str[i] != u_str[j])
				j++;
			if (!u_str[j])
				break;
			result = result * str_base + j;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			while (u_str[j] && str[i] != u_str[j])
				j++;
			if (!u_str[j])
				break;
			result = result * str_base + j;
		}
		i++;
	}
	return (result * sign);
}