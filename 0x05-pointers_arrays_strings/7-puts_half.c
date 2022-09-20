#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string of characters.
 * @str: the string to be evaluated.
 */

void puts_half(char *str)
{
	int n, l, y;

	l = (strlen(str));

	y = l / 2;

	for (n = y; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
