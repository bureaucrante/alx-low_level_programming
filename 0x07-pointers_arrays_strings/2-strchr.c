#include "main.h"

/**
 * _strchr - finds a specific character in a string,
 * @s: the string to be evaluated.
 * @c: the character to be found.
 * Return: string or null.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
