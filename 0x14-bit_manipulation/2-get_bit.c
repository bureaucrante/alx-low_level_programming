#include "main.h"

/**
 * get_bit - obtains the value of a bit at given index.
 * @n: -
 * @index: -
 *
 * Return: -
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
