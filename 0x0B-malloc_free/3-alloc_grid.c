#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **gridx;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	gridx = malloc(height * sizeof(int *));
	if (gridx == NULL)
	{
		free(gridx);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridx[i] = malloc(width * sizeof(int));
		if (gridx[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridx[i]);
			free(gridx);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
		gridx[i][j] = 0;
	return (gridx);
}
