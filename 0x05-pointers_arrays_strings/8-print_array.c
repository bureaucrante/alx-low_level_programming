#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements within an array
 * @a: the array to evaluated
 * @n: the total number of elements within the array (the limit)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n -1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
