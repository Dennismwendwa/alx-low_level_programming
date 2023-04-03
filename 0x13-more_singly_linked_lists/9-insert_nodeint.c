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
	unsigned int count = 0;
	
	carrent = *head;
	tmp = malloc(sizeof(listint_t));
	

	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;


	while (*head != NULL)
	{
		if (count == idx)
		{
			tmp->next = carrent->next;
			carrent->next = tmp;
			tmp = tmp->next;
			
			return (tmp);
		}
		count++;
	}
	if (*head == NULL)
	{
		*head = tmp;
	}
	return (tmp);
}
