#include "holberton.h"

/**
 * _abs - computes the absolute values of an integer
 * @q: contains integer assigned by main
 * Return: absolute value of integer
 */

int _abs(int q)
{
	if (q < 0)
		return (q * -1);
	else
		return (q);
}
