#include "holberton.h"
/**
 * _abs - check if the number is greater than 0
 * @n: the number to be checked
 * Return: Positive for all negative and postive ones
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}

}
