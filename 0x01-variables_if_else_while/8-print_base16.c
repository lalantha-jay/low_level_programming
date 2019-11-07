/**
 * main - Program to print hexadecimal number set.
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/20/2019
 */

#include <stdio.h>

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

