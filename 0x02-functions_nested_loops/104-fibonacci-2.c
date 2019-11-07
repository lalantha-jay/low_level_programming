#include <stdio.h>

/**
 * main - prints fibonacci series
 * Return: 0
 */

int main(void)
{
	long int fibo = 0;
	long int n1 = 0;
	long int n2 = 1;
	int c;
	int num_fibo = 98;

	for (c = 1; c <= num_fibo; c++)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;

		printf("%lu", fibo);
		if (c < num_fibo)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
