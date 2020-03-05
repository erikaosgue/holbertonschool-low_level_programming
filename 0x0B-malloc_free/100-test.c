#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - concatenates all the arguments of the program
 * @str: The amount of arguments reciving
 * Return: The address of the the New pointer with all the arguments on it
 */
char **strtow(char *str)
{
	int i = 0, v = 0, j = 0, k = 0, m = 0, vertical = 0, horizontal = 0;
	
	char ** ptr
		
	vertical = count_words(str);
	ptr = malloc(sizeof(char *) * vertical);
	if (ptr == 0)
		return (0);
	ptr = lenght_of_string(vertical, str);

	for (i = j; str[i] != 0; i++)
	{
		if (str[i] != ' ')
		{
			for (k = 0; k < vertical; k++)
			{
				m = 0;
				for (j = i; str[j] != ' '; j++)
				{
					ptr[k][m] = str[j];
					m++;
				}
				ptr[k][m] = 0;
			}
		}
	}
	return (ptr);
}
char **lenght_of_string(int vertical, char *str);
{
	int i = 0, k = 0, j = 0;
	char **ptr;

	for (v = 0; v < vertical; v++)
	{
		for (k = i; str[k] != 0; k++)
		{	
			if (str[k] != ' ')
			{
				horizontal = 0;
				for (i = k; str[i] != ' '; i++)
				{
					horizontal++;
				}
				ptr[v] = malloc(sizeof(char) * (horizontal + 1));
				if (ptr[v] == 0)
				{
					for (j = 0; j < v; v++)
					{
						free(ptr[j]);
					}
					free(ptr);
					return (0);
				}
			}
		}
	}
	return (ptr);
}
int count_words(char *str)
{
	for (i = j; str[i] != 0; i++)
	{
		if (str[i] != ' ')
		}
			vertical += 1;
			for (j = i; str[j] != ' ' || str[j] != 0; j++)
			{
			}
		}
	}
	return (vertical);
}
