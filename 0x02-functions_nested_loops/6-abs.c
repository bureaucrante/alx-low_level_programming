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

	if (num < 0)
	{
		int abs_num;

		abs_num = num * -1;

		return (abs_num);
	}

	else
	{
		return (num);
	}

	return (num);
}
