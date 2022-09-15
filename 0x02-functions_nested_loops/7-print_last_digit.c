#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: variable to be checked
 *
 * Return: last digit of number
 */

int print_last_digit(int num)
{
	int lastDigit;

	lastDigit = num % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar (lastDigit + '0');

	return (lastDigit);
}
