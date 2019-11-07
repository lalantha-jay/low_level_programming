#include "holberton.h"
#include <stdio.h>

/**
 * _puts - function to print a string
 * passed by reference.
 * @str: an array of chars, forming a string.
 * Return: nothing/void.
 */

void _puts(char *str)
{
	int i = 0;

	while ((str[i]) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
