#include "holberton.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: variable holding integer value
  * Return: natural square root. If n doesn't have a natural square root
  * return -1
  */
int sqrt2(int n)
{
        int i = 1;

        if (n * 10000 - i * i > 0)
                i++;
        else
                return (i / 100);
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return(sqrt2(n, 1));
}
