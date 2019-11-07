#include "holberton.h"
#include <stdio.h>
/**
 * swap_int - function to swap two integers passed
 * by reference.
 * @a: pointer to an integer
 * @b: pointer to an integer
 * Return: nothing/void.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
