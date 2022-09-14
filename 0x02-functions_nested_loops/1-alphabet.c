#include "main.h"


/**
 * main - print the alphabet in lowercase by converting from ASCII
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int x = 97;

	for (x <= 122; x++;)
	{
		_putchar(x);
	}
	/*for (int x = 97; x <= 122;)
	{

	}*/
	_putchar('\n');
}
