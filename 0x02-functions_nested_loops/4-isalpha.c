#include "holberton.h"

/**
 * _isalpha returns 1 if c is a letter
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return(1);
	else if (c >= 97 && c <= 122)
		return(1);
	else
		return(0);
}
