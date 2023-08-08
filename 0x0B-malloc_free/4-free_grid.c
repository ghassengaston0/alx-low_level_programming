#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 *@grid: Pointer to the 2-dimensional grid.
 *@height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++) {
		free(grid[i]);
	}

	free(grid);
}
