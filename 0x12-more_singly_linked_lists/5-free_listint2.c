#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *fpos;

	if (!head)
		return;

	while (*head)
	{
		fpos = *head;
		*head = (*head)->next;
		free(fpos);
	}
	*head = NULL;
}
