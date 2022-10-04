#include "main.h"

/**
 * _memcpy - copies a memory area,
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of bytes to be compies.
 *
 * Return: destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
