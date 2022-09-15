#include "main.h"


/**
 * main - print the alphabet in lowercase by converting from ASCII
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++; 
	}

	_putchar('\n');
}
