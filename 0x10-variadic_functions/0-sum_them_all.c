#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - sum al the passed arguments of the function
 * @n: is the number of arguments passed
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	int sum = 0;

	va_start(list, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
