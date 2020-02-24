#include "holberton.h"
/**
 * _strncpy - Copies a string into another one
 * @dest: String destiny to paste the string source
 * @src: String source to copy the string
 * @n: Number of bytes the string src should copy
 * Return: The address of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
