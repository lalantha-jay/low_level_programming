#include "holberton.h"

/**
 * rot13 - function to encode using ROT13
 * @s: char pointer to parameter string
 * Return: pointer to a char array
 *
 * Get the ascii value of upper/lower case values
 * using bitwise-AND for 32 positons
 */

char *rot13(char *s)
{
	char *ch;
	char ascii_pos;
	char key = 13;

	for (ch = s; *ch; ch++)
	{
		ascii_pos = ('A' + (*ch & 32));
		if ((*ch >= 'a' && *ch <= 'z') ||
		(*ch >= 'A' && *ch <= 'Z'))
			*ch = (*ch - ascii_pos +  key) % 26 + ascii_pos;

	}

	return (s);
}
