#include "lists.h"
#include <stdlib.h>

/**
  * *add_nodeint - adds a new node to the beginning of a listint_t list
  * @head: pointer to head of linked list
  * @n: value to be placed in new node
  * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(int));
	if (!new)
		return (0);
	new->n = n;

	if (!*head)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	*head = new;

	return (*head);
}
