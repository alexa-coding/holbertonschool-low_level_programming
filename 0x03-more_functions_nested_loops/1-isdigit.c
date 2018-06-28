#include "holberton.h"

/**
 * _isdigit - determines whether the value of c is a digit or not
 * @c: contains a value set by main
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
