#include "holberton.h"
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	return (prime_number(n, 2));
}

int prime_number(int num, int i)
{
	if (num < i)
		return (0);
	else if (num == i)
		return (1);
	else if (num / i && num != i)
		return (0);
	else if (num / i != 0 && num > i)
		return (prime_number(num, i + 1));
}
