#include "main.h"
/*times_table*/

void times_table(void)
{
	int n, c, multi, a, b;

	for (n = 0; n <= 9; n++)
	{
		for (c=0; c <= 9; c++)
		{
			multi = (n * c);

			if (multi > 9)
			{
				a = multi % 10;
				b = (multi - a) / 10;
				
				_putchar(44);
				_putchar(32);
				_putchar(a + '0');
				_putchar(b + '0');
			}

			_putchar(multi + '0');
		}
	
	_putchar('\n');
	
	}

}

