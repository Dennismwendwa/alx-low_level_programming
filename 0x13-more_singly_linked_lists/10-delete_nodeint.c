#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes node
  * @head:- head of the list
  * @index:- index of node to delete
  * Return:- Always 0 (success)
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *previous, *current;

	previous = NULL;
	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);

		return (1);
	}

		while (*head != NULL)
		{
			if (count == index)
			{
				previous->next = current->next;
				free(current);

				return (1);
			}
			previous = current;
			current = current->next;
			count++;
		}
	return (-1);
}
