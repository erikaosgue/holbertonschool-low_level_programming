#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string to be compare
 * @s2: Second srting to be compare
 *Return: the difference bettwen those teo letters
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result = 0;

	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		if (!(s1[i] == s2[i]))
		{
			result = s1[i] - s2[i];
			break;
		}
	}
	return (result);
}
