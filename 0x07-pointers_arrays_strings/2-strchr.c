#include "holberton.h"
/**
 * _strchr - Locates a character in a string
 * @s: Address of the array
 * @c: Character
 * Return: The string modified
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}

	}
	return (s);
}
