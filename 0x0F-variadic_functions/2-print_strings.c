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

	if (n == 0)
		return;

	va_start(val, n);

	while (i < n - 1)
	{
		var = va_arg(val, char *);
		if (!var)
			printf("(nil)");

		if (separator == NULL)
			printf("%s", var);

		else
			printf("%s%s", var, separator);
		i++;
	}

	printf("%s\n", va_arg(val, char *));

	va_end(val);
}