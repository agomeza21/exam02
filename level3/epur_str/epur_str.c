#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		int word = 0;

		while (argv[1][i])
		{
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write(1, &argv[1][i], 1);
				word = 1;
			}
			if (word == 1 && (argv[1][i] == ' ' || argv[1][i] == '\t') && argv[1][i + 1] != '\0' && (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t'))
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}