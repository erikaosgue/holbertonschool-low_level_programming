#include "holberton.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: string to concatenate
 * @src: string that i will move
 * Return: string destiny (dest)
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i] = src[j]) != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
