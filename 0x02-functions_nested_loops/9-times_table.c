#include "main.h"
/*times_table*/

void times_table(void)
{
	int n;

	for  (n = 0; n <= 9; n++ )
	{
		int c;

		for (c=0; c <= 9; c++)
		{
			int multi;

			multi = (n * c);

			_putchar(multi);
		}
	}
	return (n);
}

