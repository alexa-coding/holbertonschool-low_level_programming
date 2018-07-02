#include "holberton.h"

/**
* _puts - prints a string followed by a newline to standard output
* @str: pointer that points to a char variable with a value assigned by
* 3-main.c
*/

void _puts(char *str)
{
	int elnum = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		elnum++;
		str++;
	}
	_putchar('\n');
}