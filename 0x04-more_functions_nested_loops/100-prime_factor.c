#include <stdio.h>

/**
 * main - find and print largest prime factor of 612852475143
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int i;
	long n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	printf("%d\n", i);
	return (0);
}
