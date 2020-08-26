#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: -1 If value is not present in array or if array is NULL
 * otherwise return the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int step = 0;
	int i = 0;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	while (array[i] < value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}
	if (i)
	{
		printf("Value found between indexes [%d] and [%d]\n", i - step, i);
		i -= step;
	}
	else
		printf("Value found between indexes [%d] and [%d]\n", i, step);


	while (array[i] <= value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i += 1;
	}
	return (-1);
}
