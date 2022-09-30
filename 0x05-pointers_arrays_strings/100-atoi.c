#include "main.h"

/**
 * _atoi - turn a string to an integer value
 * @s: the string to be converterd
 *
 * Return: atoi (int value of string) or 0 (string has no int).
 */

int _atoi(char *s)
{
	int n = 0, term = 0;
	unsigned int atoi = 0;
	int sign = 1;

	for (; s[n]; n++)
	{
		if (term > 0 && (s[n] < '0' || s[n] > '9'))
		{
			break;
		}

		if (s[n] == '-')
		{
			sign *= -1;
		}

		if (s[n] >= '0' && s[n] <= '9')
		{
			atoi = atoi * 10 + s[n] - '0';
			term++;
		}
	}

	atoi = atoi * sign;

	return (atoi);
}
