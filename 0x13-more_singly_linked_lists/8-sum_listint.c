#include "lists.h"

/**
  * sum_listint - function that sums element n
  * @head:- head of the list
  * Return:- Always 0 (success)
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}
	return (sum);
}
