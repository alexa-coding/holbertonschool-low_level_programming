#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers form n to 90
 * @n: contains integer values assigned by main
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
			{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}

	}
}
