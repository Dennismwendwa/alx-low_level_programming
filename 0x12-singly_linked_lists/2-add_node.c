#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
  * add_node - function that adds node at the beginning.
  * @head:- single user input
  * @str:- single user input
  * Return:- Always 0 (success)
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t));

	if (head == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	*head = node;

	return (*head);

}
