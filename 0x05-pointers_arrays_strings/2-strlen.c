#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: the string to be evaluated
 *
 * Return: the value of the length
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0';)
	{
		++l;
	}
	return (l);

}
