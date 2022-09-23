#include "main.h"

/**
 * reverse_array - reverses the elements of an array.
 * @a: the array to be evaluated.
 * @n: the length of the array.
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	int x = n;

	for (i = 0; i <= x / 2; i++)
	{
		temp = a[i];
		a[i] = a[x - i - 1];
		a[x - i - 1] = temp;
	}
}
