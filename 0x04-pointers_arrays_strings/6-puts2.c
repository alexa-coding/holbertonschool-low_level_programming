#include "holberton.h"

/**
  * puts2 - prints every other character in a string
  * @str: contains a char value set by 6-main.c
  */

void puts2(char *str)
{
	int ndx;

	for (ndx = 0; str[ndx] != '\0'; ndx++)
		if (ndx % 2 == 0)
			_putchar(str[ndx]);
	_putchar('\n');
}
