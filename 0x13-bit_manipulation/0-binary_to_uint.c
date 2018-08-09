#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * myPow - returns the value of x raised to the power of y
  * @x: base number
  * @y: exponent
  * Return: value of x raised to the power of y
  */

int myPow(int x, int y)
{
	int i, num;

	for (i = 0, num = 1; i < y; i++)
		num *= x;
	return (num);
}

/**
  * int binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to string of 1's and 0's (binary number)
  * Return: converted number or 0 if program fails
  */

unsigned int binary_to_uint(const char *b)
{
	int i, exp = 0, dec = 0;

	if (!*b)
		return (0);

	for (i = 0; b[i]; i++) /* string length */
		;

	for (i = i - 1; i >= 0; i--, exp++)
	{
		if (b[i] != '0' && b[i] != '1') /* check for chars */
			return (0);

		if (b[i] == '1')
			dec += myPow(2, exp);
	}

	return (dec);
}
