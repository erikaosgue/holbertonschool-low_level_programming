#include "holberton.h"
/**
 * _powerbase2 - given the power convert a number with base 2 (2^3)= 8
 * @n: the power of the number
 * Return: the number converted
 */
unsigned int _powerbase2(unsigned int n)
{
	unsigned int num = 1, i;

	for (i = 0; i < n - 1; i++)
	{
		num *= 2;
	}
	return (num);
}
/**
 * _strlen - counts the lenght pf the string
 * @str: pointer to the string
 * Return: the lenght of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != 0; i++)
	{
	}
	return (i);

}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the pointer to the string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 0, u_int = 0;


	if (b == NULL)
		return (0);

	power = _strlen(b);
	while (*b != 0)
	{
		if (*b == '1' || *b == '0')
		{
			if (*b == '1')
			{
				u_int += _powerbase2(power);
			}
			b++;
			power--;
		}
		else
			return (0);
	}
	return (u_int);
}
