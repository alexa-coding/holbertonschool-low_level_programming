#include "holberton.h"

/**
 * print_last_digit - returns last value of a digit
 * @a: contains integer assigned by main
 * Return: last digit of a
 */

int print_last_digit(int a)
{
	int l = a % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		_putchar(-l + '0');
		return (-l);
	}
}
