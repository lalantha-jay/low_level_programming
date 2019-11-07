#include "holberton.h"

/**
 * _strcat - function to concatenate two strings
 * @dest: the destination string with data
 * @src: the source string with data
 * Return: nothing/void.
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;

	while ((*tmp++ = *src++))
		;
	*tmp++ = '\0';
	return (dest);
}

