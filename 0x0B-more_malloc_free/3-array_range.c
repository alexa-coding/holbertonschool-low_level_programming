#include "holberton.h"
#include <stdlib.h>

/**
  * *array_range - creates an array of integers
  * @min: int value
  * @max: int value
  * Return: pointer to array of integers, NULL if program fails
  */

int *array_range(int min, int max)
{
	int *res, i, count = min;

	if (min > max)
		return (NULL);
	for (i = 0; count <= max; i++, count++)
		;

	res = malloc(i * sizeof(int));
	if (res == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		res[i] = min;
	return (res);
}
