#include "holberton.h"
#include <stdio.h>
/**
 * main - print the number to 100
 *
 * Return: 0 always
 */
int main(void)
{
	int a;
	int b;
	int i;

	for (i = 1; i <= 100; i++)
	{
		a = i % 3;
		b = i % 5;
		if (a == b)
		{
			printf("FizzBuzz");
		}
		else if (a == 0)
		{
			printf("Fizz");
		}
		else if (b == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
