#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * (*get_op_func(char *s)) - selects the correct function
  * to perform the operation asked by the user
  * @int: contains int value
  * Return: pointer to function that will perform the desired operation
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (0);
}
