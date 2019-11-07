#include "holberton.h"

/**
 * print_number - Print an integer one character at a time.
 * @n: The number to print
 */
void print_number(int n)
{
	unsigned int t;

	t = (n < 0) ? n * -1 : n;
	if (n < 0)
		_putchar('-');

	if (t / 10 != 0)
		print_number(t / 10);

	_putchar(t % 10 + '0');
}
