#include "holberton.h"

/**
 * more_numbers - prints 0-14
 */

void more_numbers(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 48; y <= 49; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				if (y == 49 && z >= 53)
					continue;
				else
				{
					if (y == 49)
						_putchar(y);
					_putchar(z);
				}
			}
		}
		_putchar('\n');
	}

}
