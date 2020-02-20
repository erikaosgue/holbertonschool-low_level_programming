#include "holberton.h"
/**
 * *_strncpy - Copies a string to anotherone
 * @dest: destiny of the string it will copy
 * @src: source of the string i will be copying
 * @n: number of bytes i nedd to copy
 * Return: destiny string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int count = 0;

	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	if (count >= n)
	{
		for (j = 0; dest[j] != '\0'; j++)
		{
			if (!(j == n))
			{
				dest[j] = src[j];
				i++;
			}
			else
				break;
		}
	}
	else if (count < n)
	{
		for (j = 0; j < count; j++)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';
	}
	return (dest);

}
