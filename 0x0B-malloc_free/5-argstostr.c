#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: The amount of arguments reciving
 * @av: The addres of the first argument
 * Return: The address of the the New pointer with all the arguments on it
 */

char *argstostr(int ac, char **av)
{
	int i, k, j, cont = 0;
	char *ptr;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			cont += 1;
		}
		cont++;
	}
	/* Aumente + 1 contador para el Null al final */
	cont++;
	ptr = malloc(sizeof(char) * (cont));
	if (ptr == 0)
		return (0);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != 0; k++)
		{
			ptr[j] = av[i][k];
			j += 1;
		}
		ptr[j] = '\n';
		j += 1;
	}
	ptr[j] = 0;
	return (ptr);
}
