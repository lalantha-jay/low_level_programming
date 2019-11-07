/**
 * main - Program to print numbers from 1-9 using putchar
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/20/2019
 */

#include <stdio.h>

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
	}
	putchar('\n');
	return (0);
}

