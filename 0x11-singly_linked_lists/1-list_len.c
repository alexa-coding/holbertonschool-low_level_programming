#include "lists.h"
#include <stdlib.h>

/**
  * list_len - counts the number of elements in a linked list_t list
  * @h: pointer to a struct
  * Return: number of elemetns in a linked list_t list
  */

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h != 0; count++)
		h = h->next;
	return (count);
}
