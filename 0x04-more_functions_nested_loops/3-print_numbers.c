#include "main.h"

/**
 * print_numbers - prints a certain range of numbers
 *
 * Return: Always 0 (success).
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		while (n <= 9)
		{
			_putchar(n + '0');
		}
	}
	
	_putchar('\n');
}
