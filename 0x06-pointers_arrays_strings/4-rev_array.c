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
	int i, j, temp;

	int *x = a;

	for (j = 1; j < n; j++)
	{
		x++;
	}

	for (i = 0; i < j / 2; i++)
	{
		temp = a[i];
		a[i] = *x;
		*x = temp;
		x--;
	}
}
