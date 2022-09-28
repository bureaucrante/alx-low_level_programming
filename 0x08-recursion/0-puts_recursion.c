#include "main.h"

/**
 */

void _puts_recursion(char *s)
{
	int n;

	for (n = 0; s[n]; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
