#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * _calloc - Function that allocates memory to arrays.
  * @nmemb:- number of elements in array.
  * @size:- single user input
  * Return:- Always 0 (success)
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);

}
