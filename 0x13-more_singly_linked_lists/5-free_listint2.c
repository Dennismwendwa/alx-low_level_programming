#include "lists.h"

/**
  * free_listint2 - function that frees memory
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *node;

	if (head != NULL)
	{
		node = *head;

		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp);
		}
		*head = NULL;
	}
	else
		return;
}
