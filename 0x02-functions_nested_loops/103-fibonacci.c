#include <stdio.h>

/**
 * main - prints the sum of the even fibonacci numbers
 * followed by a new line
 * Return: Success
 */

int main(void)
{
	long sum = 0, x = 0, y = 1, z;

	while (z <= 4000000)
	{
		if (z % 2 == 0)
			sum += z;
		z = x + y;
		x = y;
		y = z;
	}
	printf("%ld\n", sum);

	return (0);
}
