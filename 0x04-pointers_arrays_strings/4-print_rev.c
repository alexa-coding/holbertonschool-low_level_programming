#include "holberton.h"

/**
* print_rev - Prints the string in reverse, followed by a new line
* @s: pointer that points to a char variable with a value assigned by
* 4-main.c
*/

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
