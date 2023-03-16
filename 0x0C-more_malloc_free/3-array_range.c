#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
  * array_range - Function that creates arrays from range.
  * @min:- single user input.
  * @max:- single user input
  * Return:- Always 0 (success)
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;

	}
	return (ptr);
}
