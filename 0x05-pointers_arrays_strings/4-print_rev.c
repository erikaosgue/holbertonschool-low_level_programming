#include "holberton.h"
/**
 * print_rev - Print a string in reverse
 * @s: It is a string
 * Return: 0 Always
 */
void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i ='0'; s[i] != '\0'; i++)
	{
		length = length + 1;
	}
	_putchar(length + '0');
}
