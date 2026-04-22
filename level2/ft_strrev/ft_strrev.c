char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char tmp;
	while (str[j])
		j++;
	j--;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}