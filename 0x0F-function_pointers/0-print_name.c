#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - takes char pointer parameter and a pointer function
 * @name: address of the string name
 * @f: pointer function f
 * Return: 0 
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
