#include <stdio.h>
#include <stdlib.h>

#include "lists.h"

/**
  * list_len - function that prints number of elements
  * @h:- single user element
  * Return:- Always 0 (success)
  */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{

		h = h->next;
	}
	return (i);

}
