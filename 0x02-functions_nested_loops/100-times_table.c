#include "holberton.h"
/**
  * times_table - prints n times starting with 0
  * @n: number to multiply
  * Return: 0 always
  */
void print_times_table(int n)
{
	int m;
	int j;
	int i;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j == 0)
					_putchar(m + '0');
				else if (m > 9 && m < 100)
				{
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m > 99)
				{
					_putchar((m / 100 % 10) + '0');
					_putchar((m / 10 % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				if (j == n)
					break;
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
