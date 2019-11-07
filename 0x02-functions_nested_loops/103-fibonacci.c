#include <stdio.h>

/**
 * main - prints fibonacci series
 * Return: 0
 */

int main(void)
{
	long fibo = 0;
	long n1 = 0;
	long n2 = 1;
	long sum = 0;
	int c;
	int num_fibo = 50;
	long max_fibo = 4000000;

	for (c = 1; c <= num_fibo; c++)
	{
		fibo = n1 + n2;
		n1 = n2;
		n2 = fibo;

		if (fibo < max_fibo)
		{
			if ((fibo % 2 == 0))
			{
				sum = sum + fibo;
				 /* printf("%lu, Sum:  %lu\n", fibo, sum);*/
			}
		}
	}
	printf("%lu\n", sum);
	return (0);
}
