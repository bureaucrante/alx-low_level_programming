#include "main.h"

/**
 * _strlen - checks the length of a string
 * @str: the string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * char_check - compares each character within a string.
 * @x: smallest index
 * @y: largest index
 * @s: the string to be checked
 *
 * Return: either option.
 */
int char_check(int x, int y, char *s)
{
	if (x >= y)
		return (1);
	else if (s[x] != s[y])
		return (0);
	else
		return (char_check(x + 1, y - 1, s));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome, and 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen(s) - 1;
	return (char_check(0, l, s));
}
