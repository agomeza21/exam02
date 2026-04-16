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
			int j = 0;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (argv[1][i] != lower[j])
					j++;
				while (j >= 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (argv[1][i] != upper[j])
					j++;
				while (j >= 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}