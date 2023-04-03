#include "lists.h"

/**
  * add_nodeint - function that add node at the beginning
  * @h:- head of the list
  * Return:- Always 0 (success)
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	newnode->next = *head;
	*head = newnode;

	return (*head);
}
