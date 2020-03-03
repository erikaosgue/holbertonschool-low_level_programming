#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: Addres of the string
 * Return: 0 Always
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (2 +  _strlen_recursion(s + 1));

}
