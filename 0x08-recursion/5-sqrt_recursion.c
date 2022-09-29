#include "main.h"

/**
 * nomdenom - finds the natural root of a number
 * @d: iterator
 * @n: the number to be checked.
 *
 * Return: -1 or value of d.
 */

int nomdenom(int d, int n)
{
	if (n % d == 0)
	{
		if (d * d == n)
		{
			return (d);
		}
	}
	if (d * d > n)
	{
		return (-1);
	}
	return (nomdenom(d + 1, n));
}

/**
 *  _sqrt_recursion - actually finds the sqareroot of a number with recursion.
 *  @n: the number to be checked.
 *
 *  Return: -1 or the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (nomdenom(2, n));
}
