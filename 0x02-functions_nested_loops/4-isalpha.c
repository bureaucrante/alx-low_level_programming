#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: is the character to be case-checked
 *
 * Return: 1 if the character is an alphabet (case-insensite)
 * Return: 0 if the character is not an alphabet
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);

}
