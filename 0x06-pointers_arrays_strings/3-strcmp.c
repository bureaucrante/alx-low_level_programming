#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the integer value of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int l = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			l = (s1[i] - s2[i]);
			break;
		}
	}
	return (l);
}
