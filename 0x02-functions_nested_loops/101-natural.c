#include <stdio.h>

/**
 * main - The program driver
 *
 * Return: 1/SUCCESS, always
 */

int main(void)
{
	int n = 1024;
	unsigned long sum;
	int c;

	for (c = 1; c < n; c++)
	{
		if ((c % 3 == 0) && (c % 5 == 0))
		{
			sum += c;
		}
		else if (c % 3 == 0)
		{
			sum += c;
		}
		else if (c % 5 == 0)
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
