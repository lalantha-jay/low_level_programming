#include "holberton.h"

/**
 * _strncat - function to concatenate two strings
 * @dest: the destination string with data
 * @src: the source string with datai
 * @n: the length of the string
 * Return: nothing/void.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len_dest = 0;

	while (dest[len_dest] != '\0')
		len_dest++;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	dest[len_dest++] = '\0';
	return (dest);
}
