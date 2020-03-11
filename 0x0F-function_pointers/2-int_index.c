#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: address of an array of integers
 * @size: is the size of the array
 * @cmp: is the address of the function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0)
		return (-1);
	if (cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
