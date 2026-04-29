#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char *lower = "abcdefghijklmnopqrstuvwxyz";
		char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				int j = 0;
				while (lower[j] && lower[j] != argv[1][i])
					j++;
				int x = 25 - j;
				argv[1][i] = lower[x];
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				int j = 0;
				while (upper[j] && upper[j] != argv[1][i])
					j++;
				int x = 25 - j;
				argv[1][i] = upper[x];
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
