#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array filled with constant byte
 * @size: the potential size of the array.
 * @c: the character the array is to be initialised with.
 *
 * Return: pointer to created array.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}

	if (s == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
