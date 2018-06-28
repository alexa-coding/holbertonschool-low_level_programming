xcxc#include "holberton.h"

/**
 * _isalpha - returns 1 if c is a letter
 * @c: c contains an integer given by main
 * Return: 1 if c is a letter, returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
