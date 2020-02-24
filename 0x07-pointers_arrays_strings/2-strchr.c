#include "holberton.h"
/**
 * _srtchr - Locates a character in a string
 * @s: Address of the array 
 * @c: Character
 * Return: The string modified
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[i] != 0; j++)
			{
				s[j] = s[i];
				i++;
			}
		}
	}
	return (s);
}
