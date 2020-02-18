#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string to another one
 * @dest: destiny of the the string
 * @src: Source of the string
 * Return: 0 Always
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; src[i] != 0; i++)
	{
		k++;
	}
	for (j = 0; j < k; j++)
	{
		dest[j] = src[j];
	}
	dest[k] = '\0';
	return (dest);
	return (src);
}
