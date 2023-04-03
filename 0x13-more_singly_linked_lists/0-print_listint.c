#include "lists.h"


/**
  * print_listint - function that prints linked list
  * @h:- head of the linked list
  * Return:- Always 0 (success)
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
