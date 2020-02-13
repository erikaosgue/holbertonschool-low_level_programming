#include "holberton.h"
/**
 *
 *
 *
 *\
void print_times_table(int n)
{
	int m;
	
	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j
				if (i == 0)
					_putchar(m + '0')
				else if (m > 9)
				{
					_putchar('');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
					_putchar(m + '0');
				if (j == n)
				{
					_putchar(m);
					break;
				}
				_putchar('');
				_putchar('');
				_putchar(',');
			}
			_putchar('\n');
		}
	}
}
