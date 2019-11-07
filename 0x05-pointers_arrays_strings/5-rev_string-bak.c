#include "holberton.h"

/**
 * rev_string - function to reverse a string.
 * @s: an array of chars to be reversed.
 * Return: nothing/void.
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 1;
	char tmp;

	while (s[len] != '\0')
		len++;

	len -= 1;
	while (i != len)
	{
		if (i <= len / 2)
		{
			tmp = s[i];
			s[i] = s[len - i];
			s[len - i] = tmp;
		}
		i++;
	}
}
