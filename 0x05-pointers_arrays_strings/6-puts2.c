#include "holberton.h"
/**
 * puts2 - Print veryother character
 * @str: Address of the string
 * Return: 0 Always
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
