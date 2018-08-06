#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node
  * @head: pointer to head of linked list
  * Return: data stored in deleted node
  */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int num;

	if (!*head)
		return (0);

	del = *head;
	*head = (*head)->next;
	num = del->n;
	free(del);

	return (num);
}
