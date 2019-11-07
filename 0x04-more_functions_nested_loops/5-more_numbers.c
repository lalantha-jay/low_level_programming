#include "holberton.h"
/**
 * more_numbers - displays 10 x n, for n (0...14)
 * Return: nothing/void.
 */

void more_numbers(void)
{
	int c;
	int i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10)  + '0');
		}
		_putchar('\n');
	}
}

