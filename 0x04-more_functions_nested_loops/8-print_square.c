#include "holberton.h"
/**
 * print_square - print a filled in square.
 * @n: parameter indicating number of chars to print.
 * Return: nothing/void.
 */

void print_square(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

