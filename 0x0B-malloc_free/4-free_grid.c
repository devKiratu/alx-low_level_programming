#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a previously allocated grid
 *
 * @height: height of grid
 * @grid: grid to free
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
