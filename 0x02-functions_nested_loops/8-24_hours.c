#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	for ( i = '0; i <= 23; i++)
	{
		for (j = '0'; j <= 59; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			e = j % 10;
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(c + '0');
			_putchar(d + '0');
		}
	}
}

