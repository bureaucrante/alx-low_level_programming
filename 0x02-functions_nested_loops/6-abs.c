#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @num: the number to be evaluated
 * @abs(num): the expression that evaluates the absval
 *
 * Return: 0 if success.
 */

int _abs(int num)
{
	int abs_num;

	abs_num = num * -1;

	if (num < 0)
	{
		_putchar(abs_num);
	}

	return (num);
}
