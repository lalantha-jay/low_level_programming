#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";
	char n[11] = "1234567890";
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
	printf("%s\n", n);
	rev_string(n);
    printf("%s\n", n);
    return (0);
}
