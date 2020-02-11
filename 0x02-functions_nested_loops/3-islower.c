#include "holberton.h"
/**
 * _islower - return 1 or zero for the alphabet
 * @c: parameter for checking caracheter
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
		return (1);

	else
		return (0);
}
