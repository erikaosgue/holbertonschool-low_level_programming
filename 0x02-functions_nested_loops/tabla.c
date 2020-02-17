#include "holberton.h"


void times_table(void)
{
	int m = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		
			m = i * j;

			if (m > 9)
			{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0'):
			}
			else 
				_putchar(m + '0');
		}
		_putchar('\n');
	}
}

