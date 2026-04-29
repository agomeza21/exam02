#include <unistd.h>

int itoa(char *argv)
{
	int i = 0;
	int result = 0;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		result = result * 10 + (argv[i] - '0');
		i++;
	}
	return (result);
}

void putnbr( int result)
{
	char *hex = "0123456789abcdef";

	if (result >= 16)
		putnbr(result / 16);
	char c = hex[result % 16];
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int result = itoa(argv[1]);
		putnbr(result);
	}
	write(1, "\n", 1);
}