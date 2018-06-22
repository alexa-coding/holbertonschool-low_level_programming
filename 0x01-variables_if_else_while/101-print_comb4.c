#include <stdio.h>
/**
 * main - prints numbers 0-9
 * Return: Success
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55 && b == 56 && c == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
