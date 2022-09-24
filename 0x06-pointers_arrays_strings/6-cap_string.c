#include "main.h"

/**
 * cap_string - capitalises each word in a string
 * @str: string to be formatted.
 *
 * Return: string.
 */

char *cap_string(char *str)
{
	int i, j;
	int lim = 12;
	int av[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (str[i])
	{
		j = 0;

		while (j <= lim)
		{
			if ((i == 0 || str[i - 1] == av[j]) && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;

			j++;
		}

		i++;
	}

	return (str);
}
