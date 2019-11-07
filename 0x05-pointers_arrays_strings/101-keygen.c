#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program to generate a password key that fits
 * a predetermined total value, calculated in ASCII.
 * Return: 0 (Success).
 */

int main(void)
{
	int ascii_sum = 0;
	int i = 0;
	int rand_val;
	char values[62] =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char p_word[100];

	srand(time(NULL));
	for (; ascii_sum < (2772 - 122); i++)
	{
		rand_val = rand() % 62;
		p_word[i] = values[rand_val];
		ascii_sum += values[rand_val];
	}

	rand_val = 2772 - ascii_sum;
	p_word[i] = rand_val;
	p_word[++i] = '\0';
	printf("%s", p_word);
	return (0);
}
