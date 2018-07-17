#include "holberton.h"
#include <stdlib.h>

/**
  * free_grid - frees the 2D array created in alloc_grid
  * @grid: pointer to int
  * @height: contains an int
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}
