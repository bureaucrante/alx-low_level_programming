#include "main.h"
/*times_table*/

void times_table(void)
{
	int n, c, multi;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (c=0; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');

			multi = (n * c);

			if (multi <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((multi / 10) + '0');
			}

			_putchar((multi % 10)+ '0');
		}

		_putchar('\n');

	}

}

