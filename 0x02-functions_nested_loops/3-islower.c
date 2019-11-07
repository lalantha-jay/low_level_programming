/**
 * _islower - verifies whether a given value corresponds to the
 * ASCII range 97-122.
 * @c: positive integer
 * Return: 1 (True) or 0 (False)
 * Date: 06/24/2019
 */

#include "holberton.h"

int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);

}

