#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print each number fallow by the string given
 * @separator: addres of the string given
 * @n: is the number of arguments passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	if (separator != 0)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(list);
}
