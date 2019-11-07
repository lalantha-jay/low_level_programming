#include "holberton.h"

/**
 * _strlen - function to return the length of a
 * string passed by reference.
 * @s: an array of chars, forming a string.
 * Return: int, length of string
 */

int _strlen(char *s)
{
	int offset = 0;

	while (*(s + offset) != '\0')
		++offset;
	return (offset);
}
