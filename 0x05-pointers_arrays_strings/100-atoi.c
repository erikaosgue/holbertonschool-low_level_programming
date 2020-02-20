#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - Turns a string into an integer
 * @s: Address of the string
 * Return: an Integer
 */
int _atoi(char *s)
{
	int j;
	int i;
	int l = 0;
	int minus = 0;
	int caja = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			l++;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
	}
	for (j = i - (l - 1); j <= i; j++)
	{
		caja = caja * 10 + s[j] - '0';
	}
	if (minus % 2 != 0)
	{
		caja = caja * - 1;
	}
	return (caja);
}
