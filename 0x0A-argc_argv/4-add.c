#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - Adds positives numbers
 * @argc: Number os arguments in command line
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}
