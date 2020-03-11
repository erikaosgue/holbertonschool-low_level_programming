#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - return the sum bettween a and b
 * @a: it's an integer
 * @b: it's an integer
 * Return: the an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference bettween a and b
 * @a: it's an integer
 * @b: it's an integer
 * Return: an integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the multiplication bettween a and b
 * @a: it's an integer
 * @b: it's an integer
 * Return: an integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - return the division bettween a and b
 * @a: it's an integer
 * @b: it's an integer diferent from 0
 * Return: an integer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod -return the module of a % b
 * @a: it's an int
 * @b: it's an int different from 0
 * Return: an integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
