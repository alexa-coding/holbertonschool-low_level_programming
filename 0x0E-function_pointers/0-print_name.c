#include "function_pointers.h"

/**
  * print_name - prints name
  * @name: pointer to string
  * @f: pointer to function that prints name
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
