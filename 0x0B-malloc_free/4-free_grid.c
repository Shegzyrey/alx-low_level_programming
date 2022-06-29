#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2-dimensional array
 * @grid: array
 * @height: height of grid
 *
 * Return: value
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
