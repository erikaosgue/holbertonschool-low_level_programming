#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print Numbers with comma and space
 * @a: Is the address of the string
 * @n: is the size of the array
 * Return: 0 Always
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else
			break;
	}
}
