#include "holberton.h"
/**
 * cap_string - Capitalizes all first letter of words of a string
 * @s: Address of the string
 * Return: Addres of the string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char st[12] = {' ', ',', ';', '.', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; st[j] != '\0'; j++)
		{
			if (s[i] == st[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
				else
					continue;
			}
		}

	}
	return (s);
}
