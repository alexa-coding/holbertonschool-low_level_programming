#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator - executes a function given as a parameter
  * on each element of an array
  * @array: an int array
  * @size: size of the array
  * @action: pointer to function that will be used
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && size && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
