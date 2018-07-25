#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds two integers
  * @a: integer value
  * @b: integer value
  * Return: sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts one integer from another
  * @a: integer value
  * @b: integer value
  * Return: difference between a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies two integers
  * @a: integer value
  * @b: integer value
  * Return: product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides two integers
  * @a: integer value
  * @b: integer value
  * Return: quotient of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - mods two integers
  * @a: integer value
  * @b: integer value
  * Return: remainder of division of a and b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
