#include <unistd.h>

void putnbr(int i)
{
	char num;
	if (i < 10)
	{
		num = i +'0';
		write(1, &num, 1);
	}
	else
	{
		num = (i / 10) + '0';
		write(1, &num, 1);
		num = (i % 10) + '0';
		write(1, &num, 1);
	}
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
