#include "holberton.h"
/**
 * swap_int - swaps the values of two integers 
 * @a: First number
 * @b: Second number
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
