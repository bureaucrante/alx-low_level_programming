#include "main.h"

/**
 * primechecker - step one of checking for a prime number.
 * @x: the number to be checked.
 * @y: the iterator.
 *
 * Return: 1 if the number is prime, and 0 otherwise.
 */

int primechecker(int x, int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);

		else
			return (0);
	}

	return (primechecker(x, y + 1));

}

/**
 * is_prime_number - step two of checking for a prime number.
 * @n: the number to be checked.
 *
 * Return: same as prior step.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (primechecker(n, 2));
}
