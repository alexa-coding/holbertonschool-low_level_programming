#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees list_t
  * @head: pointer to linked list
  */

void free_list(list_t *head)
{
	list_t *spot;
	spot = head;

	while (head != 0)
	{
		free(spot->str);
		free(spot);
		head = head->next;
		spot = head;
	}
}
