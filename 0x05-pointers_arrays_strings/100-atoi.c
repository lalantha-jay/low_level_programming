#include "holberton.h"
#include <limits.h>

/**
 * _atoi - function to convert char numbers to an integer.
 * @s: string value
 * Return: nothing/void.
 */

int _atoi(char *s)
{
	int c = 0;
	int sign = -1;
	int value = 0;

	for (; (s[c] != '\0'); c++)
	{
		if (s[c] == '-')
			sign *= -1;
		if (s[c] >= '0' && s[c] <= '9')
		{
			value = (value * 10) - (s[c] - '0');
			if (!(s[c + 1] >= '0' && s[c + 1] <= '9'))
				break;
		}
	}
	return (value * sign);
}
