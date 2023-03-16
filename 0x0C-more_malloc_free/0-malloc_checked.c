#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * malloc_checked - function that allocates memory using malloc.
  * @b:- single user input.
  * Return:- Always 0 (success)
  */

void *malloc_checked(unsigned int b)
{

	int *ptr;

	ptr = malloc(b);

		if (ptr == NULL)
		{

			exit(98);
		}

		return (ptr);
}
