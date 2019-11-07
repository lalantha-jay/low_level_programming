/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting position for integer printing
 * Date: 06/24/2019
 */

#include "holberton.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;

		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	printf("\n");
}
