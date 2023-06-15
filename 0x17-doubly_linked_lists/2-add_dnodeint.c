#include "lists.h"

/**
  * add_dnodeint - function that adds node
  * @head:- head of the list ptr
  * @n:- The position to add
  * Return:- Always 0
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	 dlistint_t *beg;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		beg = malloc(sizeof(dlistint_t));
		if (!beg)
			return (NULL);

		beg->n = n;
		beg->prev = NULL;
		beg->next = *head;

		if (*head)
			(*head)->prev = beg;
		*head = beg;

		return (*head);
	}
}
