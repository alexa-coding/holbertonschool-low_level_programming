#include "function_pointers.h"
#include <stdlib.h>

/**
  * print_name - prints name
  * @name: pointer to string
  * @f: pointer to function that prints name
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
