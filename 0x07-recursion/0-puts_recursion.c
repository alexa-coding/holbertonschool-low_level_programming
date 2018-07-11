#include "holberton.h"

/**
  * _puts_recursion - prints a string, followed by a newline
  * @s: pointer to a string
  */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		_putchar(s[i]);
	_putchar('\n');
}
