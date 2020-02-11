#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - return last digit of a number
 * @n: the number to be cheked
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i >= 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else
		_putchar(-i + '0');
		return (-i);
}
