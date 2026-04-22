#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int divisor = 2;
		int result = 1;
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		while (1)
		{
			if (a % divisor == 0 && b % divisor == 0)
			{
				a = a / divisor;
				b = b / divisor;
				result = result * divisor;
			}
			else if (a % divisor == 0 || b % divisor == 0)
			{
				divisor ++;
			}
			else
				break;
		}
		printf("%d", result);
	}
	printf("\n");
}