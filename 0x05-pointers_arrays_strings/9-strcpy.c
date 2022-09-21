#include "main.h"

/**
 * _strcpy - copies a string.
 * @src: source string.
 * @dest: destination string.
 *
 * Return: destination string.
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n++] = '\0';

	return (dest);
}
