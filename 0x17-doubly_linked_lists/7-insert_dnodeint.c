#include "lists.h"

/**
  * insert_dnodeint_at_index - function that adds node at position
  * @h:- ptr to the list
  * @idx:- position to add the node
  * @n:- data value
  * Return:- Always 0
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nod;
	dlistint_t *tmp;
	unsigned int l = 0;

	nod = NULL;
	if (idx == 0)
		nod = add_dnodeint(h, n);
	else
	{
		tmp = *h;
		l = 1;
		if (tmp != NULL)
			while (tmp->prev != NULL)
				tmp = tmp->prev;
		while (tmp != NULL)
		{
			if (l == idx)
			{
				if (tmp->next == NULL)
					nod = add_dnodeint_end(h, n);
				else
				{
					nod = malloc(sizeof(dlistint_t));
					if (nod != NULL)
					{
						nod->n = n;
						nod->next = tmp->next;
						nod->prev = tmp;
						tmp->next->prev = nod;
						tmp->next = nod;
					}
				}
				break;
			}
			tmp = tmp->next;
			l++;
		}
	}
	return (nod);
}
