#include "lists.h"

/**
  * sum_dlistint - function that adds all data
  * @head:- head of the list
  * Return:- Always 0
  */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list;
	int sum = 0;

	if (head)
	{
		list = head;

		while (list)
		{
			sum += list->n;
			list = list->next;
		}

		return (sum);
	}

	return (0);
}

