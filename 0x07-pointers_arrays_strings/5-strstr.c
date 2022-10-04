#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring.
 * @haystack: the string to be evaluated.
 * @needle: the substring.
 * Return: the substring or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int m, n, i = 0, j, flag = 1;

	m = strlen(haystack);
	n = strlen(needle);

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (haystack[i] == needle[j])
			{
				flag++;

				if ((haystack + i) == needle)
				{
					return (haystack + i);
				}
			}
		}
		if (needle[flag] == '\0')
		{
			return (haystack + (i));
		}
	}
	return ('\0');
}
