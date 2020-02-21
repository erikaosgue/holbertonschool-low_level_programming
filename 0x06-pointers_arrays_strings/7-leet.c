#include "holberton.h"
/**
 * leet - Encodes a string into 1337
 * @s: Address of the string
 * Return: The addres of the string with modifications
 */
char *leet(char *s)
{
	int i;
	int j;
	char s2[10] = {'4', '4', '3', '3', '1', '1', '0', '0', '7', '7'};
	char s3[10] = {'a', 'A', 'e', 'E', 'l', 'L', 'o', 'O', 't', 'T'};

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; s2[j] != 0; j++)
		{
			if (s[i] == s3[j])
			{
				s[i] = s2[j];
			}
		}
	}
	return (s);
}

