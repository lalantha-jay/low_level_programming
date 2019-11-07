#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0/SUCCESSS
 */

int main(void)
{
	long sum = 0;
	long n1 = 0;
	long n2 = 1;
	int c;
	int max = 50;

	for (c = 1; c <= max; c++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		printf("%ld", sum);
		if (c < max)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

