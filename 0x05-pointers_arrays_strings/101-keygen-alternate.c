#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - program to generate a password key that fits
 * a predetermined total value, calculated in ASCII.
 * @argc: takes a single argument to indicate whether to
 * print variable information.
 * Return: 0 (Success).
 */

/* p - flag to indicater whether user requested to
 * display verbose output
 */
int p = 0;

/**
 * cal_rand - function to produce a random number less than <range>
 */
int cal_rand(int range)
{
	int rand_val;

	rand_val = rand();
	if (p) printf("Random value: %d\n", rand_val);
	rand_val %= range;;
	return (rand_val);
}
/**
 * _ascii_sum - function to produce a password string.
 */

void _ascii_sum(char *pword)
{
	int ascii_sum = 0;
	int i = 0;
	int rand_val;
	char values[66] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789{|}~";
	srand(time(NULL));

	for (; ascii_sum < (2772 - 122); i++)
	{
		rand_val = cal_rand(66);
		if (p) printf("rand_val(modulus 62): %d\n", rand_val);
		pword[i] = values[rand_val];
		if (p) printf("pword<ascii value>: %d, pword<char>: %c\n",
		pword[i], pword[i]);
		ascii_sum += values[rand_val];
		if (p) printf("ascii_sum: %d\n", ascii_sum);
		if (p) printf("END Loop\n\n");
	}
	rand_val = 2772 - ascii_sum;
	if(p) printf("rand_val: %d\n", rand_val);
	pword[i] = rand_val;
	if(p) printf ("pword[i]: %c\n", pword[i]);
	pword[++i] = '\0';
}

int main(int argc, char *argv[])
{
	char pword[100];

	if (argc > 1)
		p = (strcmp(argv[1], "print") == 0) ? 1 : 0;

	_ascii_sum(pword);
	
	printf ("%s", pword);
	return(0);
}
