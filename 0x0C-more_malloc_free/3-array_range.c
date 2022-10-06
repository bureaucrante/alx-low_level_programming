#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 */

int *array_range(int min, int max)
{
	int *range, i;

	if (min > max)
		return (0);

	range = malloc(sizeof(int) * (max - min + 1));

	if (range == 0)
		return (0);

	for (i = 0; i <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
