#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;
	int n = argc - 1;
	int word = 0;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i <= n)
	{
		int j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				argv[i][j] = argv[i][j] + 32;
			j++;
		}
		j = 0;
		while (argv[i][j])
		{
			int word_before = word;
			if (argv[i][j] == ' ' || argv[i][j] == '\t')
				word = 0;
			else
				word = 1;
			if (word_before == 0 && word == 1)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 32;
				write(1, &argv[i][j], 1);
				word = 1;
			}
			else if (word_before == 1 && word == 1)
				write(1, &argv[i][j], 1);
			else
				write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}