#include "main.h"

/**
 * print_diagonal - prints a diagonal line with spaces
 * @n: the length of the diagonal line
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		while ((x > 0) && (x <= n))
		{
			_putchar(32);
			_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
