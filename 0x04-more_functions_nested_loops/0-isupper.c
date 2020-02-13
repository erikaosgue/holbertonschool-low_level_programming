#include "holberton.h"
/**
 * _isupper - checks uppercase character
 * @c: is a character
 * Return: 1 if it is a uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
