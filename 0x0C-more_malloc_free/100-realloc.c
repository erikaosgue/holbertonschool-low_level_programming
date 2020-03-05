#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: the address of the new string ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr !=  NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(sizeof(char) * new_size);
	if (ptr2 == NULL)
	{
		return (0);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		ptr2[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (ptr2);
}
