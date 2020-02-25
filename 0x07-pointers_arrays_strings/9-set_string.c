#include "holberton.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: It is the string imput to modified
 * @to: It is the string imput to copie to s
 * Return: 0 Always
 */
void set_string(char **s, char *to)
{
	*s = to;
}
