#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates 2D array of ints and sets it at 0
 * @width: width of the grid
 * @height: height of the grid
 * Return: ptr to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **dims;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dims = malloc(sizeof(int *) * height);

	if (dims == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		dims[i] = malloc(sizeof(int));

		if (dims[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(dims[j]);
			free(dims);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			dims[i][j] = 0;
	}
	return (dims);
}
