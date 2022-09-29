#include <stdio.h>


void _checker(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	putchar(s[n]);
}
