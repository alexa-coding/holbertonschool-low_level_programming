#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_list - prints the elements of list_t
  * h: head of link list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int count;

	for (count = 0; h != 0; count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
