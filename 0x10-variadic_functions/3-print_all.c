#include "variadic_functions.h"
/**
 * print_all - Print anything, an int, float, char or string
 * @format: addres of the string that compares the format
 * Return: Nothing
 */
void func_char(va_list list)
{
 	 printf("%c", (char)va_arg(list, int));
}
void func_int(va_list list)
{
	printf("%d", va_arg(list, int));
} 
void func_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
void func_string(va_list list)
{
	char *string = va_arg(list, char *);
	if (string == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}


void print_all(const char * const format, ...)
{
	va_list list;
	int i  = 0, j = 0;
	char *ptr = ""; 
	op_t format_struct[] = {
		
		{"c", func_char},
		{"i", func_int},
		{"f", func_float},
		{"s", func_string},
		{NULL, NULL}};

	va_start(list, format);

	while (format[i] != 0 )
	{
		j = 0;
		while (format_struct[j].op != NULL) 
		{
			if (*format_struct[j].op == format[i])
			{
				printf("%s", ptr);
				format_struct[j].f(list);
			}
			ptr = ", ";
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
