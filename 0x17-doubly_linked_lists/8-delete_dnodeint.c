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

	tmp_p = *head;
	if (tmp_p != NULL)
		while (tmp_p->prev != NULL)
			tmp_p = tmp_p->prev;

	while (tmp_p != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = tmp_p->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				delete_no->next = tmp_p->next;
				if (tmp_p->next->next != NULL)
					tmp_p->next->prev = delete_no;
			}
			free(tmp_p);
			return (1);
		}
		delete_no = tmp_p;
		tmp_p = tmp_p->next;
		j++;
	}
	return (-1);
}
