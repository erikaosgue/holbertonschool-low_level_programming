#include "holberton.h"
/**
 * jack_bauer - Prints every minute of 24 hours.
 *
 * Return: 0 Always
 */

void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}

