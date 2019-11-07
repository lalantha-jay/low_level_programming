#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function to copy a string into a char pointer
 * @src: the source stirng
 * @dest: the destination char pointer
 * Return: character pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
