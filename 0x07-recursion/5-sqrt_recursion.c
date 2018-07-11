#include "holberton.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * sqrt2 - calculates the square root of a number
  * @i: contains an integer
  * @n: variable holding integer value
  * Return: natural square root. If n doesn't have a natural square root
  * return -1
  */
int sqrt2(int n, int i)
{
	if (n - i * i == 0)
		return (i);
	if (n < i * i)
		return (-1);
	return (sqrt2(n, i + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (sqrt2(n, 1));
}
