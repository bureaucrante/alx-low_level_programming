#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 *
 * Return: 1 for lowercase characters, 0 for not lowercase characters.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);

}
