#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all the natural numbers
 * @n: is the bumber to be printed
 * Return: the natural numbers
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
		printf("\n");
	}
}
