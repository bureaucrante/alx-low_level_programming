#include "main.h"
/*print_to_98*/

void print_to_98(int n)
{
	if (n <= 98)
	{
		_putchar(n);
		
		if (n != 98)
		{
			_putchar(',');
		}
		n++;
	
	}

	else if (n >= 98)
	{
		_putchar(n);
		if (n != 98)
		{
			_putchar(',');
		}
		n--;
	}

	else
	{
		_putchar(n); 
	}
	_putchar('\n');
}
