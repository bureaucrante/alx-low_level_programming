#include "main.h"

/**
 * rev_string - prints the reverse of a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int n, j, k;

	char *y, tmp;

	n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
		{
			break;
		}
		n++;
	}
	y = s;

	for (j = 0; j < (n - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			tmp = *(y + k);
			*(y + k) = *(y + (k - 1));
			*(y + (k - 1)) = tmp;
		}
	}
}
