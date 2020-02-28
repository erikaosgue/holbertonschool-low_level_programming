#include "holberton.h"
/**
 * is_prime_number - Find the prime number returning 1
 * @n: Number given
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
/**
 * prime_number - Find the prime number returning 1
 * @n: Number given
 * @i: integer that works as an increment
 * Return: 1 if the number is prime, 0 otherwise
 */

int prime_number(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (prime_number(n, i + 1));
	return (1);
}
