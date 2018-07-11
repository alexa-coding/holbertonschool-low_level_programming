#include "holberton.h"

/**
  * _pow_recursion -- returns the value of x to the power of y
  * @x: integer
  * @y: exponent
  * Return: power of x to the power of y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
