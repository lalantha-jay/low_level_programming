/**
 * main - Program to print alphabet in lowercase, 10 times.
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/24/2019
 */

#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-1);
	print_last_digit(36.4);
	print_last_digit(-0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
