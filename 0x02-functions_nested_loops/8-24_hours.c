/**
 * jack_bauer - print every minute of the day
 * Return: void/nothing
 * Date: 06/24/2019
 */

#include "holberton.h"

void jack_bauer(void)
{

	int i;
	int o;

	for (o = 0; o < (24); o++)
	{
		for (i = 0; i <= (59); i++)
		{
			_putchar ((o / 10) + '0');
			_putchar ((o % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			if (o <=  59)
			{
				_putchar('\n');
			}
		}
	}
}

