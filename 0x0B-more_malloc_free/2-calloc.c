#include "holberton.h"
#include <stdlib.h>

/**
  * *_calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: byte size of each element
  * Return: pointer to allocated memoruy, NULL if program fails
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(nmemb * sizeof(size));
	if (res == NULL)
		return (NULL);
	return (res);
}
