#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: string to be printed between numbers
  * @n: number of parameters
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list val;
	unsigned int i;

	va_start(val, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(val, int));

		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(val, int));
}
