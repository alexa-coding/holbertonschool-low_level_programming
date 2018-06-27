#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Success
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	return (0);
}
