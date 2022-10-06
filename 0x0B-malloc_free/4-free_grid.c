#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated memory.
 * @grid: pointer to the location of allocated memory.
 * @height: number of rows.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
