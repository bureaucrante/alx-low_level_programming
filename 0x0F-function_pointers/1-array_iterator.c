#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a param function for each element of an array.
 * @array: the array.
 * @size: size of the array.
 * @action: pointer to intended function.
 * @int: ...
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
