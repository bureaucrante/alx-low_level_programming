#include <stdio.h>

/**
 * main - programme to print the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main()
{
	int i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
