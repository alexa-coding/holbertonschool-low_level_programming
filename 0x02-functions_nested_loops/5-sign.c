#include "holberton.h"

/**
 * print_sign - prints whether or not a number is negative, positive, or zero.
 * @n: contains integer assigned by main
 * Return: 1 if positive, 0 if zero, -1 if other
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
