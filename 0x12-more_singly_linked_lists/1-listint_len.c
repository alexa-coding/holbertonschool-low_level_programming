#include "lists.h"
#include <stdlib.h>

/**
  * listint_len - calculates the number of nodes in a linked list
  * @h: pointer to head of linked list
  * Return: returns the number of elements in a linked listint_t list
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
