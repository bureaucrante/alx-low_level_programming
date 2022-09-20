#include "main.h"

/**
 */

void puts2(char *str)
{
	int n, i, j;

	for (n = 0; n >= 0; n++) 
	{
		if (str[n] != '\0')
		{
			j++;
		}
		for (i = 1; i <= j; i += 2)
		{
			_putchar(str[i]);
		}
	}
	
	_putchar('\n');
}
