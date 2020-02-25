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
	int count = 0;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (j = 0; needle[j] != 0; j++)
		{
			if (haystack[i] == needle[j])
				count++;
		}
	}
	if (count)
	{
		return (haystack + count - 1);

	}
	return ('\0');
}
