#include "holberton.h"
#include <stdlib.h>

/**
  * *_realloc - reallocating memory block using malloc() and free()
  * @ptr: pointer to the memory previously allocated
  * @old_size: size, in bytes, of the allocated space for ptr
  * @new_size: new size, in bytes of the new memory block
  * Return: pointer to new memory block, NULL otherwise
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (res == NULL)
		{
			free(res);
			return (NULL);
		}
		return (res);
	}

	res = malloc(new_size);
	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		res[i] = *((char *)ptr + i);
	}
	free(ptr);
	return (res);
}
