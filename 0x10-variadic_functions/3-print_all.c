#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @obj: valid datatypes.
 * @separator: string to be printed between each arg.
 */

void print_char(char *separator, va_list obj)
{
	printf("%s%c", separator, va_arg(obj, int));
}

/**
 * print_int - prints an int
 * @obj: ...
 * @separator: ...
 */

void print_int(char *separator, va_list obj)
{
	printf("%s%i", separator, va_arg(obj, int));
}

/**
 * print_float - print a float
 * @obj: ...
 * @separator: ...
 */

void print_float(char *separator, va_list obj)
{
	printf("%s%f", separator, va_arg(obj, double));
}

/**
 * print_string - prints a string
 * @obj: ...
 * @separator: ...
 */

void print_string(char *separator, va_list obj)
{
	char *str = va_arg(obj, char *);

	if (!str)
		printf("(nil)");
	printf("%s%s", separator, str);
}


/**
 * print_all - prints any argument of any data type.
 * @format: the datatype of the argument to be printed.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *separator = "";

	va_list obj;

	p_type print_args[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(obj, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *print_args[j].cc)
			{
				print_args[j].f(separator, obj);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(obj);
}

