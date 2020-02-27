#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Integer to get the Natural square of
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - Verifies if the number has a natural square root
 * @n: integer to get the Natural number
 * @i: Initial number to start looking the root number
 * Return: An integer
 */

int square_root(int n, int i)
{
	int x;

	x = i * i;
	if (x < n)
		return (square_root(n, i + 1));
	else if (x == n)
		return (i);
	else
		return (-1);
}
