#include "holberton.h"
/**
 * print_triangle - Print a triangle with # reciving an integer
 * @n: Size of the triangle
 * Return: 0
 */
void print_triangle(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= (n - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
