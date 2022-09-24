#include "main.h"

/**
 * leet - performs and an alpha-numeric switch on a string
 * @str: the string to be altered
 *
 * Return: altered string.
 */

char *leet(char *s)
{
	int count = 0, i;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
	
/*{
	int i, j, lim = 5;

	char sml[] = {'a', 'e', 'o', 't', 'l'};
	char big[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	i = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j < lim; j++)
		{
			if (str[i] == sml[j] || str[i] == big[j])
			{
				str[i] = num[j];
			}
		}
		i++;
	}

	return (str);
}*/
