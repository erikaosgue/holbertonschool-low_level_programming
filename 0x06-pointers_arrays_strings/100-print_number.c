#include "holberton.h"
/**
 * print_number - Prints an integer
 * @n: Number as a imput
 * Return: 0 Always
 */
void print_number(int n)
{
	int num = 0, flag = 0, k = 1;

	if (n == -2147483648)
	{
		n = n / 10;
		flag = 1;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	num = n;
	while (num != 0)
	{
		k = 1;
		while (num / 10)
		{
			k *= 10;
			num = num / 10;
		}
		_putchar(num + '0');
		num = n;
		num %= k;
	}
	if (flag == 1)
		_putchar('8');
	if (n == 0)
		_putchar('0');
}
