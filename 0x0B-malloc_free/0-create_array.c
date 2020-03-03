#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * @size: the size of the memory to the array
 * @c: character to fill the array
 * Return: NULL if size is 0, or the pointer to the array, or NULL is it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0)
		return (0);
	else if (str == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
	}
}
