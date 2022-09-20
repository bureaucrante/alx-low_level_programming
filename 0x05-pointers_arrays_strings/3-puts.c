#include "main.h"

/**
 * _puts - i don't know, really
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
}
