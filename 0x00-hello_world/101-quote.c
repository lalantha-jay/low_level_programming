/**
 * main - Program to print a string to std error, without using printf(3)
 * or puts.
 * Arguments: None.
 * Return: Always 1 (Failure)
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
