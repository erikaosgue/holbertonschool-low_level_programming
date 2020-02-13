#include "holberton.h"
/**
 * more_numbers - print the numbers from 0 to 9 10 times 
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	int b;
	int j = 0;
	int i = 0;

	for (i = 0; i <= 9; i++);
	{
		for (j = 0; j <= 14; j++)
		{	
			if (j >=10)
			{
				_putchar('1');
			}
			b = j % 10;
			_putchar(b + '0');
		}
	}
	_putchar('\n');
}
