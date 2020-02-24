#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Prints an integer
 * @n: Number as a imput
 * Return: 0 Always
 */
void print_number(int n)
{
	int k = 1, longnum = 0, i = 0, mod = 0;
	unsigned int num = 0;

	if ( n == -2147483648)
	{
		num = n;
	}
	if (n < 0)
	{
		/*n *= -1;*/
		num = n;
		_putchar('-');
	}
	if (n == 0)
		_putchar(n + '0');
	num = n;
	while (num / k)
	{
		k *= 10;
		longnum += 1;
	}
	k /= 10;
	for (i = 0; i < longnum; i++)
	{
		num = n / k;
		mod = n % k;
		k /= 10;
		_putchar(num + '0');
		n = mod;
	}
}
