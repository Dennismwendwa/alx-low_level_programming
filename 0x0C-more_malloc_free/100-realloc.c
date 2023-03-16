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

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);

}
