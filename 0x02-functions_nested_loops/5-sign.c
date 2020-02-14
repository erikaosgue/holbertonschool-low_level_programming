#include "holberton.h"
/**
 * print_sign - the sing of a number n
 * @c: the number to be checked
 * Return: 1 if the number is positive, -1 if is negative, 0 otherwise
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
