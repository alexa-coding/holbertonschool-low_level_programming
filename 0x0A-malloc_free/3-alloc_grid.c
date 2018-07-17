#include "holberton.h"
#include <stdlib.h>

/**
  * **alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: contains int value
  * @height: contains int value
  * Return: NULL if failed, NULL if width or height is negative/0, pointer
  * to array otherwise
  */

int **alloc_grid(int width, int height)
{
	int **a, h, w, i;

	if (width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
		}
	}

	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			a[h][w] = 0;
	return (a);
}
