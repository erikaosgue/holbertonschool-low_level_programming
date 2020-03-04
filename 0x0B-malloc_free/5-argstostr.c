#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: Address of the two dimensional array
 * @height: size of the array vertical
 * Return: 0
 */

/* if(s[i] == NULL? '\n': s[i]);*/
char *argstostr(int ac, char **av)
{
	int i, k, j;
	char **ptr;
	
	ptr = malloc(sizeof(char *) * ac);
	if (ptr == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != 0)
		{
			j++;
		}
		ptr[i] = malloc(sizeof(char) * (j + 1));
		if (ptr[i] == 0)
			return (0);
		k = 0;
		while (av[i][k] != 0)
		{
			ptr[i][k] = av[i][k];
			k++;
		}
		ptr[i][k + 1] = '\n';
		return (ptr);
	}
	return (0);
}
