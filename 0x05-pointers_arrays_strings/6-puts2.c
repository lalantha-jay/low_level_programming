#include "holberton.h"

/**
 * puts2 - function to print every other char
 * @str: an array of chars, forming a string.
 * Return: nothing/void.
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	for (; str[len] != '\0'; len++)
		;

	for (; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

