/**
 * main - Program to print numbers from 1-9 using putchar
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/20/2019
 */

#include <stdio.h>

int main(void)
{
	int i;
	int x;

	for (i = 0; i <= 8; i++)
	{
		for (x = i + 1; x <= 9; x++)
		{
			putchar(i + '0');
			putchar(x + '0');
			if ((i != 8) || (x != 9))
			{	putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
