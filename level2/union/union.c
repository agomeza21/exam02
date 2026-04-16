/*repetir hasta entender bien*/
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int i = 0;
		while (argv[1][i])
		{
			int j = 0;
			while (j < i)
			{
				if (argv[1][i] == argv[1][j])
					break;
				j++;
			}
			if (j == i)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			int found = 0;
			int j = 0;
			while(argv[1][j])
			{
				if (argv[2][i] == argv[1][j])
				{
					found = 1;
					break;
				}
				j++;
			}
			j = 0;
			while (j < i && !found)
			{
				if (argv[2][i] == argv[2][j])
				{
					found = 1;
					break;
				}
				j++;
			}
			if (!found)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
