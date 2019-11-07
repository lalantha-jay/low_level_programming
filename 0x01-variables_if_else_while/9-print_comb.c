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

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

