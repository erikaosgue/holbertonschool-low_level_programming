#include "holberton.h"
/**
 * wildcmp - compares two strings and returns 1 if it is
 * @s1: Address of the first string
 * @s2: Address of the second tring to compare
 * Return: 1 if it could be he same, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*s1 == 0)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
		return (0);
}
