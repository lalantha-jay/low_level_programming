#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - function to print second half a string.
 * @str: an array of chars, forming a string.
 * Return: nothing/void.
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		len++;

	len /= 2;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
