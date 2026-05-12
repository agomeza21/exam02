#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int counter = 0;
		while (argv[1][i])
		{
			if (counter > 0 && argv[1][i] != ' ' && argv[1][i] != '\t' && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
				write(1, " ", 1);
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				counter++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}