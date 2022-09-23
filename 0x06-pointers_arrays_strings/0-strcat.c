#include "main.h"

/**
 */

char *_strcat(char *dest, char *src)
{
	int i, j, n;
	
	int len1 = 0, len2 = 0;

	i = 0; j = 0;

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
