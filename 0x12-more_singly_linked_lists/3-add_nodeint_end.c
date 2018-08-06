#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *add_nodeint_end - adds a new node to the end of a listint_t list
 * @head: pointer to head of linked list
 * @n: value to be placed in new node
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end;

	end = *head;

	new = malloc(sizeof(int));
	if (!new)
		return (0);

	new->n = n;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	while (end->next)
		end = end->next;
	end->next = new;
	end = new;

	return (end);
}
