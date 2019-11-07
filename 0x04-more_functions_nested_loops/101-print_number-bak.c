#include "holberton.h"
#include <stdio.h>

int _abs(int n);
/**
 * _abs: calculates the absolute value of an integer
 * @n: an integer
 * Return: positive integer
 */

int _abs(int n)
{
	return ((n < 0) ? n * -1 : n);
}

/**
 * print_number - function to print uisng putchar.
 * @n: the integer value to be displayed.
 * Return: nothing/void.
 */
void print_number(int n)
{
	int digit;
	unsigned int base = 1;
	unsigned int num;

	num = _abs(n);
	while (num != 0 && num > 9)
	{
		num = num / 10;
		base = base * 10;
	}

	num = _abs(n);
	if (n < 0)
		_putchar('-');
	if (base == 1)
		_putchar(num + '0');
	while (base != 1)
	{
		digit = num / base;
		_putchar(digit + '0');
		num = num % base;
		if (base == 10)
		{
			digit = num % 10;
			_putchar(digit + '0');
		}
		base = base / 10;
	}
}
