/**
 * times_table - function to print the 9 times table.
 * Return: void/nothing
 * Date: 06/25/2019
 */

#include "holberton.h"

void times_table(void)
{

	int r, c, p;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			p = r * c;

			if (p <= 9)
			{
				_putchar(p + '0');
			} else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (((((c + 1) * r) <=  9)) && (c != 9))
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

