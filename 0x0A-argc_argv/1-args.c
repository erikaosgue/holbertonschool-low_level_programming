#include <stdio.h>
#include "holberton.h"
/**
 * main - Print the number of argument's passed into it
 * @argc: Number os arguments in command line
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
