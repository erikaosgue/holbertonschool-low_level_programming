#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: The string to compare with needle
 * @needle: string of the first occurence to search for
 * Return: The addres of the Substring with the occurrence
 */
char *_strstr(char *haystack, char *needle)
{
	for (char *c = haystack; *c; c++)
	{
		char *q = needle;

		for (char *p = c; *p != 0 && *p == *q; p++, q++)
		{
		}
		if (*q == 0)
		{
			return (c);
		}
	}
	return ('\0');
}
