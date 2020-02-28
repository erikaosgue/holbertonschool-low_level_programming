#include "holberton.h"
/**
 * last_char - checks if a word is palindrime
 * @s: addres of the string
 * Return: 1 if it is palindrome, 0 otherwise
 */

char *last_char(char *s)
{
	if (*(s + 1) == 0)
		return (s);
	else
		return (last_char(s + 1));
}
/**
 * is_palindrome - checks if a word is palindrome
 * @s: address of the string
 * Return: 1 if it is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char *t = last_char(s);

	return (palindrome(s, t));
}
/**
 * palindrome - checks if a word is palindrome.
 * @s: address of the string
 * @t: Addres of the string in last position
 * Return: 1 if it is palindrome, 0 otherwise
 */

int palindrome(char *s, char *t)
{
	if (*s == *t)
	{
		if (s == t || *(s + 1) == *(t - 1))
			return (1);
		else
			return (palindrome(s + 1, t - 1));
	}
	else
		return (0);
}
