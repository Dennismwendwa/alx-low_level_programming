#include "lists.h"

/**
  * delete_dnodeint_at_index - function that deletes node
  * @head:- ptr to the list head
  * @index:- index of node to delete
  * Return:- Always 0
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_no;
	dlistint_t *tmp_p;
	unsigned int j = 0;

	if (!(*head))
		return (-1);

	delete_no = NULL;
	tmp_p = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(delete_no);
		return (1);
	}

	while (delete_no)
	{
		if (j == index)
		{
			tmp_p->next = delete_no->next;
			free(delete_no);

			return (1);
		}

		tmp_p = delete_no;
		delete_no = delete_no->next;
		j++;
	}
	return (-1);
}
