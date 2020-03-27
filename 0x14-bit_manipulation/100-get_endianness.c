#include "holberton.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if is big endian, 1 if is little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)
		return (1);
	else
		return (0);
}
