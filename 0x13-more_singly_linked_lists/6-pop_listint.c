#include "lists.h"

/**
  * pop_listint - function that deletes last element
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

int pop_listint(listint_t **head)
{
	listint_t *previos, *pop;
	int k;

	if (head != NULL)
	{
		pop = previos = *head;

		if (!*head)
		{
			k = 0;
		}
		else if (*head)
		{
			k = previos->n;
			*head = previos->next;
			free(pop);
		}
		return (k);

	}
	else
		return (0);
}
