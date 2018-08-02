#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds node to the end of a linked list_t list
 * @head: double pointer to address of head
 * @str: string that will be placed into the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *search;
	int i;

	search = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (i = 0; str[i] != 0; i++)
		;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (search->next != 0)
		search = search->next;

	search->next = new;

	return (*head);
}
