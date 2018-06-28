#include "holberton.h"

/**
 * print_square - prints squares. Size of squares
 * are determined by the variable n.
 * @size: contains an int value assigned by main
 */

void print_square(int size)
{
	int col, row;

	if (size > 0)
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	else
		_putchar(10);
}
