/**
 * main - Program to print characters using custom _putchar function
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/24/2019
 */

#include "holberton.h"

int main(void)
{
	char pword[] = "Holberton\0";
	int i = 0;

	while (pword[i] != '\0')
	{
		_putchar(pword[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
