#include <unistd.h>

void putnbr_base(int num)
{
	char *hex_str = "0123456789abcdef";
	char c;

	if (num >= 16)
		putnbr_base(num / 16);
	c = hex_str[num % 16];
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int num = 0;
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			num = num * 10 + (argv[1][i] - '0');
			i++;
		}
		putnbr_base(num);
	}
	write(1, "\n", 1);
}