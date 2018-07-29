#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints almost anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	va_list val;
	char *var;

	va_start(val, format);

	while (format && format[i])
	{
		flag = 0;

		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(val, int));
				break;
			}
			case 'i':
			{
				printf("%i", va_arg(val, int));
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(val, double));
				break;
			}
			case 's':
			{
				var = va_arg(val, char *);
				if (var == NULL)
					var = "(nil)";
				printf("%s", var);
				break;
			}
			default:
			{
				flag = 1;
				break;
			}
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
		}
	printf("\n");
}
