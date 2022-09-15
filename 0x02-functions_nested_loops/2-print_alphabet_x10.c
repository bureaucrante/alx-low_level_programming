#include "main.h"

/**
 *
 * print_alphabet - prints the alphabet
 *
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int l;

	for (l = 0; l <= 10; l++)
	{
		char x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
}
