#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size = 0;
	char *ptr;
	

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != 0; i++)
	{
		size++;
	}
	ptr = malloc(sizeof(char) * (size + n + 1));
	if (ptr == 0)
		return (0);
	for (j = 0; s1[j] != 0; j++)
	{
		ptr[j] = s1[j];
	}
	for (i = 0; i < n && s2[i] != 0; j++, i++)
	{
		ptr[j] = s2[i];
	}
	ptr[j] = 0;
	return (ptr);
}
