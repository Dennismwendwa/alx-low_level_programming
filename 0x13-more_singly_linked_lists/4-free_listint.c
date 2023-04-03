#include "lists.h"

/**
  * free_listint - function that free struct memory
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
	else
		return;
}
