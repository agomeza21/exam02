#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		int j = 0;

		while (argv[1][i])
		{
			while (argv[2][j] && argv[1][i] != argv[2][j])
				j++;
			if (argv[2][j] == '\0')
			{
				write(1, "0\n", 2);
				return (0);
			}
			i++;
		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
	}
	write(1, "\n", 1);
}