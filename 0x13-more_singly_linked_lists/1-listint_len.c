#include "lists.h"

/**
  * listint_len - function return number of elements in linked list
  * @h:- head of the linked list
  * Return:- Always 0 (success)
  */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
