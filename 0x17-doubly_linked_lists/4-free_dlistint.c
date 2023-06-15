#include "lists.h"

/**
  * free_dlistint - function that free list
  * @head:- head of list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *delt;

	while (head)
	{
		delt = head;
		free(delt);
		head = head->next;
	}
}
