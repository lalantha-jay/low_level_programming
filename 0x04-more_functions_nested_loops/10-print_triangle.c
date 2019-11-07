#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - print a filled-in triangle as specified
 * @size: the size of the triangle.
 * Return: nothing/void.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = size - 1; i >= 0; i--)
		{
			for (j = 0; j < size; j++)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
