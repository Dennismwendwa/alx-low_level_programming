#include "lists.h"

/**
  * reverse_listint - function that reverses linked list
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	tmp = *head;
	prev = NULL;

	while (1)
	{
		if (prev == NULL)
		{
			prev = *head;
			tmp = tmp->next;
			prev->next = NULL;
			*head = prev;
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
			prev->next = *head;
			if (tmp == NULL)
			{
				tmp = prev;
				break;
			}
			*head = prev;
		}
	}
	*head = tmp;
	return (*head);
}
