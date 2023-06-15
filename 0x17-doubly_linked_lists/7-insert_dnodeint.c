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

	nw = malloc(sizeof(dlistint_t));

	if (!nw)
		return (NULL);

	nw->n = n;
	old = *h;

	if (!old)
	{
		nw->prev = NULL;
		nw->next = NULL;
		*h = nw;

		return (nw);
	}

	if (idx == 0)
	{
		nw->prev = NULL;
		nw->next = old;
		old->prev = nw;

		return (nw);
	}

	for (; idx > 1 && old->next; idx--)
		old = old->next;

	if (idx > 1 && !old->next)
		return (NULL);

	nw->prev = old;
	nw->next = old->next ? old->next : NULL;

	if (old->next)
		old->next->prev = nw;

	old->next = old->next && idx > 1 ? NULL : nw;
	return (nw);
  }
