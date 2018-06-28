#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: contains an int value assigned by main
 * Return: Success
 */

void print_line(int n)
{
	int T = 1;

	if (n > 0)
		while (n >= T)
		{
			_putchar('_');
			T++;
		}
	_putchar('\n');
}
