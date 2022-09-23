#include "main.h"

/**
 * _strncat - concatenates parts of one string to another
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to be appended.
 *
 * Return: concatenated destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, y = 0, z = 0;

	int len1 = 0;

	int len2 = 0;

	while (dest[y] != '\0')
	{
		len1++;
		y++;
	}

	while (src[z] != '\0')
	{
		len2++;
		z++;
	}

	for (i = 0; i < n; i++)
	{
		dest[len1 + i] = src[i];

		if (src[i] == len2)
		{
			break;
		}
	}
	return (dest);
}
