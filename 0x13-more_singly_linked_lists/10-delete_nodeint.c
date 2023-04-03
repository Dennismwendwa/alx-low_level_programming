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

	previous = *head;
	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;

		return (1);
	}
	else
	{
		while (*head != NULL)
		{
			if (count == index - 1)
			{
				previous = current;
				current = current->next;

				previous->next = current->next;
				free(current);
				current = NULL;

				return (1);
			}
			count++;
		}
	}
	return (-1);
}
