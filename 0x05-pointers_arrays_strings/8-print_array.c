#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements within an array
 * @a: the array to evaluated
 * @n: the total number of elements within the array (the limit)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (a[j] != '\0')
		{
			printf("%d", a[j]);
		}
		printf(", ");
	}
	printf("\n");
}
