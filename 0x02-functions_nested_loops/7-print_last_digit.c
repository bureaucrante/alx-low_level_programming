#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: variable to be checked
 *
 * */

int print_last_digit(int num)
{

	if (num != 0)
	{
		int lastDigit;
		
		lastDigit = num % 10;
		
		return (lastDigit);
	}

	return (num);
}
