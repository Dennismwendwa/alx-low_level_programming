#include "lists.h"

/**
  * print_listint_safe - function that prints linked list
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;

	if (!head)
		return (98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		head = head->next;
	}
	return (count);
}
