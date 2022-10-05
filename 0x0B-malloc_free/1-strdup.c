#include "main.h"
#include <stdlib.h>

/**
 * str_size - obtains the length of the string.
 * @str: the string to evaluated.
 * Return: length of string or NULL if string is empty.
 */

int str_size(char *str)
{
	unsigned int i, l;

	for (i = 0; str[i]; i++)
	{
		l++;
	}

	if (str == 0)
	{
		return (0);
	}

	return (l);
}

/**
 * _strdup - copies a string to new memory.
 * @str: string to be copied.
 * Return: pointer to location of duplicated string.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, l;

	l = str_size(str);

	if (l == 0)
	{
		return (0);
	}

	dup = malloc(l * sizeof(char));

	if (dup == 0)
	{
		return (0);
	}

	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
