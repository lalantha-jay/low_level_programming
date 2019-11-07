/**
 * main - Program to print alphabet in lowercase, 10 times.
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/24/2019
 */

#include "holberton.h"

int main(void)
{
	int r;

    	r = _islower('H');
    	_putchar(r + '0');
    	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
    	_putchar(r + '0');
    	_putchar('\n');

	return (0);
}
