#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Success
 */

int main(void)
{
	int i;
	int c;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
