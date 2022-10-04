#include "main.h"

/**
 * _strspn - gets the length of a prefix substring,
 * @s: the source string,
 * @accept: the array of of bytes in the prefix sub.
 * Return: length of string.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, lenx = 0;

	int flag;


	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 0;
			}
		}

		if (flag == 1)
		{
			break;
		}
		lenx++;
	}
	return (lenx);
}
