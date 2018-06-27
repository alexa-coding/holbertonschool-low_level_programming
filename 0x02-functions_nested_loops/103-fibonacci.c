#include <stdio.h>

/**
 * main - prints the sum of the even fibonacci numbers
 * followed by a new line
 * Return: Success
 */

int main(void)
{
	long sum = 0, x = 1, y = 2, z;

	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
		else
			continue;
	}
	printf("%ld\n", sum);

	return (0);
}
