#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to be evaluated
 * @index: is the index of the number to get the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
