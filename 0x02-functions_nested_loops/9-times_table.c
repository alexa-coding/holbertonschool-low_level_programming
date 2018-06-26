#include "holberton.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int s, o, b, e, r;

	for (s = 0; s <= 9; s++)/*vertical values of the table*/
	{
		for (o = 0; o <= 9; o++)/*horizontal values of the table*/
		{
			b = s * o;/*product when values are multiplied*/

			e = b / 10;
			r = b % 10;
			if (o == 9)
			{
				if (b > 9)
				{
					_putchar(' ');
					_putchar(e + '0');
					_putchar(r + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(b + '0');
				}
			}
			else
			{
				if (b > 9)
				{
					_putchar(' ');
					_putchar(e + '0');
					_putchar(r + '0');
					_putchar(',');
				}
				else
				{
					if (o == 0)
					{
						_putchar(b + '0');
						_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(b + '0');
						_putchar(',');
					}
				}
			}
		}
		_putchar('\n');
	}
}
