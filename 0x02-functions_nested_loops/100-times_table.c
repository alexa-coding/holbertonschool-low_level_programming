#include "holberton.h"

/**
 * print_times_table - prints the 9 times table
 * @n: contains integer value set by main
 */

void print_times_table(int n)
{
	int s, o, b, e, r, q;

	if (n < 15 && n > 0)
	{
		for (s = 0; s <= n; s++)/*vertical values of the table*/
		{
			for (o = 0; o <= n; o++)/*horizontal values of the table*/
			{
				b = s * o;/*product when values are multiplied*/

				e = b / 100;
				r = (b / 10) % 10;
				q = b % 10;
				if (o == n)
				{
					if (b > 99)
					{
						_putchar(' ');
						_putchar(e + '0');
						_putchar(r + '0');
						_putchar(q + '0');
					}
					else if (b > 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(r + '0');
						_putchar(q + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(b + '0');
					}
				}
				else
				{
					if (b > 99)
					{
						_putchar(' ');
						_putchar(e + '0');
						_putchar(r + '0');
						_putchar(q + '0');
						_putchar(',');
					}
					else if (b > 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(r + '0');
						_putchar(q + '0');
						_putchar(',');
					}
					else if (o == 0)
					{
						_putchar(b + '0');
						_putchar(',');
					}
					else
					{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(b + '0');
					_putchar(',');
					}
				}
			}
			_putchar('\n');
		}
	}
}
