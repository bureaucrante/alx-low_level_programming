#include "main.h"

/**
 * print_most_numbers - prints numbers within a range, excluding 2 and 4
 *
 * Return: range
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n != 2) && (n != 4))
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
