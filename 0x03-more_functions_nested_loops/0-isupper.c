#include "holberton.h"

/**
 * _isupper - determines whether or not the value of c is a lower case or upper case
 * @c: contains an integer value set by main
 * Return: 1 if uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
