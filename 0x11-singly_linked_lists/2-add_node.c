#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  * add_node - adds node to the beginning of a linked list_t list
  * @head: double pointer to address of head
  * @str: string that will be placed into the new node
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i;

	if (head == NULL)
		exit(1);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	else
		temp->str = strdup(str);

	for (i = 0; str[i]; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (*head);
}
