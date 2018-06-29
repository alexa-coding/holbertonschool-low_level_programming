#include "holberton.h"

/**
 * print_triangle - prints triangles using #
 * @size: contains an int value that determines the size of the triangles
 */

void print_triangle(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = size; col > 0; col--)
		{
			if (col > row)
				_putchar(' ');
			else
				_putchar('#');
		}
	_putchar('\n');
	}
}
