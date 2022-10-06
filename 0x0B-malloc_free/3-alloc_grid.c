#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - pointer to a memory block containing a 2D array.
 * @width: number of columns.
 * @height: number of rows.
 *
 * Return: pointer to address of allocated memory.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(height * sizeof(int *));

	if (p == 0)
	{
		free(p);
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == 0)
		{
			for (j = i; j >= 0; j--)
			{
				free(p[i]);
			}

			free(p);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}

	return (p);
}
