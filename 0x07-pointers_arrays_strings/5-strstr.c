#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: The string to compare with needle
 * @needle: string of the first occurence to search for
 * Return: The addres of the Substring with the occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i] != needle[j])
			{
				break;
			}
			else if (needle[j] == haystack[i] && needle[j + 1] == haystack[i + 1])
			{
				haystack = &haystack[i];
				return (haystack);
			}
		}
	}
	haystack = '\0';
	return (haystack);
}
