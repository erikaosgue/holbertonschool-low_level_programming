#include "holberton.h"
/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: Base of the exponential number
 * @y: It is the power of the number
 * Return: Integer, result of the x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));


}
