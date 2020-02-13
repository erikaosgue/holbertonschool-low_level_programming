#include "holberton.h"
/**
 * print_numbers - print the numbers from 0 to 9
 *
 * Return: 0 always
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
