#include "holberton.h"
/**
 * times_table - Prints 9 times table starting with 0
 *
 * Return: 0 Always
 */
void times_table(void)
{
	int i;
	int j;
	int a = 0;
	int b = 0;
	int c = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			a = i * j;
			if (j == 0)
			{
				_putchar(a + '0');
			}
			else if (a > 9)
			{
				b = a / 10;
				c = a % 10;
				_putchar(b + '0');
				_putchar(c + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(a + '0');
			}
			if (j == 9)
				break;
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
