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

	for (i = 0; needle != 0; i++)
	{
		for (j = 0; haystack[j] != 0; j++)
		{
			if (needle[i] == haystack[j])
			{
				haystack = (haystack + j);
				return (haystack);
			}
		}
	}
	haystack = '\0';
	return (haystack);
}
