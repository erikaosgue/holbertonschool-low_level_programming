#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the largest primenumber
 *
 * Return: 0 Always
 */
int main(void)
{
	long num = 612852475143;
	int div;
	long temp;

	temp = num;
	div = 2;
	while (temp != 1)
	{
		if (temp % div == 0)
		{
			temp = temp / div;
		}
		else
			div++;
	}
	printf("%d\n", div);
	return (0);
}
