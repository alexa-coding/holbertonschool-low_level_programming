#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * *insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to head of linked list
  * @idx: index of the list where the new node should be added
  * @n: value to be placed in new node
  * Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *srch, *srch2;
	unsigned int i;

	srch = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;

	if (!*head && !idx)
	{
		*head = new;
		return (new);
	}

	if (idx == 0)
	{
		srch = srch->next;
		*head = new;
		new->next = srch;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!srch)
			return (0);
		srch = srch->next;
	}

	srch2 = srch->next;
	srch->next = new;
	new->next = srch2;

	return (new);
}
