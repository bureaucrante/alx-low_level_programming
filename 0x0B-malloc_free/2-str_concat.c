#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in a newly allocated memory block,
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to location of memory containing new string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size, n, m;
	char *cat;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	size = (i + j + 1);

	cat = malloc(size * sizeof(char));

	if (cat == 0)
		return (0);

	for (n = 0; n < i; n++)
	{
		cat[n] = s1[n];
	}

	for (m = 0; m <= j; m++)
	{
		cat[i + m] = s2[m];
	}

	return (cat);
}
