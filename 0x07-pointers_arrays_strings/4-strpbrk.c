#include "main.h"

/**
 * _strpbrk - finds the first instance of a character/byte from a set.
 * @s: the string to be searched.
 * @accept: pointer to array containing set of bytes/characters.
 *
 * Return: String at first instance or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
		}
	}
	if (s[i] == accept[n])
	{
		return (s + i);
	}

	return ('\0');
}
