/**
 * times_table - function to print the 9 times table.
 * Return: void/nothing
 * Date: 06/25/2019
 */

#include "holberton.h"

void print_times_table(int s)
{
	int r, c, p;
	
	s = s + 1;

	if ((s > 0) && (s <= 15))
	{
		for (r = 0; r < s; r++)
		{
			for (c = 0; c < s; c++)
			{
				p = r * c;

				if (p <= s - 1)
				{
					_putchar(p + '0');
				}
				else
				{
					if (p > 99)
					{
						_putchar((p /100) + '0');
						_putchar(((p % 100) % 10) + '0');
					}
					else
					{
						_putchar((p / 10) + '0');
						_putchar((p % 10) + '0');
					}
				}

				if (c < s - 1)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				if (((((c + 1) * r) <=  (s - 1))) && (c != (s - 1)))
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

