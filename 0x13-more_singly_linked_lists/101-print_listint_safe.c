#include "lists.h"

/**
  * print_listint_safe - function that prints linked list
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	size_t size = 0;
	const listint_t *up, *down;

	up = head, down = head;
	while (up && up->next && down)
	{
		if (up->next->next == NULL)
			break;
		down = down->next;
		up = up->next->next;
		if (down == up)
		{
			down = down->next;
			count = 1;
			break;
		}
	}
	if (!count)
	{
		while (head)
		{
			size++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (size);
	}
	while (head)
	{
		size++;
		if (head == down)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
