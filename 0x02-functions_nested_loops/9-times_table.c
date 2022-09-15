#include "main.h"
/*times_table*/

void times_table(void)
{
	int n, c, multi;

	for (n = 0; n <= 9; n++)
	{
		for (c=0; c <= 9; c++)
		{

			multi = (n * c);

			_putchar(multi + '0');
		}
	
	_putchar('\n');
	
	}

}

