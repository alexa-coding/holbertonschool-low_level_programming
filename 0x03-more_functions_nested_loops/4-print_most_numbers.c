#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 and exclude 2 and 4
 * Return: Success
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
		_putchar(i);
	}
	_putchar('\n');
}
