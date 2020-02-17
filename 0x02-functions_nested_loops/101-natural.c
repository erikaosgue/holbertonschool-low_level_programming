#include "holberton.h"
#include <stdio.h>
/**
 * main - Sum multiples of 3 and 5 of the number 1024
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int a = 1024;
	int c;
	int d;
	int sum = 0;

	for (i = 0; i < a; i++)
	{
		c = i * 3;
		d = i * 5;
		if (d < a)
		{
			sum = sum + d;
		}
		if (c < a && c % 10 != 5 && c % 10 != 0)
		{
			sum = sum + c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
