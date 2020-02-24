#include "holberton.h"
/**
 * _memcpy - Copies a memory data
 * @dest: Address of the string copying to
 * @src: Address of source copied
 * @n: Number of bytes copying from sec
 * Return: Address of memory returning
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = 0;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
