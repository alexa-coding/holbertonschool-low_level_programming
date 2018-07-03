#include "holberton.h"

/**
  * puts2 - prints every other character in a string
  * @str: contains a char value set by 6-main.c
  */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
		else
			str++;
	}
	_putchar('\n');
}
