#include <stdio.h>

/**
  * print_array - prints n elements of array
  * @a: pointer to array
  * @n: number of elements needed to print the array
  */

void print_array(int *a, int n)
{
	int el = 0;

	while (el < n)
	{
		if (el >= n - 1)
			printf("%d", a[el]);
		else
			printf("%d, ", a[el]);
		el++;
	}
	printf("\n");
}
