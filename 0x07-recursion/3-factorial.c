#include "holberton.h"

/**
  * factorial - returns teh factorial of a given number
  * @n: variable containing an integer
  * Return: factorial of n
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	n = n * factorial(n - 1);
	if (n < 0)
		n = -n;
	return (n);
}
