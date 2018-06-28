#include "holberton.h"

/**
 * main - prints Holberton followed by newline
 * Return: Success
 */

int main(void)
{
	int i;
	char c[] = "Holberton";

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
