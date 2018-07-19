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
	char *res;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		res[i] = 0;

	return (res);
}
