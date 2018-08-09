#include "holberton.h"
#include <stdlib.h>

/**
  * flip_bits - returns the number of bits you would need
  * to flip to get from one number to another
  * @n: contains an integer
  * @m: contains an integer
  * Return: the number of bits you would need to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor, count = 0;

	if (n > sizeof(n) * 8)
		return (-1);
	if (m > sizeof(n) * 8)
		return (-1);

	xor = n ^ m;

	while (xor != 0)
	{
		xor = xor & (xor - 1);
		count++;
	}

	return (count);
}
