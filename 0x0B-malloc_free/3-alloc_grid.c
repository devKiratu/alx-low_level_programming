#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory to 2d array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2d array or NULL if the operation fails
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i = 0, j;

	if (width <= 0 || height <= 0)
		return (0);

	matrix = malloc(height * sizeof(int));

	if (matrix == NULL)
		return (0);

	while (i < height)
	{
		matrix[i] = malloc(width * sizeof(int));

		if (matrix[i] == NULL)
		{
			int k = 0;

			while (k < i)
			{
				free(matrix[k]);
				k++;
			}
			free(matrix);
			return (0);
		}
		else
		{
			j = 0;

			while (j < width)
			{
				matrix[i][j] = 0;
				j++;
			}
		}
		i++;
	}

	return (matrix);
}
