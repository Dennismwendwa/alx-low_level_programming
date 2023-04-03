#include "lists.h"

/**
  * get_nodeint_at_index - function that returns nth node
  * @head:- head of the list
  * @index:- index of the node
  * Return:- Always 0 (success)
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count++;

		if (count == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
