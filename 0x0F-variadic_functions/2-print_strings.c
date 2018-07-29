#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i = 0;
	char *var;

	va_start(val, n);

	for (i = 0; i < n; i++)
	{
		var = va_arg(val, char *);
		if (!var)
			printf("(nil)");
		else
			printf("%s", var);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(val);
}
