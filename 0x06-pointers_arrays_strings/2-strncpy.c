#include "main.h"

/**
 * _strncpy - copies the elements of one string to another.
 * @dest: the destination
 * @src: the source
 * @n: the number of elements to copied.
 *
 * Return: new destination string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}

	}
	
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
