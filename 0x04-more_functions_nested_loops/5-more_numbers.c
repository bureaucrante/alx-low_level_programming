#include "main.h"

/**
 * more_numbers - prints a range of numbers from 0-14
 *
 * Return: range
 */

void more_numbers(void)
{
	int n;
	int c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}

			_putchar((c % 10) + '0');

		}
		_putchar('\n');
	}
}
