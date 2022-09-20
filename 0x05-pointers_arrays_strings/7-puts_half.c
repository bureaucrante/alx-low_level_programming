#include "main.h"
#include <string.h>

/**
 */

void puts_half(char *str)
{
	int n, l, y;

	l = (strlen(str));

	y = l/2;

	for (n = y; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
