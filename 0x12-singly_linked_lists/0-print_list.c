#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
  * print_list - function that prints all elements of list
  * @h:- single user input
  * Return:- Always 0 (success)
  */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	return (i);

}
