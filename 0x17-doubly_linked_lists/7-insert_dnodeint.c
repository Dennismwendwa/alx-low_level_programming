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
	dlistint_t *old;
	dlistint_t *nw;
	unsigned l = 0;

	old = NULL;

	if (idx == 0)
		old = add_dnodeint(h, n);

	else
	{
		nw = *h;
		l = 1;
		if (nw != NULL)
			while (nw->prev != NULL)
				nw = nw->prev;
		while (nw != NULL)
		{
			if (l == idx)
			{
				if (nw->next == NULL)
					old = add_dnodeint_end(h, n);
				else
				{
					old = malloc(sizeof(dlistint_t));
					if (old != NULL)
					{
						old->n = n;
						old->next = nw->next;
						old->prev = nw;

						nw->next->prev = old;
						nw->next = old;
					}
				}
				break;
			}
			old = old->next;
			l++;
		}
	}
	return (old);
}
