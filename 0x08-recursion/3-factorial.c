#include"holberton.h"
/**
 * factorial - Prints the factorial of a number
 * @n: It's the factorial number
 * Return: 0 Always
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
