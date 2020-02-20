#include "holberton.h"
/**
 * reverse_array - Reverse a string of integers
 * @a: string of integers
 * @n: size of the array
 * Return: 0 always
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int k = 0;
	int aux = 0;

	for (i = n - 1; i > k; i--)
	{
		aux = a[i];
		a[i] = a[k];
		a[k] = aux;
		k++;

	}

}
