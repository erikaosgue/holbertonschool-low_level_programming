#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers..
 * @max: value with the maximun value
 * @min: value with the minimun value
 * Return: the address of the new string ptr
 */
int *array_range(int min, int max)
{
	int *ptr = 0;
	int i, size = 0;

	if (min > max)
		return (0);
	size = max - min;
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == 0)
		return (0);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = min;
		min += 1;
	}
	return (ptr);
}
