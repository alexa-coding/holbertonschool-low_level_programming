#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data (n) of a
  * listint_t linked list
  * @head: pointer to head of linked list
  * Return: sum of all data (n)
  */

int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}