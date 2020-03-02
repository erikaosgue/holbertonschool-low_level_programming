#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - Turns a string into an integer
 * @s: Address of the string
 * Return: an Integer
 */
int _atoi(char *s)
{
	int j, i;
	int minus = 0;
	long int caja = 0;
	long int num = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			minus++;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
		caja = caja * 10 + s[j] - '0';
	if (minus % 2 != 0)
		num = caja * -1;
	else
		num = caja;
	return (num);
}
