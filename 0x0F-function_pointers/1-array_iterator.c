#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - takes char pointer parameter and a pointer function
 * @array: address of the array of integers
 * @size: is the size of the array
 * @action: is the address of the function it is poiting to
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
