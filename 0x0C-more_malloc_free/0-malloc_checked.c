#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bites to allocate
 * Return: 0 always
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
