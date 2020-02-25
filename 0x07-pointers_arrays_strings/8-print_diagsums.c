#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: integer
 * @size: Size of the matrix
 * Return: 0 Always
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size * size;)
	{
		sum1 += a[i];
		i = (size + 1) + i;
	}
	for (j = (size - 1); j < (size * size) - 1;)
	{
		sum2 += a[j];
		j = (size - 1) + j;
	}
	printf("%d, %d\n", sum1, sum2);
}
