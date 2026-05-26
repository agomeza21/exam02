#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < argc)
	{
		int j = 0;
		int len = 0;
		char *str;
		int k;
		while (argv[i][j] && (argv[i][j] == ' ' || argv[i][j] == '\t'))
			j++;
		k = j;
		while (argv[i][j] != ' ' && argv[i][j] != '\t')
		{
			len++;
			j++;
		}
		str = malloc(len + 1);
		int x = 0;
		while (k < len)
		{
			str[x] = argv[i][k];
			x++;
			k++;
		}
		str[x] = '\0';
		while (argv[i][j])
		{
			while (argv[i][j] == ' ' || argv[i][j] == '\t')
				j++;
			while (argv[i][j] && argv[i][j] != ' ' && argv[i][j] != '\t')
			{
				if (j > 0 && (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t') && j - 1 > k + len)
					write(1, " ", 1);
				write(1, &argv[i][j], 1);
				j++;
			}
		}
		x = 0;
		if (str[0] && j > len + k)
			write(1, " ", 1);
		while (str[x])
		{
			write(1, &str[x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
}