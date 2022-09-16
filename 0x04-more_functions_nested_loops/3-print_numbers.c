#include "main.h"

/**
 * print_numbers - prints a certain range of numbers
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		while (n <= 9)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
