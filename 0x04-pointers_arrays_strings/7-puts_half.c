#include "holberton.h"

/**
  * puts_half - prints the second half of a string
  * @str: contains a char value assigned by 7-main
  */

void puts_half(char *str)
{
	int length = 0, h1;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		h1 = length / 2;
	else
		h1 = (length + 1) / 2;

	for (; h1 < length; h1++)
		_putchar(str[h1]);
	_putchar('\n');
}
