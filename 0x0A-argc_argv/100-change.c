#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - Print the minimun number of coins
 * @argc: Number os arguments in command line
 * @argv: Argument vector
 * Return: 1 if Error, otheriwse a number of coins
 */
int main(int argc, char *argv[])
{
	int num = 0, numberofcoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (argc < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (num > 0)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else if (num >= 1)
				num -= 1;
			numberofcoins++;
		}
		printf("%i\n", numberofcoins);
		return (0);
	}
}
