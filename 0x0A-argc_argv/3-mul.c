#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - Multiplies two numbers
 * @argc: Number os arguments in command line
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int mult, i;

	mult = 1;
	i = 0;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		mult = atoi(argv[i + 1]) * atoi(argv[i + 2]);
	printf("%i\n", mult);

	return (0);
}
