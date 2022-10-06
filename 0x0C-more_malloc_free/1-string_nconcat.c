#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - concatenates n bytes of s2 to s1 in new mem block.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to be copied from s2.
 *
 * Return: pointer to location of new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, h, j, k, tlen;
	char *dest;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (h = 0; s1[h]; h++)
		;
	for (i = 0; s2[i]; i++)
		;

	if (n > i)
		n = i;

	tlen = (h + i + 1);

	dest = malloc(tlen * sizeof(char));

	if (dest == 0)
		return (0);

	for (j = 0; j < h; j++)
		dest[j] = s1[j];

	for (k = 0; k < i; k++)
	{
		dest[k + h] = s2[k];
	}
	dest[h + i] = '\0';

	return (dest);
}
