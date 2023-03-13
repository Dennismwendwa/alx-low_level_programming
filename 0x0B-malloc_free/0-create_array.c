#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * create_array - function that creates array of char.
  * @size:- size of the array.
  * @c:- array
  * Return:- Always 0 (success)
  */


char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	k = malloc(sizeof(char) * size);

	if (k == NULL)
	{
		return (NULL);

	}

	i = 0;

	for (; i < size; i++)
	{
		k[i] = c;
	}

	k[i] = '\0';

	return (k);

}
