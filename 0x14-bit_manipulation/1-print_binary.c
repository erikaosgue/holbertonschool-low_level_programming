#include "holberton.h"
/**
 * print_binary - prints the binary representation of a numbe
 * @n: number to convert to binary
 * Return: 0 always
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
