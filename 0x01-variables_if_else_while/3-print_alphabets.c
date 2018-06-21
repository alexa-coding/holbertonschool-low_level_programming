#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: Success
 */

int main(void)
{
	int i;
	int i2;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i2 = 65; i2 <= 90; i2++)
		putchar(i2);
	putchar('\n');
	return (0);
}
