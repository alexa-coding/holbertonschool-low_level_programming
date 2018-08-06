#include "lists.h"
#include <stdlib.h>

/**
  * *get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: pointer to head of linked list
  * @index: index of the node to be returned
  * Return: the nth node of listint_t
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);
}
