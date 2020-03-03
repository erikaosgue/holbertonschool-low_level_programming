#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Size of the array horizontal
 * @height: size of the array vertical
 * Return: if s1 o s2 is 0, return the string, or the pointer to the new array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr == 0)
		{
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
