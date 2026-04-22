#include <unistd.h>

int is_prime(int num)
{
	int j = 2;
	while (j < num)
	{
		if (num % j == 0)
			return (0);
		j++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int result = 0;
		int sign = 1;
		int i = 0;

		if (argv[1][i] == '+' || argv[1][i] == '-')
		{
			if (argv[1][i] == '-')
				sign = -1;
			i++;
		}
		while (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			result = result * 10 + (argv[1][i] - '0');
			i++;
		}
		int num = sign * result;
		i = 2;
		int prime = 0;
		result = 0;
		while (i <= num)
		{
			prime = is_prime(i);
			if (prime == 1)
				result = result + i;
			i++;
		}
		char f_result;
		if (result < 10)
		{
			f_result = result + '0';
			write(1, &f_result, 1);
		}
		else
		{
			f_result = (result / 10) + '0';
			write(1, &f_result, 1);
			f_result = (result % 10) + '0';
			write(1, &f_result, 1);
		}
	}
	if (argc != 2)
		write(1, "0", 1);
	write(1, "\n", 1);
}