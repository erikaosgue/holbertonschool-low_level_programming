#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Addres of the string
 * @accept: string with amount of bytes
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				k += 1;
			}
		}
	}
	return (k);
}
