#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - print a 2d array
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL if width or height is negative
 * NULL if fail
 * pointer to a 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		array[i][j] = 0;
	return (array);
}
