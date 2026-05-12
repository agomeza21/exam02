#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = atoi(argv[1]);
		int divisor = 2;
		int first = 1;

		while (divisor <= num)
		{
			if (num % divisor == 0)
			{
				num = num / divisor;
				if (first != 1)
					printf("*");
				printf("%d", divisor);
				first = 0;
			}
			else
				divisor++;
		}
	}
	printf("\n");
}