#include "holberton.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
