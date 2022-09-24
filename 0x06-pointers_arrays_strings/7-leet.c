#include "main.h"

/**
 * leet - performs and an alpha-numeric switch on a string
 * @str: the string to be altered
 *
 * Return: altered string.
 */

char *leet(char *str)
{
	int i, j, lim = 5;

	char big[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < lim; j++)
		{
			if (str[i] == big[j] || str[i] - 32 == big[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}

	return (str);
}
