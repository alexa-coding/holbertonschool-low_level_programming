#include "holberton.h"

/**
 * print_diagonal - draws a straight line in the terminal
 * @n: contains an int value assigned by main
 * Return: Success
 */

void print_diagonal(int n)
{
	int T = 1, num;
	char sp = ' ';

	if (n > 0)
		while (n >= T)
		{
			if (T >= 2)
				for (num = 2; num <= T; num++)
					_putchar(sp);
			_putchar(92);
			_putchar('\n');
			T++;
		}
	else
		_putchar('\n');
}
