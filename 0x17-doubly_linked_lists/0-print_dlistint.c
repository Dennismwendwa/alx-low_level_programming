#include "lists.h"

/**
* print_dlistint - function that prints elements of the list
* @h:- the head of the list
* Return:- Always 0
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}

	return (count);
}
