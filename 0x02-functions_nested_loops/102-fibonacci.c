#include "holberton.h"
#include <stdio.h>
/**
 * main - Print the 50 first numers of fibonacci
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	long num1 = 0;
	long num2 = 1;
	long num3 = 0;

	for (i = 1; i <= 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (i != 50)
			printf("%ld, ", num3);
		else
			printf("%ld\n", num3);
	}
	return (0);

}
