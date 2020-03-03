#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Return a finction to a newly allocated space,
 * @str: Addres of the string
 * Return: NULL if s is or str is 0, or the pointer to the new array
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *s;
	unsigned int size = 0;

	if (str == 0)
		return (0);
	for (i = 0; str[i] != 0; i++)
	{
		size += 1;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = 0;
	return (s);
}
