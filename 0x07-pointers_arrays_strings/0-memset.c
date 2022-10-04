#include "main.h"

/**
 * _memset - fills memory with a cnstant value
 * @s: area of memory
 * @b: value to be assigned.
 * @n: number of bytes to be used.
 *
 * Return: pointer to location of the array.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}
