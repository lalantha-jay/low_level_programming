/**
 * print_alphabet_x10 - prints alphabet in lowercase, 10 times.
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/24/2019
 */

#include "holberton.h"

void print_alphabet_x10(void)
{
	int i;
	int l = 0;

	while (l < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (i + '\0');
		}
		l++;
		_putchar('\n');
	}
}
