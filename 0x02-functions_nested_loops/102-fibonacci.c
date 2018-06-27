
#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting with 1 and 2,
 * followed by a new line.
 * Return: Success
 */

int main(void)
{
	long  x = 1, y = 2, z;
	int w;

	printf("%ld, %ld, ", x, y);

	while (w <= 50)
	{
		z = x + y;
		x = y;
		y = z;
		if (w == 50)
			printf("%ld\n", z);
		else
			printf("%ld, ", z);
		w++;
	}
	return (0);
}
