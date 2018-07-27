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

	if (n == 0)
		return;

	va_start(val, n);

	for (i = 0; i < n - 1;)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(val, int), separator);
		else
			printf("%d", va_arg(val, int));
		i++;
	}
	printf("%d\n", va_arg(val, int));

	va_end(val);
}
