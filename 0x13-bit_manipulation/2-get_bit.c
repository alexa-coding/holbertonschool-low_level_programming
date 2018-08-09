#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * get_bit - returns the value of a bit at a given index
  * @n: contains an integer
  * @index: where the bit wanted is located
  * Return: the value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	char *arr;
	int count;
	unsigned int tmp2;

	if (n == 0)
		return (0);

	for (tmp = n, count = 0; tmp > 0; count++)
		tmp >>= 1;
	tmp2 = count;

	arr = malloc(sizeof(count));

	if (index > tmp2)
		return (0);

	for (count--; count >= 0; count--)
	{
		tmp = n >> count;
		if (tmp & 1)
			arr[count] = '1';
		else
			arr[count] = '0';
	}
	printf("%s\n", arr);

	return (arr[index] - '0');
}
