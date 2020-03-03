#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: Address of the string
 * @s2: Addres of the second string
 * Return: if s1 o s2 is 0, return the string, or the pointer to the new array
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0, k = 0, size = 0;
	char *ptr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != 0; i++)
	{
		size += 1;
	}
	for (i = 0; s2[i] != 0; i++)
	{
		size += 1;
	}
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == 0)
		return (0);
	for (i = 0; s1[i] != 0; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = i; j < size; j++)
	{
		ptr[j] = s2[k];
		k++;
	}
	ptr[j] = 0;
	return (ptr);
}
