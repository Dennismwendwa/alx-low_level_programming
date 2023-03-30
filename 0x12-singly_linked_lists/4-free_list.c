#include "lists.h"

/**
  * free_list - function that frees list memory
  * @head:- pointer to be freed
  * Return:- Always 0 (success)
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
