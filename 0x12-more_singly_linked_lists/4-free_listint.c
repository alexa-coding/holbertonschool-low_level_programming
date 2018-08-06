#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *fpos;

	fpos = head;

	while (head)
	{
		free(fpos);
		head = head->next;
		fpos = head;
	}
}
