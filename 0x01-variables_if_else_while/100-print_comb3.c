#include <stdio.h>

/**
 * main - a programme to print numbers in pairs
 * Return: Always 0
 */

int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (x <= 57)
	{
		while (y <= 57)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);

				if (x == 56 && y != 57)
				{
					putchar(32);
					putchar(44);
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');

	return (0);
}
