#include <unistd.h>

int main(int argc, char **argv)
{
	char *lower = "abcdefghijklmnopqrstuvwxyz";
	char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				int j = 0;
				while (argv[1][i] != lower[j])
					j++;
				if (j < 13)
				{
					argv[1][i] = argv[1][i] + 13;
					write(1, &argv[1][i], 1);
				}
				else
				{
					argv[1][i] = lower[j] - 13;
					write(1, &argv[1][i], 1);
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				int j = 0;
				while (argv[1][i] != upper[j])
					j++;
				if (j < 13)
				{
					argv[1][i] = argv[1][i] + 13;
					write(1, &argv[1][i], 1);
				}
				else
				{
					argv[1][i] = upper[j] - 13;
					write(1, &argv[1][i], 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}