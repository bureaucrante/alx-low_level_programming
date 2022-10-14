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
	va_list param;
	char *string;

	if (n <= 0)
		return;

	va_start(param, n);

	while (i < n)
	{
		string = va_arg(param, char *);

		if (string == NULL)
			printf("%s", "(nil)");

		printf("%s", string);

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);

		i++;
	}

	va_end(param);

	printf("\n");
}
