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
	int i;
	int sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			while (*ptr != 0)
			{
				if (!isdigit(*ptr))
				{
					printf("Error\n");
					return (1);
				}
				ptr++;
			}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
