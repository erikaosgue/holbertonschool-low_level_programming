#include "holberton.h"
/**
 *
 *
 *
 */
void puts_half(char *str)
{
	int i, j;
	int l = 0;
	
	for (i = 0; str[i] != 0; i++)
	{
		l = l + 1;
	}
	if ( l % 2 == 0)
	{
		for (j = l/2; str[j] != 0; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (l - 1)/2 + 1; str[j] != 0; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
