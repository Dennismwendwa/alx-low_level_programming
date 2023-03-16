#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * _realloc - function that reallocates memory using malloc
  * @ptr:- single user input.
  * @old_size:- single user input.
  * @new_size:- single user input
  * Return:- Always 0 (success)
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		return (p);
	}

	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}

	}
	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *) ptr)[i];
	free(ptr);
	return (p);
}
