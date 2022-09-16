#include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: the character to be checked.
 *
 * Return: 1 if c is uppercase; 0 otherwise.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		printf("%c is uppercase!\n", c);

		return (1);
	}
	else
	{
		printf("%c is not uppercase!\n", c);

		return (0);
	}
}
