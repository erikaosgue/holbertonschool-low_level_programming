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
void print_all(const char * const format, ...)
{
	struc_format[] = {
		{"c", func_char}
		{"i", func_int}
		{"f", func_float}
		{"s", func_pointer}
		{"NULL", NULL}};
	va_list list;
	va_start(list, 
	while (separator[i])
	{
		while (struc_format[i])
		{
			if (separator[i] == struc_format[i].format)
			{
				struc_format[i].funcion;
			}
		}
	}
}
void func_char(va_list list);
{
	printf("%c", (char)va_arg(list, int));
}


