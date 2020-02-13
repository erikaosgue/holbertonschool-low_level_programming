#include "holberton.h"
/**
 * print_line - draws a stright line in the terminal
 * @n: number of times the underline will be printed
 * Return: 0 always
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
