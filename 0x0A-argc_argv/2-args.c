#include <stdio.h>
#include "holberton.h"
/**
 * main - Print all the arguments it receives
 * @argc: Number os arguments in command line
 * @argv: Argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
