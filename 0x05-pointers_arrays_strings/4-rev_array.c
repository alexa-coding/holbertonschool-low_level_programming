#include "holberton.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: pointer to an array of numbers
  * @n: number of elements in the array
  */

void reverse_array(int *a, int n)
{
	int in = 0, temp, end = n - 1;

	while (in < end)
	{
		temp = a[in];
		a[in] = a[end];
		a[end] = temp;
		in++;
		end--;
	}
}
