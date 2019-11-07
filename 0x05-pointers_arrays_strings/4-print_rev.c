#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - function to print a string in reverse.
 * @s: an array of chars, forming a string.
 * Return: nothing/void.
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i -= 1;

	while ((s[i]) != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
