/**
 * _abs - computer absolute value of an integer
 * @i: a positive/negative integer or zero.
 * Return: i
 * Date: 06/24/2019
 */

#include "holberton.h"

int _abs(int i)
{

	if (i < 0)
	{
		i = i * (-1);
	}

	return (i);
}

