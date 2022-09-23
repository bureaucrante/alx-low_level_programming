#include "main.h"

/**
 * _strcat - points to(?) a function that concatenates two strings into one.
 * @dest: the destination string
 * @src: the source string
 *
 * Return: The concatenated destination string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, n;

	int len1 = 0, len2 = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}

	while (src[j] != '\0')
	{
		len2++;
		j++;
	}

	for (n = 0; n <= len2; n++)
	{
		dest[len1 + n] = src[n];
	}
	return (dest);
}
