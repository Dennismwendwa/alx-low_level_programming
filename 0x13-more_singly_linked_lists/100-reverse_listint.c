#include "lists.h"

/**
  * reverse_listint - function that reverses linked list
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *tmp = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = tmp;
	}
	(*head) = prev;

	return (*head);
}
