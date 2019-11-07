/**
 * _isalpha - Verifies whether a given value is an alphabet.
 * @c: integer representing an ASCII value.
 * Return: 1 (True), or 0 (False)
 * Date: 06/24/2019
 */

#include "holberton.h"

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);

}
