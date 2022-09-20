#include "main.h"
#include <string.h>
/**
 * put2 - prints alternate characters in string.
 * @str: the string to be evaluated.
 */

void puts2(char *str)
{
	int n, l;

	l = (strlen(str));


	for (n = 0; n < l; n += 2)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
