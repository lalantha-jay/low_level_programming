/**
 * print_last_digit - print last digit of a number
 * @i: a positive/negative integer or zero.
 * Return: i (last digit of number)
 * Date: 06/24/2019
 */

#include "holberton.h"

int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
	{
		i = (i * -1);
	}
	_putchar(i + '0');
	return (i);
}

