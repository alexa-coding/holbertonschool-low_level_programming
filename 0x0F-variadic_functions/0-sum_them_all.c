#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
  * sum_them_all - add all parameters
  * @n: number of parameters
  * Return: sum of all parameters, NULL if n equals 0.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	double sum = 0;

	if (n == 0)
		return (0);

	va_start(val, n);

	for (i = 0; i < n; i++)
		sum += va_arg(val, int);

	va_end(val);

	return (sum);
}
