#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int len = 0;
		int i = 0;
		int j = 0;
		int count = 0;
		while (argv[1][len])
			len++;
		while (argv[1][i])
		{
			while ( argv[2][j] && (argv[1][i] != argv[2][j]))
				j++;
			if (argv[1][i] == argv[2][j])
				count++;
			i++;
		}
		if (argv[2][j] == '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		if (count == len)
		{
			int i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}