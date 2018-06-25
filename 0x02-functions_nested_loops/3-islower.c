#include "holberton.h"

/**
 * _islower - returns 1 if c is lowercase, returns 0 otherwise
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
		return(1);
	else
		return(0);
}
