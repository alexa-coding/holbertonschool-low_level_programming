#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_binary - prints the binary representation of a number
  * @n: unsigned integer that will be converted into binary
  */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int count;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (tmp = n, count = 0; tmp > 0; count++)
		tmp >>= 1;

	for (count--; count >= 0; count--)
	{
		tmp = n >> count;
		if (tmp & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
