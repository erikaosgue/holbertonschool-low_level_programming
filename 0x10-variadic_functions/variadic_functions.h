#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	int (*funcion)(va_list list);
} srtuct_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);


#endif
