#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lowest integer.
 * @max: highest integer.
 *
 * Return: address to location of created array.
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
