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
	int j = 0;

	if (needle[j] == 0)
		return (haystack);

	for (i = 0; haystack[i] != 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != 0; j++)
			{
				if (needle[j] != haystack[j + i])
					break;
			}
			if (needle[j] == 0)
			{
				return (haystack + i);
			}
		}
	}
	return (haystack  = '\0');
}
