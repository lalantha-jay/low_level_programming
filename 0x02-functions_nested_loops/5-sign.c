/**
 * print_sign - prints the sign of a number.
 * @n: a positive/negative integer or zero.
 * Return: 1 (Positive), -1 (Negative), or 0 (Zero)
 * Date: 06/24/2019
 */

#include "holberton.h"

int print_sign(int n)
{

	if (n == 0)
	{
		_putchar('0');
	} else if (n > 0)
	{
		_putchar('+');
	} else
	{
		_putchar('-');
	}

	return ((n == 0) ? 0 : (n < 0) ? -1 : 1);

}

