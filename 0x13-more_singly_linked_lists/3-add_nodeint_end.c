#include "lists.h"

/**
  * add_nodeint_end - function that add node at the end of list
  * @head:- head of the list
  * @n:- elements to be added
  * Return:- Always 0 (success)
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newnode;

	return (*head);

}
