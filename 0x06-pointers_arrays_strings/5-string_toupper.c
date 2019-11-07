#include "holberton.h"

/**
 * string_toupper - function to compare two strings
 * @ch: char pointer to parameter string
 * Return: pointer to a char array
 */

char *string_toupper(char *ch)
{
	char *tmp = ch;

	for (; *ch; ch++)
	{
		if ((*ch >= 'a') && (*ch <= 'z'))
			*(ch) = *(ch) - 32;
	}
	return (tmp);
}

