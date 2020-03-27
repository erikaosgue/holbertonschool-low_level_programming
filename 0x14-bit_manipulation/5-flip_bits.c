#include "holberton.h"
/**
 * flip_bits - Returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number one to be flip
 * @m: number two to be be flip
 * Return: the number of bits being flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int i, num_bits, count = 0;

	x = m ^ n;
	num_bits = sizeof(unsigned long int) * 8;
	for (i = 0; i < num_bits; i++)
	{
		if (((x >> i) & 1))
			count++;
	}
	return (count);
}
