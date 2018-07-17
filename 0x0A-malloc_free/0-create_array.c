#include "holberton.h"
#include <stdlib.h>

/**
  * *create_array - creates an array of chars and initializes it with a
  * specific char
  * @size: stores an int value
  * @c: stores a char value
  * Return: NULL if size is 0, pointer to array or NULL if program fails
  */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	a = malloc(size);

	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
