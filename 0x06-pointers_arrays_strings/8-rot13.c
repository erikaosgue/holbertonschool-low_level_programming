#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - Encodes and decodes in rot13
 * @s: Addres of the string
 * Return: the address of the string modified
 *
 */
char *rot13(char *s)
{
	int i;
	int j;
	char s2[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s3[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == s2[j])
			{
				s[i] = s3[j];
				break;
			}
		}
	}
	return (s);
}
