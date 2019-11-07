#include "holberton.h"

/**
 * reverse_array - function to compare two strings
 * @a: the arrary to be reversed
 * @n: the number of elements in the array
 * Return: nothing/void.
 */

void reverse_array(int *a, int n)
{

	int i = 0;
	int tmp = 0;

	n -= 1;
	for (; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n--] = tmp;
	}
}
