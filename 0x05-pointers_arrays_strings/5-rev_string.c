#include "holberton.h"
/**
 * rev_string - Swap the string
 * @s: Address of the string
 * Return: 0 Always
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k = 0;
	char aux;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	for (j = i - 1; j > k; j--)
	{
		aux = s[k];
		s[k] = s[j];
		s[j] = aux;
		k++;

	}
}
