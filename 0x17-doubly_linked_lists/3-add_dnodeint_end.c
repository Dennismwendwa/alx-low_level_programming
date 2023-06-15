#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *end;

	if (!head)
		return (NULL);

	end = malloc(sizeof(dlistint_t));

	if (!end)
		return (NULL);

	end->n = n;
	end->next = NULL;
	tmp = *head;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = end;
		end->prev = tmp;
	}
	else
	{
		end->prev = NULL;
		*head = end;
	}

	return (end);
}
