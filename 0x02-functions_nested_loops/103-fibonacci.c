#include "holberton.h"
#include <stdio.h>
/**
 * main -prints the fibonacci even numbers until 4000000
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int num1 = 0;
	int num2 = 1;
	int num3 = 0;
	int sum = 0;
	int sum1 = 0;
	int a = 4000000;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (num2 % 2 == 0)
		{
			sum1 = sum + num2;
			if (sum1 <= a)
			{
				sum = sum1;
			}
			else
				break;
		}
	}
	printf("%d\n", sum);
	return (0);
}
