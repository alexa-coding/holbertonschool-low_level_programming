#include "holberton.h"

/**
* print_rev - Prints the string in reverse, followed by a new line
* @s: pointer that points to a char variable with a value assigned by
* 4-main.c
*/

void print_rev(char *s)
{
	int length = 0, end, rev;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	end = length;

	for (rev = end; rev >= 0; rev--)
		_putchar(*s--);
	_putchar('\n');
}

