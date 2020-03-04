#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - concatenates all the arguments of the program
 * @str: The amount of arguments reciving
 * Return: The address of the the New pointer with all the arguments on it
 */
int main(void)
{
	char str[] = "hol a   mundo  marlon ";
	int i, j = 0, contador = 0, lenght = 0;

	while (str[i] != 0)
	{
		if (str[i] != ' ' && str[i + 1] == ' ' || str[i] != ' ' && str[i + 1] == 0)
		{
			contador++;
		}
		i++;
	}
	i = 0;
	/*
	   c = 0; c2 =0
	for (i = 0; c < contador; i++)
	{
		if (str[i] != 0 ' ' && str[i] != 0)
			c2++;
		else if (c2 > 0 && str[i] == ' ' || str[i] == 0)
		{
			ptr[c] = malloc (c2 + 1)
			for (j = 0; j < c2 j++)
				ptr[c][j] = str[i - c2 +j]
					c++;
		}
	*/
	for (j = i; str[j] != 0; j++) 
	{
		if (str[j] != ' ')
		{
			for (i = j; str[i] != ' ' || str[i] != '\0'; i++)
			{
				lenght++;
			}
		}
	}
	printf("palabras = %i\n", contador);
	printf("lenght = %i\n", lenght);
	return (0);
}

