#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int end;
		int first = 1;

		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			end = i;
			i++;
			if (!first)
				write(1, " ", 1);
			first = 0;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
                i++;
			}
			i = end - 1;
		}
	}
	write(1, "\n", 1);
}