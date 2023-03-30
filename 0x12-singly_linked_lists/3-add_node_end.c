#include "lists.h"

/**
  * add_node_end - function that add node at the end
  * @head:- single user input
  * @str:- single user input
  * Return:- Always 0 (success)
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	temp = *head;
	if (*head == NULL)
		*head = node;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = node;
	}
	return (node);

}
