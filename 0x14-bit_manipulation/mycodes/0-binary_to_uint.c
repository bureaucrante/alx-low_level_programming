#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a string representation of a binary number to decimal.
 * @b: the string to be evaluated.
 * Return: converted number or 0 on failure.
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 1, sum = 0;
	int len = 0, i = 0;

	if (!b)	
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += num;
		num *= 2;
	}
	return (sum);
}


