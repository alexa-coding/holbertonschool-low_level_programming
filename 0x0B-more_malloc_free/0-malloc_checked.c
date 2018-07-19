#include "holberton.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocates memory using malloc
  * @b: unsigned int
  * Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	char *res;

	res = malloc(sizeof(*res) * b);
	if (res == NULL)
		exit(98);
	return (res);
}
