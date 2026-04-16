#include <unistd.h>

void putnbr(int result)
{
	if (result >= 10)
		putnbr(result / 10);
	int c = (result % 10) + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int count = 1;
	int i = 0;
	int n = 0;
	int result;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			n = n * 10 + (argv[1][i] - '0');
			i++;
		}
		while (count <= 9)
		{
			int num = count + '0';
			write(1, &num, 1);
			write(1, " x ", 3);
			i = 0;
			while (argv[1][i])
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, " = ", 3);
			result = n * count;
			putnbr(result);
			if (count < 9)
				write(1, "\n", 1);
			count++;
		}
	}
	write(1, "\n", 1);
}