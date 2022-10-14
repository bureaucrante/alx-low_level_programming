#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as argument.
 * @separator: the string to be printed between arguments.
 * @n: the number of arguments to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list string;

	va_start(string, n);

	while (i < n)
	{
		if (string == NULL)
			printf("(nil)");

		printf("%s", va_arg(string, char *));

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);

		i++;
	}

	va_end(string);

	printf("\n");
}
