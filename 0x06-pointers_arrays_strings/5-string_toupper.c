#include "main.h"

/**
 * string_toupper - converts characters in a string from lowecase to uppercase.
 * @str: pointer to the string to be converted.
 *
 * Return: formated string.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
