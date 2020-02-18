#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 * @s: It is a string
 * Return: 0 Always
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
