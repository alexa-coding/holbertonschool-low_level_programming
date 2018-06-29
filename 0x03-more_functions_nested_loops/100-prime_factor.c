#include <stdio.h>

/**
 * main - prints the largest prime factor
 * Return: Success
 */

int main(void)
{
	int ft = 2;
	long num = 612852475143;

	while (ft < num)
	{
		if (num % ft == 0)
			num /= ft;
		else
			ft++;
	}
	printf("%ld \n", num);

	return (0);
}
