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
	for (; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
