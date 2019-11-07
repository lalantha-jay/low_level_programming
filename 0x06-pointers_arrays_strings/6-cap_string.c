#include "holberton.h"

/**
 * *cap_string - function to capitalize only proper words
 * @s: char pointer to parameter string
 * Return: pointer to reformatted char array
 */

char *cap_string(char *s)
{
	/* Following are considered word separator characters */
	char *check = " \t\n,;.!?\"(){}";
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 0; check[j]; j++)
			{
				if (s[i - 1] == check[j])
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
