#include "main.h"

/**
 * leet - performs and an alpha-numeric switch on a string
 * @str: the string to be altered
 *
 * Return: altered string.
 */

char *leet(char *str)
{
	int i, j = 0;

	char big[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			while (str[i] == big[j])
				str[i] = num[j];
		}
		/*if (str[i] == big[j])
		//{	
		//	while (j < 10)
		//	{
				str[i] = num[j];
				if (str[i] == big[i])
			//	j++;
			//}
	
		}*/
	}
	return (str);
}
