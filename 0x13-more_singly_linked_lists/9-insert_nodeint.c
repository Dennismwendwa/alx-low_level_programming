#include "lists.h"

/**
  * insert_nodeint_at_index - function that add node at position n
  * @head:- head of the node
  * @idx:- position of the node
  * @n:- element of list
  * Return:- Always 0 (success)
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *carrent, *tmp;

	carrent = *head;
	tmp = malloc(sizeof(listint_t));


	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;


	if (idx == 0)
	{
		tmp->next = carrent;
		*head = tmp;
		return (*head);
	}

	while (idx > 1)
	{
		carrent = carrent->next;
		idx--;
		if (carrent == NULL)
		{
			free(tmp);
			return (NULL);
		}

	}
	tmp->next = carrent->next;
	carrent->next = tmp;
	return (tmp);
}
