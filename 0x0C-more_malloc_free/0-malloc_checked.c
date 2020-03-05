#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *
 *
 *
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
