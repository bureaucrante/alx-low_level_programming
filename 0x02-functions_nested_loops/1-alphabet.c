#include "main.h"
#include <stdio.h>
#include <stdbool.h>


/**
 * main - print the alphabet in lowercase by converting from ASCII
 *
 * Return: Always 0.
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++; 
	}

	putchar('\n');
}
