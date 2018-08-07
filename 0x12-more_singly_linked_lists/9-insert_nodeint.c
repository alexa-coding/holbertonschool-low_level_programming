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

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	for (i = 0, srch = *head; i < idx - 1; i++)
	{
		if (!srch)
			return (NULL);
		srch = srch->next;
	}

	srch2 = srch->next;
	srch->next = new;
	new->next = srch2;

	return (new);
}
