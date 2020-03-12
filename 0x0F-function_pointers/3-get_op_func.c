#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - compares if the char is one of the operator of the function
 * @s: Pointer to an operator
 * Return: the function of the operator indicated
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
	return (NULL);
}
