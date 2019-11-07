#include "holberton.h"

/**
 * _strncpy - function to concatenate two strings
 * @dest: the destination string with data
 * @src: the source string with datai
 * @n: the length of the string
 * Return: nothing/void.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i = 0;

	for (; i < n && *src != '\0'; i++)
	{
		*tmp++ = *src++;
	}

	for (; i < n ; i++)
		*tmp++ = '\0';

	return (dest);
}

