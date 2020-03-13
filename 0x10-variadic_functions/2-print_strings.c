#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_strings - Print each string follow by a separator
 * @separator: addres of the string given
 * @n: is the number of arguments passed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;
	char *ptr;

	va_start(list, n);

	if (separator != 0)
	{
		for (i = 0; i < n; i++)
		{
			ptr = va_arg(list, char *);
			if (ptr != 0)
				printf("%s", ptr);
			else
				printf("nil");
			if (i < n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(list);
}
