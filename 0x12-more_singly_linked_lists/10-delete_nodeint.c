#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - deletes the node at index index of a
  * listint_t linked list
  * @head: pointer to head of linked list
  * @index: index of the node that should be deleted
  * Return: 1 if successful, -1 otherwise
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp;
	unsigned int i;

	if (!(*head))
		return (-1);

	del = *head;
	temp = *head;

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (!del)
			return (-1);
		if (i < index - 1)
			temp = temp->next;
		del = del->next;
	}
	temp->next = del->next;
	free(del);
	return (1);
}
