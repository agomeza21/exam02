#include <unistd.h>

void putnbr(int n)
{
	char c;
	if (n >= 10)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		char n = argc - 1;
		putnbr(n);
		write(1, "\n", 1);
	}
	return (0);
}