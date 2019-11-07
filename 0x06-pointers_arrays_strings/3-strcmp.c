#include "holberton.h"

/**
 * _strcmp - function to compare two strings
 * @s1: the destination string with data
 * @s2: the source string with datai
 * Return: nothing/void.
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}

	return (*s1 - *s2);
}

