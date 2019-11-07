#include "holberton.h"
/**
 * print_line - display a straight line.
 * @n: parameter indicating number of chars to print.
 * Return: nothing/void.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

