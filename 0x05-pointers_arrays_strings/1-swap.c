#include "main.h"
/**
 * swap_int - changes the value at the address of a specific pointer.
 * @a - first pointer
 * @b - second pointer
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
