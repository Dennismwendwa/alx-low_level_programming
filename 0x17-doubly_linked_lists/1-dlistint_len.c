#include "lists.h"

/**
* dlistint_len - function that counts elements
* @h:- head ptr
* Return:- Always 0
*/

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
