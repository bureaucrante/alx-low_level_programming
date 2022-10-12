#include "function_pointers.h"

/**
 * print_name - a function that calls on another to print a name
 * using a function.
 * @name: the name to be printed.
 * @f: a pointer to a function that prints names.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name = NULL || f = NULL)
		return NULL;

	f(name);
}
