#include "holberton.h"

/**
 * jack_bauer - prints every minute of every day
 */

void jack_bauer(void)
{
	int a, l, e, x, a2, s;

	for (a = 0; a <= 23; a++)
	{
		for (x = 0; x <= 59; x++)
		{
			l = a / 10;
			_putchar(l + '0');
			e = a % 10;
			_putchar(e + '0');
			_putchar(':');
			a2 = x / 10;
			_putchar(a2 + '0');
			s = x % 10;
			_putchar(s + '0');
			_putchar('\n');
		}
	}
}
