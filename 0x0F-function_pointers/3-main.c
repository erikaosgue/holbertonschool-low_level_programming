#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - prints the integer of the operation
 * @argc: counter of arguments
 * @argv: argument vector of the imput
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != 0)
	{
		printf("Error\n");
		return (0);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
