/**
 * main - Program to print the last digit of a number.
 * Arguments: None.
 * Return: Always 0 (Success)
 * Date: 06/20/2019
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %i is %i", n, (n % 10));
	n = n % 10;
	if (n == 0)
	{
		printf(" and is 0\n");
	}
	else if (n > 5)
	{
		printf(" and is greater than 5\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");

	}
	return (0);
}

