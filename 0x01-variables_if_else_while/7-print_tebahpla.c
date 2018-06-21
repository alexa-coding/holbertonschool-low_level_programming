#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Success
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
