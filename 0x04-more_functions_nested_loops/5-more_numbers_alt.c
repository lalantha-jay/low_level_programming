#include "holberton.h"
/**
 * more_numbers - displays 10 x n, for n (0...14)
 * Return: nothing/void.
 */

void more_numbers(void)
{
	int c;
	int i;
	char nums[20] = "01234567891011121314\n";

	for (c = 0; c <= 10; c++)
	{
		i = 0;
		while (i < 20)
		{
			_putchar(nums[i]);
			i++;
		}
	}
}

