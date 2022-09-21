#include <stdio.h>

/**
 * main - main
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
