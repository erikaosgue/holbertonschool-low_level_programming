#define VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct format
{
	char *format;
	void (*funcion)(va_list list));
} srtuct_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void func_char(va_list);
void func_int(va_list);
void func_float(va_list);
void func_pointer(va_list);
#endif
