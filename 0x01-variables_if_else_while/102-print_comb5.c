/**
 * main - Program to print all possible combinations of two
 *      two-digt numbers.
 * Arguments: None.
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;
	int o;

	for (o = 0; o < (99); o++)
	{
		for (i = o; i < (100); i++)
		{
			if (i != o)
			{
				putchar ((o / 10) + '0');
				putchar ((o % 10) + '0');
				putchar(' ');
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				if (o < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
