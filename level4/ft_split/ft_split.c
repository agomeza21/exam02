int is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (0);
	else if (c >= 33 && c <= 126)
		return (1);
	return (2);
}

char **ft_split(char *str)
{
	static char words[4096][4096];
	static char *split[4096];
	int count_words = 0;
	int count_chars = 0;
	int count = 0;

	while(str[count] && !is_space(str[count]))
		count++;
	while(str[count])
	{
		if (!is_space(str[count]) && count_chars > 0)
		{
			words[count_words][count_chars] = '\0';
			split[count_words] = words[count_words];
			count_chars = 0; 
			count_words++; 
		}
		else if (is_space(str[count]) == 1)
		{
			words[count_words][count_chars++] = str[count];
		}
		count++;
	}
	
	if (count_chars > 0)
	{
		words[count_words][count_chars] = '\0';
		split[count_words] = words[count_words];
		count_words++; 
	}
	split[count_words] = NULL;
	return split;
}

/*
#include <stdio.h>

int main(void)
{
	char **split=ft_split("  esto es una  prueba  ");

	int cont = 0;
	while (cont < 5)
		printf("%s\n",split[cont++]);

		return (1);
}*/
