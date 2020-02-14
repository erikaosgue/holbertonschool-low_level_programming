#include "holberton.h"
/**
 * print_triangle - prints the size of a triangle
 * @size: the size of the triangle
 * Return: 0 Always
 */
void print_triangle(int size)
{
	int i;
	int j;
	int b;
	int c;
	int k;

	b = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			b--;
			for (j = 0; j < size ; j++)
			{
				if (j == b


				_putchar(' ');
			}
			b = b - 1;
			if (c <= size)

				for (k = 0; k < c; k++)
				{
					_putchar('#');
				}
				c = c + 1;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
