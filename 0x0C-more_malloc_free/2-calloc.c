#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _calloc - concatenates two strings.
 * @nmemb: number of elemnts of the new array
 * @size: bytes of the type it will recieves
 * Return: the address of the new string ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
