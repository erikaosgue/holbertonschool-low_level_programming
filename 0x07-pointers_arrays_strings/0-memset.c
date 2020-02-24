#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Address of the array
 * @b: constant char
 * @n: Nummber of bytes to fill in the memory area
 * Return: addres of the string modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int j = 0;

	j = n;

	for (i = 0; i < j; i++)
	{
		s[i] = b;
	}
	return (s);

}

