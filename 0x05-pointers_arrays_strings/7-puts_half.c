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
		if (y == 0)
		{
			_putchar(str[n]);
		}
		else 
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
