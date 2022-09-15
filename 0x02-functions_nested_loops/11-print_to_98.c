#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to be evaluated
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n);
	
			if (n != 98)
			{
				_putchar(',');
			}
			n++;
		}
	}

	else if (n >= 98)
	{
		while (n >= 98)
		{
			_putchar(n);

			if (n != 98)
			{
				_putchar(',');
			}
			n--;
		}
	}

	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
