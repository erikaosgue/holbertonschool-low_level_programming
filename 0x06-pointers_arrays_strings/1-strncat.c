#include "holberton.h"
/**
 * *_strncat - Concatenate the string conting the bytes
 * @dest: destiny of the string
 * @src: source of the string
 * @n: bytes copied from src
 * Return: the string destiny (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (!(j == n))
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	dest[i] = '\0';

	return (dest);
}
