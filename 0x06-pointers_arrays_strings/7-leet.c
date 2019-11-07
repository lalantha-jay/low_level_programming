#include "holberton.h"

/**
 * leet - function to encode string into 1337/leet. 
 * @s: char pointer to parameter string
 * Return: pointer to a char array
 */

char *leet(char *s)
{
	int i;
	char enc_map[2][10] = {{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
	{'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}};

	for (; *s; s++)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == enc_map[0][i])
				*s = enc_map[1][i];
		}
	}

	return (s);
}
