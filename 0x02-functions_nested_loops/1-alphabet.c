/**
 * print_alphabet - prints alphabet from a to z in lower case
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/24/2019
 */

#include "holberton.h"

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar (i + '\0');
	}
	_putchar('\n');
}
