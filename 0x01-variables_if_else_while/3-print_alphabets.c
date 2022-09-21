#include <stdio.h>

/**
 * main - main
 * Return: Always 0
 */

int main(void)
{
	int i, x;

	i = 97;
	x = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (x < 91)
	{
		putchar(x);
		x++;

	}
	putchar('\n');

	return (0);
}
