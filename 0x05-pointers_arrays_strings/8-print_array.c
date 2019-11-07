#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function to print second half a string.
 * @a: an array of integers
 * @n: the number of integers.
 * Return: nothing/void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
