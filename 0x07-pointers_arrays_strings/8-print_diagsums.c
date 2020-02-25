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
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i) + i);
		sum2 += *(a + (size * i) + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
