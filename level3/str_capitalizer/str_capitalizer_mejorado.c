#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
    		write(1, "\n", 1);
	while (i < argc)
	{
		int j = 0;

		while (argv[i][j])
		{
			if (j > 0 && (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 32;
			}
			else if (j == 0)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 32;
			}
			else
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = argv[i][j] + 32;
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
