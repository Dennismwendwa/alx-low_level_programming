#include "lists.h"

/**
  * get_dnodeint_at_index - function that counts nodes
  * @head:- head of the node
  * @index:- the position of the node
  * Return:- Always 0
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	unsigned int j = 0;

	while (list)
	{
		if (j == index)
		{
			return (list);
		}

		list = list->next;
		j++;
	}

	return (NULL);
}
