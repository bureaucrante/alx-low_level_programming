#include <stdio.h>

/**
 * main - programme to print hexadecimal character
 * Return: Always 0
 */

int main(void)
{
	char i, s;

	i = '0';
	s = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (s <= 'f')
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
