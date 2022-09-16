#include "main.h"

/**
 * print_line - prints a series of underscores(_), in order to form a line.
 * @n: the number of times the loop will run.
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		while ((i > 0) && (i <= n))
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
